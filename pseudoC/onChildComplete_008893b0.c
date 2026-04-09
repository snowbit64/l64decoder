// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildComplete
// Entry Point: 008893b0
// Size: 184 bytes
// Signature: undefined onChildComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTSelector::onChildComplete() */

void BTSelector::onChildComplete(void)

{
  BTBehavior **ppBVar1;
  int iVar2;
  long lVar3;
  BTBehavior *in_x0;
  BehaviorTree *this;
  Status SVar4;
  code *local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(**(long **)(in_x0 + 0x48) + 8);
  if (iVar2 == 2) {
    ppBVar1 = (BTBehavior **)(*(long **)(in_x0 + 0x48) + 1);
    this = *(BehaviorTree **)(in_x0 + 0x40);
    *(BTBehavior ***)(in_x0 + 0x48) = ppBVar1;
    if (ppBVar1 != *(BTBehavior ***)(in_x0 + 0x30)) {
      local_30 = 0;
      local_40[0] = onChildCompleteCallback;
      BehaviorTree::insert(this,*ppBVar1,(BTTaskObserver *)local_40);
      goto LAB_00889444;
    }
    SVar4 = 2;
  }
  else {
    if (iVar2 != 1) goto LAB_00889444;
    this = *(BehaviorTree **)(in_x0 + 0x40);
    SVar4 = 1;
  }
  BehaviorTree::terminate(this,in_x0,SVar4,true);
LAB_00889444:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


