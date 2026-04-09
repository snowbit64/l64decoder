// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
// Entry Point: 00987d94
// Size: 1224 bytes
// Signature: void __cdecl __sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>(MeshSplitShape * * param_1, MeshSplitShape * * param_2, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   MeshSplitShape**>(MeshSplitShape**, MeshSplitShape**, bool (*&)(MeshSplitShape const*,
   MeshSplitShape const*)) */

void std::__ndk1::__sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
               (MeshSplitShape **param_1,MeshSplitShape **param_2,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_3)

{
  ulong uVar1;
  MeshSplitShape **ppMVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  MeshSplitShape *pMVar9;
  MeshSplitShape **ppMVar10;
  MeshSplitShape **ppMVar11;
  MeshSplitShape **ppMVar12;
  MeshSplitShape **ppMVar13;
  MeshSplitShape **ppMVar14;
  
LAB_00987dc0:
  ppMVar10 = param_2 + -1;
  ppMVar11 = param_1;
LAB_00987dc8:
  param_1 = ppMVar11;
  uVar8 = (long)param_2 - (long)param_1;
  uVar6 = (long)uVar8 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00988120_caseD_0;
  case 2:
    uVar6 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    pMVar9 = *param_1;
    *param_1 = param_2[-1];
    break;
  case 3:
    uVar6 = (**(code **)param_3)(param_1[1],*param_1);
    uVar8 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar6 & 1) == 0) {
      if ((uVar8 & 1) == 0) {
        return;
      }
      pMVar9 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = pMVar9;
      uVar6 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      pMVar9 = *param_1;
      *param_1 = param_1[1];
      param_1[1] = pMVar9;
      return;
    }
    pMVar9 = *param_1;
    if ((uVar8 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = pMVar9;
      return;
    }
    *param_1 = param_1[1];
    param_1[1] = pMVar9;
    uVar6 = (**(code **)param_3)(param_2[-1]);
    if ((uVar6 & 1) == 0) {
      return;
    }
    pMVar9 = param_1[1];
    param_1[1] = param_2[-1];
    break;
  case 4:
    __sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
              (param_1,param_1 + 1,param_1 + 2,ppMVar10,param_3);
    return;
  case 5:
    FUN_009883e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,ppMVar10,param_3);
    return;
  default:
    if ((long)uVar8 < 0xf8) {
      __insertion_sort_3<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
                (param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar6;
    if ((long)uVar6 < 0) {
      uVar1 = uVar6 + 1;
    }
    ppMVar11 = (MeshSplitShape **)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (uVar8 < 0x1f39) {
      uVar6 = (**(code **)param_3)(*ppMVar11,*param_1);
      uVar8 = (**(code **)param_3)(*ppMVar10,*ppMVar11);
      if ((uVar6 & 1) == 0) {
        if ((uVar8 & 1) == 0) {
          iVar5 = 0;
        }
        else {
          pMVar9 = *ppMVar11;
          *ppMVar11 = *ppMVar10;
          *ppMVar10 = pMVar9;
          uVar6 = (**(code **)param_3)(*ppMVar11,*param_1);
          if ((uVar6 & 1) == 0) goto LAB_00988078;
          iVar5 = 2;
          pMVar9 = *param_1;
          *param_1 = *ppMVar11;
          *ppMVar11 = pMVar9;
        }
      }
      else {
        pMVar9 = *param_1;
        if ((uVar8 & 1) == 0) {
          *param_1 = *ppMVar11;
          *ppMVar11 = pMVar9;
          uVar6 = (**(code **)param_3)(*ppMVar10);
          if ((uVar6 & 1) == 0) {
LAB_00988078:
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
            pMVar9 = *ppMVar11;
            *ppMVar11 = *ppMVar10;
            *ppMVar10 = pMVar9;
          }
        }
        else {
          iVar5 = 1;
          *param_1 = *ppMVar10;
          *ppMVar10 = pMVar9;
        }
      }
    }
    else {
      uVar8 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar8 = uVar6;
      }
      lVar7 = (uVar8 & 0x7ffffffffffffffc) * 2;
      iVar5 = FUN_009883e0(param_1,(long)param_1 + lVar7,ppMVar11,(long)ppMVar11 + lVar7,ppMVar10,
                           param_3);
    }
    uVar6 = (**(code **)param_3)(*param_1,*ppMVar11);
    ppMVar12 = ppMVar10;
    if ((uVar6 & 1) == 0) goto LAB_00987e4c;
    goto LAB_00987e80;
  }
  param_2[-1] = pMVar9;
  return;
