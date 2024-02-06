using System.Collections;
using UnityEngine;

public class _CheckFallBar : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.TryGetComponent<_Bar>(out var bar))
        {
            bar.GetComponent<Rigidbody2D>().isKinematic = true;
            bar.GetComponent<Rigidbody2D>().simulated = false;
            bar.gameObject.SetActive(false);
            StartCoroutine(WaitCheckWin());
        }
    }

    private IEnumerator WaitCheckWin()
    {
        var bars = FindObjectsByType<_Bar>(FindObjectsSortMode.None);
        yield return new WaitForSeconds(1);
        if (bars.Length <= 0)
        {
            Debug.Log("WINNNNNNNNNNNNN");
            _GameManager.Instance.SetActiveWin(true);
        }
        else
        {
            Debug.Log("AAAAAAA");
        }
    }
}