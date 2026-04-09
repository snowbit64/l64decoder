// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8ee0
// Entry Point: 007b8ee0
// Size: 180 bytes
// Signature: undefined FUN_007b8ee0(void)


void FUN_007b8ee0(Vector3 *param_1,float *param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  Vector3 aVStack_48 [16];
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  NavigationPath::getPositionAndDirection(*param_2,param_1,aVStack_48);
  uVar2 = NEON_fmadd(local_38,local_38,fStack_34 * fStack_34);
  fVar4 = (float)NEON_fmadd(local_30,local_30,uVar2);
  fVar3 = 1.0;
  if (1e-06 < fVar4) {
    fVar3 = 1.0 / SQRT(fVar4);
  }
  param_2[0x42] = 5.605194e-45;
  param_2[0x46] = 5.605194e-45;
  param_2[0x40] = local_38 * fVar3;
  param_2[0x44] = fStack_34 * fVar3;
  param_2[0x48] = local_30 * fVar3;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


