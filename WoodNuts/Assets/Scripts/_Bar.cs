using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Bar : MonoBehaviour
{
    [SerializeField] private List<_Hole> _listHole;

    private Rigidbody2D _rig;
    private HingeJoint2D _hingeJoint;

    private void Awake()
    {
        _rig = GetComponent<Rigidbody2D>();
        _hingeJoint = GetComponent<HingeJoint2D>();
        _rig.bodyType = RigidbodyType2D.Kinematic;
    }

    private int NumScrew
    {
        get
        {
            if (_listHole == null) return 0;
            if (_listHole.Count <= 0) return 0;
            var result = 0;
            foreach (var hole in _listHole)
            {
                var collider = hole.GetComponent<Collider2D>();
                if (collider.enabled) result++;
            }

            return result;
        }
    }

    public void UpdateState()
    {
        var numScrew = NumScrew;
        Debug.LogError(numScrew);
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
                _rig.bodyType = RigidbodyType2D.Kinematic;
                break;
        }
    }

    private IEnumerator WaitSetStateHingeJoint()
    {
        var rig = GetHoleHasScrew().GetComponent<Rigidbody2D>();
        _hingeJoint.connectedBody = rig;
        _hingeJoint.anchor = _rig.transform.InverseTransformPoint(rig.transform.position);
        _hingeJoint.connectedAnchor = _rig.transform.InverseTransformPoint(rig.transform.position);
        _hingeJoint.autoConfigureConnectedAnchor = true;
        _hingeJoint.useMotor = true;
        _hingeJoint.motor = new JointMotor2D {motorSpeed = 10, maxMotorTorque = 1000};
        _rig.bodyType = RigidbodyType2D.Dynamic;
        yield return new WaitForSeconds(0.2f);
        _hingeJoint.useMotor = false;
    }

    private _Hole GetHoleHasScrew()
    {
        foreach (var hole in _listHole)
        {
            if (hole.IsEmpty) continue;
            return hole;
        }

        Debug.LogError("Error: can't null hole in case. Consider logic here!!!");
        return null;
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        //TODO: xet va cham voi bottom level. 
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

        var prefabMaskHole = Resources.Load("MaskBar");
        for (var i = 0; i < holes.Count; i++)
        {
            var maskBar = Instantiate(prefabMaskHole, holes[i].transform.position, Quaternion.identity, transform);
        }

        SetPosBar(holes[0], holes[^1]);
    }

    public void SetData(List<_Hole> listHole)
    {
        _listHole = listHole;
    }
}