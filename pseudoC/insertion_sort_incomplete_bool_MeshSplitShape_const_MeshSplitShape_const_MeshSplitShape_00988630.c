// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
// Entry Point: 00988630
// Size: 676 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>(MeshSplitShape * * param_1, MeshSplitShape * * param_2, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(MeshSplitShape const*, MeshSplitShape
   const*), MeshSplitShape**>(MeshSplitShape**, MeshSplitShape**, bool (*&)(MeshSplitShape const*,
   MeshSplitShape const*)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
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
  int iVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      pMVar4 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = pMVar4;
      return true;
    }
    break;
  case 3:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        pMVar4 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = pMVar4;
        uVar2 = (**(code **)param_3)(param_1[1],*param_1);
        if ((uVar2 & 1) != 0) {
          pMVar4 = *param_1;
          *param_1 = param_1[1];
          param_1[1] = pMVar4;
          return true;
        }
      }
    }
    else {
      pMVar4 = *param_1;
      if ((uVar3 & 1) != 0) {
        *param_1 = param_2[-1];
        param_2[-1] = pMVar4;
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = pMVar4;
      uVar2 = (**(code **)param_3)(param_2[-1]);
      if ((uVar2 & 1) != 0) {
        pMVar4 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = pMVar4;
        return true;
      }
    }
    break;
  case 4:
    __sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_009883e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
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
      iVar10 = 0;
      ppMVar6 = param_1 + 3;
      ppMVar8 = param_1 + 2;
      do {
        ppMVar7 = ppMVar6;
        uVar2 = (**(code **)param_3)(*ppMVar7,*ppMVar8);
        if ((uVar2 & 1) != 0) {
          pMVar4 = *ppMVar7;
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppMVar6 = param_1;
            if (lVar11 == -0x10) goto LAB_0098882c;
            uVar2 = (**(code **)param_3)(pMVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppMVar6 = (MeshSplitShape **)((long)param_1 + lVar11 + 0x10);
LAB_0098882c:
          iVar10 = iVar10 + 1;
          *ppMVar6 = pMVar4;
          if (iVar10 == 8) {
            return ppMVar7 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppMVar6 = ppMVar7 + 1;
        ppMVar8 = ppMVar7;
      } while (ppMVar7 + 1 != param_2);
    }
  }
  return true;
}


