// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f51538
// Entry Point: 00f51538
// Size: 164 bytes
// Signature: undefined FUN_00f51538(void)


void FUN_00f51538(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x28) = param_1;
  uVar3 = *param_3;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x18) = param_3[1];
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  fVar2 = fVar4 + param_1 + *(float *)(param_2 + 0x20);
  local_38 = CONCAT44((float)((ulong)*param_4 >> 0x20) - (float)((ulong)*param_3 >> 0x20) * fVar4,
                      (float)*param_4 - (float)*param_3 * fVar4);
  local_30 = NEON_fmsub(*(undefined4 *)(param_3 + 1),fVar4,*(undefined4 *)(param_4 + 1));
  *(float *)(param_2 + 0x28) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined *)(param_2 + 0x2c) = 1;
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(*(long **)(param_2 + 8),param_3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


