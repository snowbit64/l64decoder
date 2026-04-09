// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2f174
// Entry Point: 00d2f174
// Size: 196 bytes
// Signature: undefined FUN_00d2f174(void)


void FUN_00d2f174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d2f238();
  if (iVar2 == 0) {
    *(code **)(param_1 + 0x210) = FUN_00d2f3c0;
    local_50 = param_2;
    uVar3 = (***(code ***)(param_1 + 0x120))(*(code ***)(param_1 + 0x120),param_2,param_3,&local_50)
    ;
    FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,uVar3,local_50,param_4,
                 *(char *)(param_1 + 0x38c) == '\0',1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


