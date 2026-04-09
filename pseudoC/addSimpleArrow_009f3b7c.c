// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSimpleArrow
// Entry Point: 009f3b7c
// Size: 936 bytes
// Signature: undefined __thiscall addSimpleArrow(DeferredDebugRenderer * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, float * param_5, CATEGORY param_6)


/* DeferredDebugRenderer::addSimpleArrow(Vector3 const&, Vector3 const&, Vector3 const&, float,
   float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addSimpleArrow
          (DeferredDebugRenderer *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
          float param_4,float *param_5,CATEGORY param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_2 + 8);
  fVar11 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar10 = (float)*(undefined8 *)param_2;
  fVar8 = *(float *)param_3;
  fVar14 = fVar10 * param_4 + (float)*(undefined8 *)param_1;
  fVar15 = fVar11 * param_4 + (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_98 = CONCAT44(fVar15,fVar14);
  fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar13 = fVar4 * param_4 + *(float *)(param_1 + 8);
  uVar7 = NEON_rev64(CONCAT44(-fVar4,-fVar10),4);
  fVar12 = (float)*(undefined8 *)(param_3 + 4);
  local_90 = fVar13;
  addLine(this,(float *)param_1,param_5,(float *)&local_98,param_5,param_6);
  fVar2 = (float)*(undefined8 *)param_3 * -0.5 - (float)*(undefined8 *)param_2;
  fVar3 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * -0.5 -
          (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar5 = *(float *)(param_3 + 8) * -0.5 - *(float *)(param_2 + 8);
  fVar9 = (float)NEON_fmadd(fVar5,fVar5,fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = 1.0;
  if (1e-06 < fVar9) {
    fVar6 = 1.0 / SQRT(fVar9);
  }
  fVar9 = *(float *)(this + 0x2a4) * 0.125;
  local_88 = CONCAT44(fVar15 + fVar3 * fVar6 * fVar9,fVar14 + fVar2 * fVar6 * fVar9);
  local_80 = fVar13 + fVar5 * fVar6 * fVar9;
  fVar9 = fVar12 * (float)uVar7 + fVar16 * fVar11;
  fVar16 = fVar16 * (float)((ulong)uVar7 >> 0x20) + fVar8 * fVar4;
  fVar8 = fVar8 * -fVar11 + fVar12 * fVar10;
  addLine(this,(float *)&local_98,param_5,(float *)&local_88,param_5,param_6);
  fVar2 = (float)*(undefined8 *)param_3 * 0.5 - (float)*(undefined8 *)param_2;
  fVar3 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * 0.5 -
          (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar4 = *(float *)(param_3 + 8) * 0.5 - *(float *)(param_2 + 8);
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = 1.0;
  if (1e-06 < fVar5) {
    fVar6 = 1.0 / SQRT(fVar5);
  }
  fVar5 = *(float *)(this + 0x2a4) * 0.125;
  local_88 = CONCAT44(fVar15 + fVar3 * fVar6 * fVar5,fVar14 + fVar2 * fVar6 * fVar5);
  local_80 = fVar13 + fVar4 * fVar6 * fVar5;
  addLine(this,(float *)&local_98,param_5,(float *)&local_88,param_5,param_6);
  fVar2 = fVar9 * -0.5 - (float)*(undefined8 *)param_2;
  fVar3 = fVar16 * -0.5 - (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar4 = fVar8 * -0.5 - *(float *)(param_2 + 8);
  fVar6 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3 + fVar2 * fVar2);
  fVar5 = 1.0;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  fVar6 = *(float *)(this + 0x2a4) * 0.125;
  local_88 = CONCAT44(fVar15 + fVar3 * fVar5 * fVar6,fVar14 + fVar2 * fVar5 * fVar6);
  local_80 = fVar13 + fVar4 * fVar5 * fVar6;
  addLine(this,(float *)&local_98,param_5,(float *)&local_88,param_5,param_6);
  fVar2 = fVar9 * 0.5 - (float)*(undefined8 *)param_2;
  fVar3 = fVar16 * 0.5 - (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar4 = fVar8 * 0.5 - *(float *)(param_2 + 8);
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = 1.0;
  if (1e-06 < fVar5) {
    fVar6 = 1.0 / SQRT(fVar5);
  }
  fVar5 = *(float *)(this + 0x2a4) * 0.125;
  local_88 = CONCAT44(fVar15 + fVar3 * fVar6 * fVar5,fVar14 + fVar2 * fVar6 * fVar5);
  local_80 = fVar13 + fVar4 * fVar6 * fVar5;
  addLine(this,(float *)&local_98,param_5,(float *)&local_88,param_5,param_6);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


