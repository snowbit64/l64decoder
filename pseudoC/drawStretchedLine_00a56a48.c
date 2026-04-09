// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawStretchedLine
// Entry Point: 00a56a48
// Size: 260 bytes
// Signature: undefined __thiscall drawStretchedLine(MergedShadowGroup * this, DeferredDebugRenderer * param_1, Vector3 * param_2, Vector3 * param_3, float * param_4, float param_5, float param_6)


/* LightSource::MergedShadowGroup::drawStretchedLine(DeferredDebugRenderer*, Vector3 const&, Vector3
   const&, float*, float, float) const */

void __thiscall
LightSource::MergedShadowGroup::drawStretchedLine
          (MergedShadowGroup *this,DeferredDebugRenderer *param_1,Vector3 *param_2,Vector3 *param_3,
          float *param_4,float param_5,float param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar11 = 1.0;
  fVar2 = (float)*(undefined8 *)param_3;
  fVar7 = (float)*(undefined8 *)param_2;
  fVar4 = fVar2 - fVar7;
  fVar3 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar5 = fVar3 - fVar8;
  fVar6 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar10 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5 + fVar4 * fVar4);
  fVar9 = 1.0;
  if (1e-06 < fVar10) {
    fVar11 = 1.0 / SQRT(fVar10);
  }
  local_38 = CONCAT44(fVar8 - fVar5 * fVar11 * param_5,fVar7 - fVar4 * fVar11 * param_5);
  local_30 = *(float *)(param_2 + 8) - fVar6 * fVar11 * param_5;
  if (1e-06 < fVar10) {
    fVar9 = 1.0 / SQRT(fVar10);
  }
  local_40 = *(float *)(param_3 + 8) + fVar6 * fVar9 * param_6;
  local_48 = CONCAT44(fVar3 + fVar5 * fVar9 * param_6,fVar2 + fVar4 * fVar9 * param_6);
  DeferredDebugRenderer::addLine
            (param_1,(float *)&local_38,param_4,(float *)&local_48,param_4,0x7ff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


