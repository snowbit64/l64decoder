// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPosition
// Entry Point: 00b541f4
// Size: 560 bytes
// Signature: undefined __thiscall getClosestPosition(CubicSpline * this, Vector3 * param_1, float param_2, Vector3 * param_3)


/* CubicSpline::getClosestPosition(Vector3 const&, float, Vector3&) const */

void __thiscall
CubicSpline::getClosestPosition(CubicSpline *this,Vector3 *param_1,float param_2,Vector3 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float local_8c;
  undefined auStack_88 [16];
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(this + 8);
  uVar3 = *(uint *)(this + 0x28);
  local_90 = 0.0;
  local_8c = 3.402823e+38;
  if (uVar3 == (iVar2 != 1)) {
    uVar7 = 0;
    iVar2 = *(int *)(this + 8);
    fVar9 = local_8c;
  }
  else {
    uVar6 = 0;
    uVar1 = 0;
    do {
      uVar7 = uVar1;
      uVar5 = updateClosestPoint3D(this,&local_90,&local_8c,param_3,uVar7,0.0,1.0,param_2,param_1);
      if ((uVar5 & 1) == 0) {
        (**(code **)(*(long *)this + 0x18))(0,this,uVar7,&local_78,auStack_88);
        uVar8 = NEON_fmadd(fStack_74 - *(float *)(param_1 + 4),fStack_74 - *(float *)(param_1 + 4),
                           (local_78 - *(float *)param_1) * (local_78 - *(float *)param_1));
        fVar9 = (float)NEON_fmadd(local_70 - *(float *)(param_1 + 8),
                                  local_70 - *(float *)(param_1 + 8),uVar8);
        if (fVar9 < local_8c) {
          local_90 = 0.0;
          *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
          *(float *)(param_3 + 8) = local_70;
          uVar6 = uVar7;
          local_8c = fVar9;
          if (fVar9 < param_2 * param_2) {
            iVar2 = *(int *)(this + 8);
            goto joined_r0x00b54338;
          }
        }
      }
      else {
        uVar6 = uVar7;
        if (local_8c < param_2 * param_2) break;
      }
      uVar1 = uVar7 + 1;
      uVar7 = uVar6;
    } while (uVar3 - (iVar2 != 1) != uVar1);
    iVar2 = *(int *)(this + 8);
    fVar9 = local_8c;
  }
joined_r0x00b54338:
  local_8c = fVar9;
  if (iVar2 == 0) {
    (**(code **)(*(long *)this + 0x18))
              (0x3f800000,this,*(int *)(this + 0x28) + -2,&local_78,auStack_88);
    uVar8 = NEON_fmadd(fStack_74 - *(float *)(param_1 + 4),fStack_74 - *(float *)(param_1 + 4),
                       (local_78 - *(float *)param_1) * (local_78 - *(float *)param_1));
    fVar10 = (float)NEON_fmadd(local_70 - *(float *)(param_1 + 8),local_70 - *(float *)(param_1 + 8)
                               ,uVar8);
    if (fVar10 < fVar9) {
      uVar7 = *(int *)(this + 0x28) - 2;
      local_90 = 1.0;
      *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
      *(float *)(param_3 + 8) = local_70;
      local_8c = fVar10;
    }
  }
  (**(code **)(*(long *)this + 0x38))(local_90,this,uVar7);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


