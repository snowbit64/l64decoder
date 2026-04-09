// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildComplete
// Entry Point: 007148ac
// Size: 176 bytes
// Signature: undefined onChildComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRootSelector::onChildComplete() */

void BTRootSelector::onChildComplete(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  BTBehavior **ppBVar3;
  code *local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(**(long **)(in_x0 + 0x48) + 8);
  if (iVar1 == 2) {
    ppBVar3 = (BTBehavior **)(*(long **)(in_x0 + 0x48) + 1);
    *(BTBehavior ***)(in_x0 + 0x48) = ppBVar3;
    if (ppBVar3 == *(BTBehavior ***)(in_x0 + 0x30)) {
      ppBVar3 = *(BTBehavior ***)(in_x0 + 0x28);
      *(BTBehavior ***)(in_x0 + 0x48) = ppBVar3;
    }
  }
  else {
    if (iVar1 != 1) goto LAB_00714938;
    ppBVar3 = *(BTBehavior ***)(in_x0 + 0x28);
    *(BTBehavior ***)(in_x0 + 0x48) = ppBVar3;
  }
  local_40[0] = onChildCompleteCallback;
  local_30 = 0;
  BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x40),*ppBVar3,(BTTaskObserver *)local_40);
LAB_00714938:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


