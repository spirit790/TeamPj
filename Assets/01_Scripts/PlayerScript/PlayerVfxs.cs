using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class PlayerVfxs : MonoBehaviour
{
    private VolumeProfile postP;
    public LensDistortion distort;
    private ChromaticAberration cAber;
    private float originInt;

    public float maxDistort = 0.7f;
    public float originDistort = 0;

    void Start()
    {

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Keypad5)) StartCoroutine(GetStuned(2));
    }

    public IEnumerator GetStuned(float time)
    {
        postP = GameObject.Find("PostProcessing").GetComponent<Volume>().profile;
        postP.TryGet<LensDistortion>(out distort);
        if (distort != null) originInt = distort.intensity.value;

        float t = 0;
        //Debug.Log("hi");
        while (t < time * 0.66f)
        {
            distort.intensity.value += Time.deltaTime * maxDistort / time;
            t += Time.deltaTime;

            if (distort.intensity.value >= 0.7) break;
            yield return null;
        }

        while (t >= time * 0.66f && t <= time)
        {
            distort.intensity.value -= Time.deltaTime*1f * maxDistort / time;
            t += Time.deltaTime;

            if (distort.intensity.value <= 0) break;

            yield return null;
        }

        //Debug.Log(t);
        distort.intensity.value = originInt;
    }
}
