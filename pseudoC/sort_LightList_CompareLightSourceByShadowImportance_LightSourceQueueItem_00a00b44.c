// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
// Entry Point: 00a00b44
// Size: 1480 bytes
// Signature: void __cdecl __sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>(LightSourceQueueItem * * param_1, LightSourceQueueItem * * param_2, CompareLightSourceByShadowImportance * param_3)


/* void std::__ndk1::__sort<LightList::CompareLightSourceByShadowImportance&,
   LightSourceQueueItem**>(LightSourceQueueItem**, LightSourceQueueItem**,
   LightList::CompareLightSourceByShadowImportance&) */

void std::__ndk1::__sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
               (LightSourceQueueItem **param_1,LightSourceQueueItem **param_2,
               CompareLightSourceByShadowImportance *param_3)

{
  ulong uVar1;
  LightSourceQueueItem **ppLVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  LightSourceQueueItem **ppLVar9;
  ulong uVar10;
  LightSourceQueueItem *pLVar11;
  LightSourceQueueItem **ppLVar12;
  LightSourceQueueItem *pLVar13;
  LightSourceQueueItem *pLVar14;
  long lVar15;
  long lVar16;
  LightSourceQueueItem **ppLVar17;
  long lVar18;
  LightSourceQueueItem **ppLVar19;
  LightSourceQueueItem **ppLVar20;
  
LAB_00a00b70:
  ppLVar12 = param_2 + -1;
  ppLVar17 = param_1;
LAB_00a00b7c:
  param_1 = ppLVar17;
  uVar10 = (long)param_2 - (long)param_1;
  uVar7 = (long)uVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00a00f4c_caseD_0;
  case 2:
    pLVar11 = param_2[-1];
    pLVar13 = *param_1;
    if ((*(int *)(pLVar11 + 0x20) == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
      if (*(int *)(pLVar11 + 0x20) != 0) {
        return;
      }
    }
    else if (*(float *)(pLVar11 + 0x18) <= *(float *)(pLVar13 + 0x18)) {
      return;
    }
    *param_1 = pLVar11;
    param_2[-1] = pLVar13;
    return;
  case 3:
    __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,ppLVar12,param_3);
    return;
  case 4:
    __sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,param_1 + 2,ppLVar12,param_3);
    return;
  case 5:
    FUN_00a013b8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,ppLVar12,param_3);
    goto switchD_00a00f4c_caseD_0;
  }
  if ((long)uVar10 < 0xf8) {
    __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar8 = 0;
    ppLVar17 = param_1 + 3;
    ppLVar12 = param_1 + 2;
    goto LAB_00a01024;
  }
  uVar1 = uVar7;
  if ((long)uVar7 < 0) {
    uVar1 = uVar7 + 1;
  }
  ppLVar17 = (LightSourceQueueItem **)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
  if (uVar10 < 0x1f39) {
    uVar6 = __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                      (param_1,ppLVar17,ppLVar12,param_3);
  }
  else {
    uVar10 = uVar7 + 3;
    if (-1 < (long)uVar7) {
      uVar10 = uVar7;
    }
    lVar8 = (uVar10 & 0x7ffffffffffffffc) * 2;
    uVar6 = FUN_00a013b8(param_1,(long)param_1 + lVar8,ppLVar17,(long)ppLVar17 + lVar8,ppLVar12,
                         param_3);
  }
  pLVar11 = *param_1;
  pLVar13 = *ppLVar17;
  iVar3 = *(int *)(pLVar11 + 0x20);
  ppLVar9 = ppLVar12;
  ppLVar19 = param_2 + -2;
  if ((iVar3 == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
    if (iVar3 != 0) goto joined_r0x00a00c48;
  }
  else if (*(float *)(pLVar11 + 0x18) <= *(float *)(pLVar13 + 0x18)) {
joined_r0x00a00c48:
    for (; param_1 != ppLVar19; ppLVar19 = ppLVar19 + -1) {
      pLVar14 = *ppLVar19;
      if ((*(int *)(pLVar13 + 0x20) != 0) == (*(int *)(pLVar14 + 0x20) == 0)) {
        if (*(int *)(pLVar14 + 0x20) == 0) goto LAB_00a00cc4;
      }
      else if (*(float *)(pLVar13 + 0x18) < *(float *)(pLVar14 + 0x18)) {
LAB_00a00cc4:
        uVar6 = uVar6 + 1;
        *param_1 = pLVar14;
        *ppLVar19 = pLVar11;
        ppLVar9 = ppLVar19;
        goto LAB_00a00cd0;
      }
    }
    pLVar13 = *ppLVar12;
    ppLVar19 = param_1 + 1;
    ppLVar17 = ppLVar19;
    if ((iVar3 == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
      if (iVar3 != 0) goto LAB_00a00e44;
    }
    else if (*(float *)(pLVar11 + 0x18) <= *(float *)(pLVar13 + 0x18)) {
LAB_00a00e44:
      do {
        if (ppLVar17 == ppLVar12) {
          return;
        }
        pLVar14 = *ppLVar17;
        if ((iVar3 == 0) == (*(int *)(pLVar14 + 0x20) != 0)) {
          if (iVar3 == 0) goto LAB_00a00e70;
        }
        else if (*(float *)(pLVar14 + 0x18) < *(float *)(pLVar11 + 0x18)) goto LAB_00a00e70;
        ppLVar17 = ppLVar17 + 1;
      } while( true );
    }
    goto LAB_00a00e78;
  }
LAB_00a00cd0:
  ppLVar19 = param_1 + 1;
  ppLVar20 = ppLVar19;
  if (ppLVar19 < ppLVar9) {
LAB_00a00cdc:
    pLVar11 = *ppLVar17;
    ppLVar20 = ppLVar19;
    do {
      pLVar13 = *ppLVar20;
      if ((*(int *)(pLVar13 + 0x20) == 0) == (*(int *)(pLVar11 + 0x20) != 0)) {
        if (*(int *)(pLVar13 + 0x20) != 0) goto LAB_00a00d28;
      }
      else if (*(float *)(pLVar13 + 0x18) <= *(float *)(pLVar11 + 0x18)) goto LAB_00a00d28;
      ppLVar20 = ppLVar20 + 1;
    } while( true );
  }
LAB_00a00d78:
  if (ppLVar20 != ppLVar17) {
    pLVar11 = *ppLVar17;
    pLVar13 = *ppLVar20;
    if ((*(int *)(pLVar11 + 0x20) == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
      if (*(int *)(pLVar11 + 0x20) == 0) goto LAB_00a00db8;
    }
    else if (*(float *)(pLVar13 + 0x18) < *(float *)(pLVar11 + 0x18)) {
LAB_00a00db8:
      uVar6 = uVar6 + 1;
      *ppLVar20 = pLVar11;
      *ppLVar17 = pLVar13;
    }
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                      (param_1,ppLVar20,param_3);
    bVar5 = __insertion_sort_incomplete<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                      (ppLVar20 + 1,param_2,param_3);
    if (bVar5) goto LAB_00a00f2c;
    ppLVar17 = ppLVar20 + 1;
    if (bVar4) goto LAB_00a00b7c;
  }
  if ((long)param_2 - (long)ppLVar20 <= (long)ppLVar20 - (long)param_1) {
    __sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
              (ppLVar20 + 1,param_2,param_3);
    param_2 = ppLVar20;
    goto LAB_00a00b70;
  }
  __sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
            (param_1,ppLVar20,param_3);
  ppLVar17 = ppLVar20 + 1;
  goto LAB_00a00b7c;
LAB_00a01024:
  ppLVar19 = ppLVar17;
  pLVar11 = *ppLVar19;
  pLVar13 = *ppLVar12;
  iVar3 = *(int *)(pLVar11 + 0x20);
  if ((iVar3 == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
    if (iVar3 == 0) goto LAB_00a0106c;
  }
  else if (*(float *)(pLVar13 + 0x18) < *(float *)(pLVar11 + 0x18)) {
LAB_00a0106c:
    *ppLVar19 = pLVar13;
    lVar16 = lVar8;
    ppLVar17 = param_1;
    if (ppLVar12 != param_1) {
      do {
        lVar18 = *(long *)((long)param_1 + lVar16 + 8);
        if ((iVar3 == 0) == (*(int *)(lVar18 + 0x20) != 0)) {
          ppLVar17 = ppLVar12;
          if (iVar3 != 0) break;
        }
        else if (*(float *)(pLVar11 + 0x18) <= *(float *)(lVar18 + 0x18)) {
          ppLVar17 = (LightSourceQueueItem **)((long)param_1 + lVar16 + 0x10);
          break;
        }
        ppLVar12 = ppLVar12 + -1;
        lVar15 = lVar16 + -8;
        *(long *)((long)param_1 + lVar16 + 0x10) = lVar18;
        lVar16 = lVar15;
        ppLVar17 = param_1;
      } while (lVar15 != -0x10);
    }
    *ppLVar17 = pLVar11;
  }
  lVar8 = lVar8 + 8;
  ppLVar17 = ppLVar19 + 1;
  ppLVar12 = ppLVar19;
  if (ppLVar19 + 1 == param_2) {
switchD_00a00f4c_caseD_0:
    return;
  }
  goto LAB_00a01024;
LAB_00a00e70:
  ppLVar19 = ppLVar17 + 1;
  *ppLVar17 = pLVar13;
  *ppLVar12 = pLVar14;
LAB_00a00e78:
  if (ppLVar19 == ppLVar12) {
    return;
  }
LAB_00a00e84:
  pLVar11 = *param_1;
  iVar3 = *(int *)(pLVar11 + 0x20);
  ppLVar17 = ppLVar19;
  do {
    pLVar13 = *ppLVar17;
    if ((iVar3 == 0) == (*(int *)(pLVar13 + 0x20) != 0)) {
      if (iVar3 == 0) break;
    }
    else if (*(float *)(pLVar13 + 0x18) < *(float *)(pLVar11 + 0x18)) break;
    ppLVar17 = ppLVar17 + 1;
  } while( true );
  while (iVar3 == 0) {
LAB_00a00ed0:
    ppLVar9 = ppLVar9 + -1;
    pLVar14 = *ppLVar9;
    if ((iVar3 == 0) != (*(int *)(pLVar14 + 0x20) != 0)) {
      if (*(float *)(pLVar11 + 0x18) <= *(float *)(pLVar14 + 0x18)) break;
      goto LAB_00a00ed0;
    }
  }
  if (ppLVar9 <= ppLVar17) goto LAB_00a00b7c;
  ppLVar19 = ppLVar17 + 1;
  *ppLVar17 = pLVar14;
  *ppLVar9 = pLVar13;
  goto LAB_00a00e84;
  while (*(int *)(pLVar14 + 0x20) != 0) {
LAB_00a00d28:
    ppLVar9 = ppLVar9 + -1;
    pLVar14 = *ppLVar9;
    if ((*(int *)(pLVar11 + 0x20) != 0) != (*(int *)(pLVar14 + 0x20) == 0)) {
      if (*(float *)(pLVar11 + 0x18) < *(float *)(pLVar14 + 0x18)) break;
      goto LAB_00a00d28;
    }
  }
  if (ppLVar9 < ppLVar20) goto LAB_00a00d78;
  uVar6 = uVar6 + 1;
  ppLVar2 = ppLVar9;
  if (ppLVar20 != ppLVar17) {
    ppLVar2 = ppLVar17;
  }
  ppLVar19 = ppLVar20 + 1;
  *ppLVar20 = pLVar14;
  *ppLVar9 = pLVar13;
  ppLVar17 = ppLVar2;
  goto LAB_00a00cdc;
LAB_00a00f2c:
  param_2 = ppLVar20;
  if (bVar4) {
    return;
  }
  goto LAB_00a00b70;
}


