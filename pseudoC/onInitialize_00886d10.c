// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00886d10
// Size: 152 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTParallel::onInitialize() */

undefined8 BTParallel::onInitialize(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  code *local_50 [2];
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(in_x0 + 0x28);
  *(undefined8 *)(in_x0 + 0x48) = 0;
  if (*(long *)(in_x0 + 0x30) != lVar2) {
    uVar3 = 0;
    do {
      local_50[0] = onTaskCompleteCallback;
      local_40 = (int)uVar3;
      BehaviorTree::insert
                (*(BehaviorTree **)(in_x0 + 0x40),*(BTBehavior **)(lVar2 + uVar3 * 8),
                 (BTTaskObserver *)local_50);
      lVar2 = *(long *)(in_x0 + 0x28);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(in_x0 + 0x30) - lVar2 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


