// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00889144
// Size: 124 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTModifyResult::onInitialize() */

void BTModifyResult::onInitialize(void)

{
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  code *local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(in_x0 + 0x38) = 3;
  if (*(BTBehavior **)(in_x0 + 0x30) == (BTBehavior *)0x0) {
    uVar2 = 2;
  }
  else {
    local_30 = 0;
    local_40[0] = onChildCompleteCallback;
    BehaviorTree::insert
              (*(BehaviorTree **)(in_x0 + 0x28),*(BTBehavior **)(in_x0 + 0x30),
               (BTTaskObserver *)local_40);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


