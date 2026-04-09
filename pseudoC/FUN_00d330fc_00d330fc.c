// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d330fc
// Entry Point: 00d330fc
// Size: 256 bytes
// Signature: undefined FUN_00d330fc(void)


void FUN_00d330fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  uVar4 = FUN_00d32f1c(param_1,*(undefined8 *)(param_1 + 0x120),&local_58,param_3,param_4,
                       *(char *)(param_1 + 0x38c) == '\0');
  lVar2 = local_58;
  if ((int)uVar4 == 0) {
    if (local_58 == 0) {
      uVar4 = 0;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00d331f8;
    }
    local_50 = local_58;
    *(code **)(param_1 + 0x210) = FUN_00d2f3c0;
    uVar3 = (***(code ***)(param_1 + 0x120))
                      (*(code ***)(param_1 + 0x120),local_58,param_3,&local_50);
    uVar4 = FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x120),lVar2,param_3,uVar3,local_50,
                         param_4,*(char *)(param_1 + 0x38c) == '\0',1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00d331f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


