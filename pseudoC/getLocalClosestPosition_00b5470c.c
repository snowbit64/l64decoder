// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalClosestPosition
// Entry Point: 00b5470c
// Size: 420 bytes
// Signature: undefined __thiscall getLocalClosestPosition(CubicSpline * this, float param_1, float param_2, Vector3 * param_3, float param_4, Vector3 * param_5)


/* CubicSpline::getLocalClosestPosition(float, float, Vector3 const&, float, Vector3&) const */

float __thiscall
CubicSpline::getLocalClosestPosition
          (CubicSpline *this,float param_1,float param_2,Vector3 *param_3,float param_4,
          Vector3 *param_5)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined auStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar7 = (float)NEON_fmsub(param_2,0x3f000000,param_1);
  fVar8 = (float)NEON_fmadd(param_2,0x3f000000,param_1);
  fVar6 = *(float *)(this + 0x2c);
  (**(code **)(*(long *)this + 0x10))(fVar7,this,&local_98,auStack_88);
  (**(code **)(*(long *)this + 0x10))(fVar8,this,&local_a8,auStack_88);
  local_98 = local_98 - *(float *)param_3;
  fStack_94 = fStack_94 - *(float *)(param_3 + 4);
  local_a8 = local_a8 - *(float *)param_3;
  fStack_a4 = fStack_a4 - *(float *)(param_3 + 4);
  local_90 = local_90 - *(float *)(param_3 + 8);
  uVar5 = NEON_fmadd(fStack_94,fStack_94,local_98 * local_98);
  local_a0 = local_a0 - *(float *)(param_3 + 8);
  uVar3 = NEON_fmadd(fStack_a4,fStack_a4,local_a8 * local_a8);
  fVar10 = (float)NEON_fmadd(local_90,local_90,uVar5);
  fVar11 = (float)NEON_fmadd(local_a0,local_a0,uVar3);
  do {
    fVar9 = (fVar8 + fVar7) * 0.5;
    (**(code **)(*(long *)this + 0x10))(fVar9,this,&local_b8,auStack_88);
    uVar3 = NEON_fmadd(fStack_b4 - *(float *)(param_3 + 4),fStack_b4 - *(float *)(param_3 + 4),
                       (local_b8 - *(float *)param_3) * (local_b8 - *(float *)param_3));
    fVar4 = (float)NEON_fmadd(local_b0 - *(float *)(param_3 + 8),local_b0 - *(float *)(param_3 + 8),
                              uVar3);
    if (fVar4 <= param_4 * param_4) break;
    fVar2 = fVar9;
    if (fVar10 <= fVar11) {
      fVar2 = fVar7;
      fVar8 = fVar9;
    }
    fVar7 = fVar2;
    if (fVar8 - fVar7 < param_4 / fVar6) break;
    fVar2 = fVar4;
    if (fVar10 <= fVar11) {
      fVar2 = fVar10;
      fVar11 = fVar4;
    }
    fVar10 = fVar2;
  } while (param_4 / fVar6 + fVar7 <= fVar8);
  *(ulong *)param_5 = CONCAT44(fStack_b4,local_b8);
  *(float *)(param_5 + 8) = local_b0;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar9;
}


