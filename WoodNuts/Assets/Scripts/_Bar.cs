using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Bar : MonoBehaviour
{
    public List<_Hole> ListHole;

    private Rigidbody2D _rig;
    private HingeJoint2D _hingeJoint;
    private List<_MaskBar> _listMaskBar;


    public List<_MaskBar> ListMaskBar => _listMaskBar;

    private void Awake()
    {
        _rig = GetComponent<Rigidbody2D>();
        _hingeJoint = GetComponent<HingeJoint2D>();
        _rig.bodyType = RigidbodyType2D.Kinematic;
        _listMaskBar = transform.GetComponentsInChildren<_MaskBar>().ToList();
    }

    private int NumScrew
    {
        get
        {
            if (_listMaskBar == null) return 0;
            if (_listMaskBar.Count <= 0) return 0;
            var result = 0;
            foreach (var maskBar in _listMaskBar)
            {
                if (!maskBar.IsMaskBarIntoHole()) continue;
                if (maskBar.Hole.Screw == null) continue;
                result++;
                if (result >= 2) return result;
            }

            return result;
        }
    }

    public void UpdateState()
    {
        var numScrew = NumScrew;
        switch (numScrew)
        {
            case 0:
                _hingeJoint.connectedBody = null;
                _hingeJoint.autoConfigureConnectedAnchor = false;
                _hingeJoint.enabled = false;
                _rig.bodyType = RigidbodyType2D.Dynamic;
                break;
            case 1:
                StartCoroutine(WaitSetStateHingeJoint());
                break;
            default:
                SetRotateBar();
                break;
        }
    }

    private IEnumerator WaitSetStateHingeJoint()
    {
        _hingeJoint.enabled = true;
        var rig = GetHoleHasScrew().GetComponent<Rigidbody2D>();
        if (rig == _hingeJoint.connectedBody) yield break;
        _hingeJoint.connectedBody = rig;
        _hingeJoint.anchor = _rig.transform.InverseTransformPoint(rig.transform.position);
        _hingeJoint.connectedAnchor = _rig.transform.InverseTransformPoint(rig.transform.position);
        _hingeJoint.autoConfigureConnectedAnchor = true;
        // _hingeJoint.useMotor = true;
        _hingeJoint.motor = new JointMotor2D {motorSpeed = 10, maxMotorTorque = 1000};
        _rig.bodyType = RigidbodyType2D.Dynamic;
        _rig.simulated = true;
        yield return new WaitForSeconds(0.2f);
        _hingeJoint.useMotor = false;
    }

    // set lai vi tri va goc xoay khi bar duoc co dinh lai = 2 dinh
    private void SetRotateBar()
    {
        _hingeJoint.enabled = false;
        _rig.simulated = false;
        _rig.bodyType = RigidbodyType2D.Kinematic;
        Vector3 pos1 = default;
        Vector3 pos2 = default;
        bool isSetPos1 = false;
        bool isLogicCorrect = false;
        foreach (var hole in ListHole)
        {
            if (hole.Screw == null) continue;
            if (!isSetPos1)
            {
                isSetPos1 = true;
                pos1 = hole.transform.position;
            }
            else
            {
                pos2 = hole.transform.position;
                isLogicCorrect = true;
                break;
            }
        }

        if (!isLogicCorrect)
        {
            Debug.LogError("Logic is incorrect!!!, can't get min 2 hole has screw  " + gameObject.name);
        }
        else
        {
            Debug.Log("<color=green> Logic is correct, yeah!!!    </color>" + gameObject.name);
        }

        var angleRadians = Mathf.Atan2(pos2.y - pos1.y, pos2.x - pos1.x);
        var angleDegrees = angleRadians * Mathf.Rad2Deg;
        if (angleDegrees < 0)
        {
            angleDegrees += 360;
        }

        var rot = Quaternion.Euler(0, 0, angleDegrees);
        transform.rotation = rot;
    }

    private _Hole GetHoleHasScrew()
    {
        var listHole = FindObjectsByType<_Hole>(FindObjectsSortMode.None);
        foreach (var hole in listHole)
        {
            if (hole.Screw is null) continue;
            foreach (var maskBar in _listMaskBar)
            {
                var vt = maskBar.transform.position - hole.transform.position;
                if (Vector2.SqrMagnitude(vt) > _Const.EPSILON) continue;
                return hole;
            }
        }

        Debug.LogError("Error: can't null hole in case. Consider logic here!!!");
        return null;
    }

    [Button]
    private void SetHingeJoint(Transform point)
    {
        var rig = GetComponent<Rigidbody2D>();
        var connect = point.GetComponent<Rigidbody2D>();
        _hingeJoint.connectedBody = connect;
        _hingeJoint.anchor = rig.transform.InverseTransformPoint(connect.transform.position);
        _hingeJoint.connectedAnchor = rig.transform.InverseTransformPoint(connect.transform.position);
        _hingeJoint.connectedAnchor = Vector2.zero;
        //_hingeJoint.enabled = true;
    }

    [Button]
    private void TestLogic()
    {
    }

    private void SetPosBar(_Hole hole1, _Hole hole2)
    {
        var pointA = hole1.transform.position;
        var pointB = hole2.transform.position;
        var midPoint = pointA + pointB;
        midPoint /= 2;
        transform.position = midPoint;
        var angleRadians = Mathf.Atan2(pointB.y - pointA.y, pointB.x - pointA.x);
        var angleDegrees = angleRadians * Mathf.Rad2Deg;
        if (angleDegrees < 0)
        {
            angleDegrees += 360;
        }

        var rot = Quaternion.Euler(0, 0, angleDegrees);
        transform.rotation = rot;
    }

    [Button]
    private void SetBar(List<_Hole> holes)
    {
        var listChild = transform.GetComponentsInChildren<SpriteMask>();
        foreach (var child in listChild)
        {
            DestroyImmediate(child.gameObject);
        }

        var prefabMaskHole = Resources.Load<GameObject>("MaskBar");
        foreach (var hole in holes)
        {
            var maskBar = Instantiate(prefabMaskHole, hole.transform.position, Quaternion.identity, transform);
            maskBar.GetComponent<_MaskBar>().SetHole(hole.transform);
        }

        SetPosBar(holes[0], holes[^1]);
    }

    public void SetData(List<_Hole> listHole)
    {
        ListHole = listHole;
    }
}