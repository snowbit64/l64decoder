// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d377a4
// Entry Point: 00d377a4
// Size: 320 bytes
// Signature: undefined FUN_00d377a4(void)


void FUN_00d377a4(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  iVar1 = (**(code **)(*(long *)(param_1 + 0x120) + 8))();
  if (iVar1 == -2) {
    if (*(char *)(param_1 + 0x38c) != '\0') {
      uVar2 = 6;
      *(long *)(param_1 + 0x220) = param_2;
      lVar4 = *(long *)(lVar4 + 0x28);
      goto joined_r0x00d37848;
    }
LAB_00d37898:
    *param_4 = param_2;
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    if (iVar1 == -1) {
      if (*(char *)(param_1 + 0x38c) != '\0') {
        uVar2 = 5;
        *(long *)(param_1 + 0x220) = param_2;
        lVar4 = *(long *)(lVar4 + 0x28);
        goto joined_r0x00d37848;
      }
      goto LAB_00d37898;
    }
    if (((iVar1 != 0xe) || (param_2 != param_3)) ||
       (param_2 = param_3, *(char *)(param_1 + 0x38c) != '\0')) {
      *(code **)(param_1 + 0x210) = FUN_00d378e4;
      uVar2 = FUN_00d378e4(param_1,param_2,param_3,param_4);
      lVar4 = *(long *)(lVar4 + 0x28);
      goto joined_r0x00d37848;
    }
    *param_4 = param_3;
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  uVar2 = 0;
joined_r0x00d37848:
  if (lVar4 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


