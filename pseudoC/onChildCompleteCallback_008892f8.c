// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildCompleteCallback
// Entry Point: 008892f8
// Size: 184 bytes
// Signature: undefined __cdecl onChildCompleteCallback(void * param_1, uint param_2)


/* BTSelector::onChildCompleteCallback(void*, unsigned int) */

void BTSelector::onChildCompleteCallback(void *param_1,uint param_2)

{
  BTBehavior **ppBVar1;
  int iVar2;
  long lVar3;
  BehaviorTree *this;
  ulong uVar4;
  Status SVar5;
  undefined auVar6 [16];
  code *local_40;
  void *pvStack_38;
  undefined4 local_30;
  long local_28;
  
  uVar4 = (ulong)param_2;
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(**(long **)((long)param_1 + 0x48) + 8);
  if (iVar2 == 2) {
    ppBVar1 = (BTBehavior **)(*(long **)((long)param_1 + 0x48) + 1);
    this = *(BehaviorTree **)((long)param_1 + 0x40);
    *(BTBehavior ***)((long)param_1 + 0x48) = ppBVar1;
    if (ppBVar1 != *(BTBehavior ***)((long)param_1 + 0x30)) {
      local_30 = 0;
      local_40 = onChildCompleteCallback;
      pvStack_38 = param_1;
      auVar6 = BehaviorTree::insert(this,*ppBVar1,(BTTaskObserver *)&local_40);
      uVar4 = auVar6._8_8_;
      param_1 = auVar6._0_8_;
      goto LAB_0088938c;
    }
    SVar5 = 2;
  }
  else {
    if (iVar2 != 1) goto LAB_0088938c;
    this = *(BehaviorTree **)((long)param_1 + 0x40);
    SVar5 = 1;
  }
  auVar6 = BehaviorTree::terminate(this,(BTBehavior *)param_1,SVar5,true);
  uVar4 = auVar6._8_8_;
  param_1 = auVar6._0_8_;
LAB_0088938c:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar4);
}