LAB_00987e4c:
  while (ppMVar12 = ppMVar12 + -1, ppMVar12 != param_1) {
    uVar6 = (**(code **)param_3)(*ppMVar12,*ppMVar11);
    if ((uVar6 & 1) != 0) goto code_r0x00987e6c;
  }
  ppMVar12 = param_1 + 1;
  uVar6 = (**(code **)param_3)(*param_1,*ppMVar10);
  ppMVar11 = ppMVar12;
  if ((uVar6 & 1) == 0) {
    while( true ) {
      if (ppMVar11 == ppMVar10) {
        return;
      }
      uVar6 = (**(code **)param_3)(*param_1,*ppMVar11);
      if ((uVar6 & 1) != 0) break;
      ppMVar11 = ppMVar11 + 1;
    }
    pMVar9 = *ppMVar11;
    ppMVar12 = ppMVar11 + 1;
    *ppMVar11 = *ppMVar10;
    *ppMVar10 = pMVar9;
  }
  ppMVar14 = ppMVar10;
  if (ppMVar12 == ppMVar10) {
    return;
  }
  while( true ) {
    ppMVar11 = ppMVar12 + -1;
    do {
      ppMVar12 = ppMVar11;
      ppMVar11 = ppMVar12 + 1;
      uVar6 = (**(code **)param_3)(*param_1,*ppMVar11);
    } while ((uVar6 & 1) == 0);
    ppMVar12 = ppMVar12 + 2;
    do {
      ppMVar14 = ppMVar14 + -1;
      uVar6 = (**(code **)param_3)(*param_1,*ppMVar14);
    } while ((uVar6 & 1) != 0);
    if (ppMVar14 <= ppMVar11) break;
    pMVar9 = *ppMVar11;
    *ppMVar11 = *ppMVar14;
    *ppMVar14 = pMVar9;
  }
  goto LAB_00987dc8;
code_r0x00987e6c:
  iVar5 = iVar5 + 1;
  pMVar9 = *param_1;
  *param_1 = *ppMVar12;
  *ppMVar12 = pMVar9;
LAB_00987e80:
  ppMVar14 = param_1 + 1;
  ppMVar13 = ppMVar14;
  if (ppMVar14 < ppMVar12) {
    while( true ) {
      ppMVar14 = ppMVar13 + -1;
      do {
        ppMVar13 = ppMVar14;
        ppMVar14 = ppMVar13 + 1;
        uVar6 = (**(code **)param_3)(*ppMVar14,*ppMVar11);
      } while ((uVar6 & 1) != 0);
      ppMVar13 = ppMVar13 + 2;
      do {
        ppMVar12 = ppMVar12 + -1;
        uVar6 = (**(code **)param_3)(*ppMVar12,*ppMVar11);
      } while ((uVar6 & 1) == 0);
      if (ppMVar12 < ppMVar14) break;
      pMVar9 = *ppMVar14;
      iVar5 = iVar5 + 1;
      ppMVar2 = ppMVar12;
      if (ppMVar14 != ppMVar11) {
        ppMVar2 = ppMVar11;
      }
      *ppMVar14 = *ppMVar12;
      *ppMVar12 = pMVar9;
      ppMVar11 = ppMVar2;
    }
  }
  if ((ppMVar14 != ppMVar11) &&
     (uVar6 = (**(code **)param_3)(*ppMVar11,*ppMVar14), (uVar6 & 1) != 0)) {
    iVar5 = iVar5 + 1;
    pMVar9 = *ppMVar14;
    *ppMVar14 = *ppMVar11;
    *ppMVar11 = pMVar9;
  }
  if (iVar5 == 0) {
    bVar3 = __insertion_sort_incomplete<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
                      (param_1,ppMVar14,param_3);
    bVar4 = __insertion_sort_incomplete<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
                      (ppMVar14 + 1,param_2,param_3);
    if (bVar4) goto LAB_00988100;
    ppMVar11 = ppMVar14 + 1;
    if (bVar3) goto LAB_00987dc8;
  }
  if ((long)param_2 - (long)ppMVar14 <= (long)ppMVar14 - (long)param_1) {
    __sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
              (ppMVar14 + 1,param_2,param_3);
    param_2 = ppMVar14;
    goto LAB_00987dc0;
  }
  __sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
            (param_1,ppMVar14,param_3);
  ppMVar11 = ppMVar14 + 1;
  goto LAB_00987dc8;
LAB_00988100:
  param_2 = ppMVar14;
  if (bVar3) {
switchD_00988120_caseD_0:
    return;
  }
  goto LAB_00987dc0;
}


