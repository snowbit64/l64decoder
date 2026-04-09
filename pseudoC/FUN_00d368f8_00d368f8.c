// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d368f8
// Entry Point: 00d368f8
// Size: 216 bytes
// Signature: undefined FUN_00d368f8(void)


void FUN_00d368f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  uVar2 = FUN_00d36480(param_1,*(undefined8 *)(param_1 + 0x120),&local_40,param_3,param_4,
                       *(char *)(param_1 + 0x38c) == '\0');
  if ((int)uVar2 == 0) {
    if (local_40 == 0) {
      uVar2 = 0;
    }
    else if (*(long *)(param_1 + 0x380) == 0) {
      *(code **)(param_1 + 0x210) = FUN_00d32358;
      uVar2 = FUN_00d32358(param_1,local_40,param_3,param_4);
    }
    else {
      *(code **)(param_1 + 0x210) = FUN_00d36e54;
      uVar2 = FUN_00d36e54(param_1,local_40,param_3,param_4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


