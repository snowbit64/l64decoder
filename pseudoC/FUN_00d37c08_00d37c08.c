// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37c08
// Entry Point: 00d37c08
// Size: 280 bytes
// Signature: undefined FUN_00d37c08(void)


void FUN_00d37c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  iVar3 = (***(code ***)(param_1 + 0x120))();
  uVar2 = local_50;
  if (iVar3 < 1) {
    if ((*(char *)(param_1 + 0x38c) == '\0') && (iVar3 != 0)) {
      uVar4 = 0;
      *param_4 = param_2;
      goto LAB_00d37cf4;
    }
    if (iVar3 + 2U < 3) {
      uVar4 = (ulong)(4 - iVar3);
      goto LAB_00d37cf4;
    }
  }
  else if (iVar3 == 0xe) {
    iVar3 = (***(code ***)(param_1 + 0x120))
                      (*(code ***)(param_1 + 0x120),local_50,param_3,&local_50);
    param_2 = uVar2;
  }
  *(code **)(param_1 + 0x210) = FUN_00d2f3c0;
  uVar4 = FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,iVar3,local_50,
                       param_4,*(char *)(param_1 + 0x38c) == '\0',1);
LAB_00d37cf4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


