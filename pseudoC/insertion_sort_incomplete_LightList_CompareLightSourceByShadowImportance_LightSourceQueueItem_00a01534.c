// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
// Entry Point: 00a01534
// Size: 556 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>(LightSourceQueueItem * * param_1, LightSourceQueueItem * * param_2, CompareLightSourceByShadowImportance * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,
   LightSourceQueueItem**>(LightSourceQueueItem**, LightSourceQueueItem**,
   LightList::CompareLightSourceByShadowImportance&) */

bool std::__ndk1::
     __insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
               (LightSourceQueueItem **param_1,LightSourceQueueItem **param_2,
               CompareLightSourceByShadowImportance *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  LightSourceQueueItem **ppLVar4;
  LightSourceQueueItem *pLVar5;
  LightSourceQueueItem **ppLVar6;
  LightSourceQueueItem *pLVar7;
  long lVar8;
  long lVar9;
  LightSourceQueueItem **ppLVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pLVar5 = param_2[-1];
    pLVar7 = *param_1;
    if ((*(int *)(pLVar5 + 0x20) == 0) == (*(int *)(pLVar7 + 0x20) != 0)) {
      if (*(int *)(pLVar5 + 0x20) == 0) goto LAB_00a01734;
    }
    else if (*(float *)(pLVar7 + 0x18) < *(float *)(pLVar5 + 0x18)) {
LAB_00a01734:
      *param_1 = pLVar5;
      param_2[-1] = pLVar7;
      return true;
    }
    break;
  case 3:
    __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    __sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00a013b8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar2 = 0;
      iVar3 = 0;
      ppLVar10 = param_1 + 3;
      ppLVar6 = param_1 + 2;
      do {
        ppLVar4 = ppLVar10;
        pLVar5 = *ppLVar4;
        pLVar7 = *ppLVar6;
        iVar1 = *(int *)(pLVar5 + 0x20);
        if ((iVar1 == 0) == (*(int *)(pLVar7 + 0x20) != 0)) {
          if (iVar1 == 0) goto LAB_00a01654;
        }
        else if (*(float *)(pLVar7 + 0x18) < *(float *)(pLVar5 + 0x18)) {
LAB_00a01654:
          *ppLVar4 = pLVar7;
          lVar9 = lVar2;
          ppLVar10 = param_1;
          if (ppLVar6 != param_1) {
            do {
              lVar11 = *(long *)((long)param_1 + lVar9 + 8);
              if ((iVar1 == 0) == (*(int *)(lVar11 + 0x20) != 0)) {
                if (iVar1 != 0) {
                  ppLVar10 = (LightSourceQueueItem **)((long)param_1 + lVar9 + 0x10);
                  break;
                }
              }
              else {
                ppLVar10 = ppLVar6;
                if (*(float *)(pLVar5 + 0x18) <= *(float *)(lVar11 + 0x18)) break;
              }
              ppLVar6 = ppLVar6 + -1;
              lVar8 = lVar9 + -8;
              *(long *)((long)param_1 + lVar9 + 0x10) = lVar11;
              lVar9 = lVar8;
              ppLVar10 = param_1;
            } while (lVar8 != -0x10);
          }
          iVar3 = iVar3 + 1;
          *ppLVar10 = pLVar5;
          if (iVar3 == 8) {
            return ppLVar4 + 1 == param_2;
          }
        }
        lVar2 = lVar2 + 8;
        ppLVar10 = ppLVar4 + 1;
        ppLVar6 = ppLVar4;
      } while (ppLVar4 + 1 != param_2);
    }
  }
  return true;
}


