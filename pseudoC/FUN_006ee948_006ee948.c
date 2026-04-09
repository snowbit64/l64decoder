// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ee948
// Entry Point: 006ee948
// Size: 156 bytes
// Signature: undefined FUN_006ee948(void)


void FUN_006ee948(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  local_30 = 0;
  while (iVar3 = AInputQueue_getEvent(uVar4,&local_30), -1 < iVar3) {
    iVar3 = AInputQueue_preDispatchEvent(*(undefined8 *)(param_1 + 0x40),local_30);
    if (iVar3 == 0) {
      if (*(code **)(param_1 + 0x10) == (code *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(param_1 + 0x10))(param_1,local_30);
      }
      AInputQueue_finishEvent(*(undefined8 *)(param_1 + 0x40),local_30,uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


