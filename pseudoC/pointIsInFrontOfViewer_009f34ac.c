// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointIsInFrontOfViewer
// Entry Point: 009f34ac
// Size: 60 bytes
// Signature: undefined __thiscall pointIsInFrontOfViewer(DeferredDebugRenderer * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* DeferredDebugRenderer::pointIsInFrontOfViewer(Vector3 const&, Vector3 const&, Vector3 const&) */

bool __thiscall
DeferredDebugRenderer::pointIsInFrontOfViewer
          (DeferredDebugRenderer *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(float *)param_1 - *(float *)param_2,*(undefined4 *)param_3,
                     (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * *(float *)(param_3 + 4));
  fVar2 = (float)NEON_fmadd(*(float *)(param_1 + 8) - *(float *)(param_2 + 8),
                            *(undefined4 *)(param_3 + 8),uVar1);
  return 0.0 <= fVar2;
}


