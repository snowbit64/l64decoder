// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2df3c
// Entry Point: 00d2df3c
// Size: 348 bytes
// Signature: undefined FUN_00d2df3c(void)


void FUN_00d2df3c(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = FUN_00d2f238();
  if ((int)uVar2 == 0) {
    *(code **)(param_1 + 0x210) = FUN_00d377a4;
    local_50 = param_2;
    iVar1 = (**(code **)(*(long *)(param_1 + 0x120) + 8))
                      (*(long *)(param_1 + 0x120),param_2,param_3,&local_50);
    if (iVar1 == -2) {
      if (*(char *)(param_1 + 0x38c) == '\0') {
LAB_00d2e04c:
        uVar2 = 0;
        *param_4 = param_2;
        goto LAB_00d2e054;
      }
      uVar2 = 6;
      *(long *)(param_1 + 0x220) = param_2;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    else if (iVar1 == -1) {
      if (*(char *)(param_1 + 0x38c) == '\0') goto LAB_00d2e04c;
      uVar2 = 5;
      *(long *)(param_1 + 0x220) = param_2;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    else {
      if (((iVar1 != 0xe) || (param_2 = local_50, local_50 != param_3)) ||
         (param_2 = param_3, *(char *)(param_1 + 0x38c) != '\0')) {
        *(code **)(param_1 + 0x210) = FUN_00d378e4;
        uVar2 = FUN_00d378e4(param_1,param_2,param_3,param_4);
        if (*(long *)(lVar3 + 0x28) == local_48) {
          return;
        }
        goto LAB_00d2e094;
      }
      uVar2 = 0;
      *param_4 = param_3;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    if (lVar3 == local_48) {
      return;
    }
  }
  else {
LAB_00d2e054:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
LAB_00d2e094:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


