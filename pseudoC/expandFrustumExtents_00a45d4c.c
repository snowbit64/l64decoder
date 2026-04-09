// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expandFrustumExtents
// Entry Point: 00a45d4c
// Size: 68 bytes
// Signature: undefined __cdecl expandFrustumExtents(float param_1, Vector3 * param_2, Vector3 * param_3)


/* ShadowRenderController::expandFrustumExtents(float, Vector3&, Vector3&) */

void ShadowRenderController::expandFrustumExtents(float param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 != 1.0) {
    fVar1 = (float)*(undefined8 *)param_2;
    fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar3 = (fVar1 + (float)*(undefined8 *)param_3) * 0.5;
    fVar4 = (fVar2 + (float)((ulong)*(undefined8 *)param_3 >> 0x20)) * 0.5;
    *(ulong *)param_2 =
         CONCAT44(fVar4 + (fVar2 - fVar4) * param_1,fVar3 + (fVar1 - fVar3) * param_1);
    *(ulong *)param_3 =
         CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar4) * param_1,
                  fVar3 + ((float)*(undefined8 *)param_3 - fVar3) * param_1);
  }
  return;
}


