// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrientation
// Entry Point: 00b5f868
// Size: 324 bytes
// Signature: undefined __cdecl getOrientation(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Spline::getOrientation(Vector3 const&, Vector3 const&, Vector3&) */

void Spline::getOrientation(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  fVar7 = 1.0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  fStack_64 = (float)NEON_fmsub(fVar6,*(float *)param_1,fVar4 * *(float *)(param_1 + 8));
  local_68 = (float)NEON_fmsub(fVar5,*(float *)(param_1 + 8),fVar6 * *(float *)(param_1 + 4));
  local_60 = (float)NEON_fmsub(fVar4,*(float *)(param_1 + 4),fVar5 * *(float *)param_1);
  local_40 = -fVar6;
  uVar2 = NEON_fmadd(local_68,local_68,fStack_64 * fStack_64);
  local_48 = -fVar4;
  fVar8 = (float)NEON_fmadd(local_60,local_60,uVar2);
  fStack_44 = -fVar5;
  fVar3 = 1.0;
  if (1e-06 < fVar8) {
    fVar7 = 1.0 / SQRT(fVar8);
  }
  local_60 = local_60 * fVar7;
  fStack_64 = fStack_64 * fVar7;
  local_68 = local_68 * fVar7;
  fStack_54 = (float)NEON_fmadd(local_40,local_68,fVar4 * local_60);
  local_58 = (float)NEON_fmadd(fStack_44,local_60,fVar6 * fStack_64);
  local_50 = (float)NEON_fmadd(local_48,fStack_64,fVar5 * local_68);
  uVar2 = NEON_fmadd(local_58,local_58,fStack_54 * fStack_54);
  fVar4 = (float)NEON_fmadd(local_50,local_50,uVar2);
  if (1e-06 < fVar4) {
    fVar3 = 1.0 / SQRT(fVar4);
  }
  local_58 = local_58 * fVar3;
  fStack_54 = fStack_54 * fVar3;
  local_50 = local_50 * fVar3;
  local_5c = 0;
  local_4c = 0;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  uStack_2c = 0x3f800000;
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_68,param_3,(Vector3 *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


