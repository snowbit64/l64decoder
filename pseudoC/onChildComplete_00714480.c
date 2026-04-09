// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildComplete
// Entry Point: 00714480
// Size: 228 bytes
// Signature: undefined onChildComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRandomSelector::onChildComplete() */

void BTRandomSelector::onChildComplete(void)

{
  int iVar1;
  long lVar2;
  BTBehavior *in_x0;
  BehaviorTree *this;
  Status SVar3;
  int *piVar4;
  code *local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (in_x0[0x68] != (BTBehavior)0x0) {
    *(int *)(in_x0 + 100) = *(int *)(in_x0 + 0x60);
  }
  iVar1 = *(int *)(*(long *)(*(long *)(in_x0 + 0x28) + (long)*(int *)(in_x0 + 0x60) * 8) + 8);
  if (iVar1 == 2) {
    if (*(long *)(in_x0 + 0x48) == *(long *)(in_x0 + 0x50)) {
      *(undefined4 *)(in_x0 + 0x60) = 0xffffffff;
    }
    else {
      piVar4 = (int *)(*(long *)(in_x0 + 0x50) + -4);
      iVar1 = *piVar4;
      *(int **)(in_x0 + 0x50) = piVar4;
      *(int *)(in_x0 + 0x60) = iVar1;
      if (iVar1 != -1) {
        local_30 = 0;
        local_40[0] = onChildCompleteCallback;
        BehaviorTree::insert
                  (*(BehaviorTree **)(in_x0 + 0x40),
                   *(BTBehavior **)(*(long *)(in_x0 + 0x28) + (long)iVar1 * 8),
                   (BTTaskObserver *)local_40);
        goto LAB_00714540;
      }
    }
    this = *(BehaviorTree **)(in_x0 + 0x40);
    SVar3 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_00714540;
    this = *(BehaviorTree **)(in_x0 + 0x40);
    SVar3 = 1;
  }
  BehaviorTree::terminate(this,in_x0,SVar3,true);
LAB_00714540:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


