// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
// Entry Point: 009884e4
// Size: 332 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>(MeshSplitShape * * param_1, MeshSplitShape * * param_2, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   MeshSplitShape**>(MeshSplitShape**, MeshSplitShape**, bool (*&)(MeshSplitShape const*,
   MeshSplitShape const*)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
               (MeshSplitShape **param_1,MeshSplitShape **param_2,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  MeshSplitShape *pMVar4;
  MeshSplitShape *pMVar5;
  MeshSplitShape **ppMVar6;
  MeshSplitShape **ppMVar7;
  MeshSplitShape **ppMVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = (**(code **)param_3)(param_1[1],*param_1);
  uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      pMVar4 = param_1[1];
      pMVar5 = param_1[2];
      param_1[1] = pMVar5;
      param_1[2] = pMVar4;
      uVar2 = (**(code **)param_3)(pMVar5,*param_1);
      if ((uVar2 & 1) != 0) {
        pMVar4 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = pMVar4;
      }
    }
  }
  else {
    pMVar4 = *param_1;
    if ((uVar3 & 1) == 0) {
      *param_1 = param_1[1];
      param_1[1] = pMVar4;
      uVar2 = (**(code **)param_3)(param_1[2]);
      if ((uVar2 & 1) != 0) {
        pMVar4 = param_1[1];
        param_1[1] = param_1[2];
        param_1[2] = pMVar4;
      }
    }
    else {
      pMVar5 = param_1[2];
      param_1[2] = pMVar4;
      *param_1 = pMVar5;
    }
  }
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    ppMVar6 = param_1 + 3;
    ppMVar8 = param_1 + 2;
    do {
      ppMVar7 = ppMVar6;
      uVar2 = (**(code **)param_3)(*ppMVar7,*ppMVar8);
      if ((uVar2 & 1) != 0) {
        pMVar4 = *ppMVar7;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          ppMVar6 = param_1;
          if (lVar10 == -0x10) goto LAB_009885a8;
          uVar2 = (**(code **)param_3)(pMVar4,*(undefined8 *)((long)param_1 + lVar10 + 8));
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        ppMVar6 = (MeshSplitShape **)((long)param_1 + lVar10 + 0x10);
LAB_009885a8:
        *ppMVar6 = pMVar4;
      }
      lVar9 = lVar9 + 8;
      ppMVar6 = ppMVar7 + 1;
      ppMVar8 = ppMVar7;
    } while (ppMVar7 + 1 != param_2);
  }
  return;
}


