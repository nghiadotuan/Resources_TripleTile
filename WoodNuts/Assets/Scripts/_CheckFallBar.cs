using System;
using System.Collections;
using UnityEngine;

public class _CheckFallBar : MonoBehaviour
{
    private void Start()
    {
        var cam = Camera.main;
        var height = cam.orthographicSize * 2;
        var pos = Vector3.zero;
        pos.y -= height;
        transform.position = pos;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.TryGetComponent<_Bar>(out var bar))
        {
            StartCoroutine(WaitCheckWin(bar.gameObject));
        }
    }

    private IEnumerator WaitCheckWin(GameObject bar)
    {
        bar.GetComponent<Rigidbody2D>().isKinematic = true;
        bar.GetComponent<Rigidbody2D>().simulated = false;
        yield return new WaitForSeconds(1);
        bar.SetActive(false);
        yield return new WaitForEndOfFrame();
        var bars = FindObjectsByType<_Bar>(FindObjectsSortMode.None);
        if (bars.Length <= 0)
        {
            Debug.Log("WINNNNNNNNNNNNN");
            _GameManager.Instance.SetActiveWin(true);
            yield return new WaitForSeconds(1);
            _GameManager.Instance.NextLevel();
        }
        else
        {
            Debug.Log("AAAAAAA");
        }
    }
}