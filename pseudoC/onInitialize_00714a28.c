// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00714a28
// Size: 120 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTSequence::onInitialize() */

undefined8 BTSequence::onInitialize(void)

{
  BTBehavior **ppBVar1;
  long lVar2;
  long in_x0;
  code *local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  ppBVar1 = *(BTBehavior ***)(in_x0 + 0x28);
  *(BTBehavior ***)(in_x0 + 0x48) = ppBVar1;
  if (ppBVar1 != *(BTBehavior ***)(in_x0 + 0x30)) {
    local_30 = 0;
    local_40[0] = onChildCompleteCallback;
    BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x40),*ppBVar1,(BTTaskObserver *)local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


