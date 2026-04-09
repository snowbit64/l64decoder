// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSimpleArrowPart
// Entry Point: 009f3a70
// Size: 268 bytes
// Signature: undefined __thiscall addSimpleArrowPart(DeferredDebugRenderer * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, bool param_4, float * param_5, CATEGORY param_6)


/* DeferredDebugRenderer::addSimpleArrowPart(Vector3 const&, Vector3 const&, Vector3 const&, bool,
   float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addSimpleArrowPart
          (DeferredDebugRenderer *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          bool param_4,float *param_5,CATEGORY param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(param_3 + 8);
  local_38._0_4_ = (float)*(undefined8 *)param_3;
  local_38._4_4_ = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  if (param_4) {
    local_38._0_4_ = -(float)local_38;
    local_38._4_4_ = -local_38._4_4_;
    fVar3 = -fVar3;
  }
  fVar4 = fVar3 * 0.5 - *(float *)(param_2 + 8);
  fVar3 = (float)local_38 * 0.5 - (float)*(undefined8 *)param_2;
  fVar2 = local_38._4_4_ * 0.5 - (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar6 = (float)NEON_fmadd(fVar4,fVar4,fVar2 * fVar2 + fVar3 * fVar3);
  fVar5 = 1.0;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  fVar6 = *(float *)(this + 0x2a4) * 0.125;
  local_30 = fVar4 * fVar5 * fVar6 + *(float *)(param_1 + 8);
  local_38 = CONCAT44(fVar2 * fVar5 * fVar6 + (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar3 * fVar5 * fVar6 + (float)*(undefined8 *)param_1);
  addLine(this,(float *)param_1,param_5,(float *)&local_38,param_5,param_6);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


