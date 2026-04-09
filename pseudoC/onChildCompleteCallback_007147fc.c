// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildCompleteCallback
// Entry Point: 007147fc
// Size: 176 bytes
// Signature: undefined __cdecl onChildCompleteCallback(void * param_1, uint param_2)


/* BTRootSelector::onChildCompleteCallback(void*, unsigned int) */

void BTRootSelector::onChildCompleteCallback(void *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  BTBehavior **ppBVar4;
  undefined auVar5 [16];
  code *local_40;
  void *pvStack_38;
  undefined4 local_30;
  long local_28;
  
  uVar3 = (ulong)param_2;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(**(long **)((long)param_1 + 0x48) + 8);
  if (iVar1 == 2) {
    ppBVar4 = (BTBehavior **)(*(long **)((long)param_1 + 0x48) + 1);
    *(BTBehavior ***)((long)param_1 + 0x48) = ppBVar4;
    if (ppBVar4 == *(BTBehavior ***)((long)param_1 + 0x30)) {
      ppBVar4 = *(BTBehavior ***)((long)param_1 + 0x28);
      *(BTBehavior ***)((long)param_1 + 0x48) = ppBVar4;
    }
  }
  else {
    if (iVar1 != 1) goto LAB_00714888;
    ppBVar4 = *(BTBehavior ***)((long)param_1 + 0x28);
    *(BTBehavior ***)((long)param_1 + 0x48) = ppBVar4;
  }
  local_40 = onChildCompleteCallback;
  local_30 = 0;
  pvStack_38 = param_1;
  auVar5 = BehaviorTree::insert
                     (*(BehaviorTree **)((long)param_1 + 0x40),*ppBVar4,(BTTaskObserver *)&local_40)
  ;
  uVar3 = auVar5._8_8_;
  param_1 = auVar5._0_8_;
LAB_00714888:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1,uVar3);
  }
  return;
}


