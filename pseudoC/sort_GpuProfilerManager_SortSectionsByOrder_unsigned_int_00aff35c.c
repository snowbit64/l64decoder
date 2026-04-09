// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
// Entry Point: 00aff35c
// Size: 1988 bytes
// Signature: void __cdecl __sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>(uint * param_1, uint * param_2, SortSectionsByOrder * param_3)


/* void std::__ndk1::__sort<GpuProfilerManager::SortSectionsByOrder&, unsigned int*>(unsigned int*,
   unsigned int*, GpuProfilerManager::SortSectionsByOrder&) */

void std::__ndk1::__sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
               (uint *param_1,uint *param_2,SortSectionsByOrder *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  
LAB_00aff384:
  puVar18 = param_2 + -1;
  puVar16 = param_1;
LAB_00aff38c:
  param_1 = puVar16;
  uVar12 = (long)param_2 - (long)param_1;
  uVar10 = (long)uVar12 >> 2;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_00aff7e4_caseD_0;
  case 2:
    uVar9 = *param_1;
    if (*(uint *)(*(long *)param_3 + (ulong)param_2[-1] * 0x78 + 0x18) <
        *(uint *)(*(long *)param_3 + (ulong)uVar9 * 0x78 + 0x18)) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar9;
      return;
    }
    return;
  case 3:
    uVar9 = *param_1;
    uVar2 = param_1[1];
    lVar11 = *(long *)param_3;
    uVar3 = param_2[-1];
    uVar4 = *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18);
    puVar16 = (uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18);
    uVar5 = *(uint *)(lVar11 + (ulong)uVar3 * 0x78 + 0x18);
    if (*puVar16 <= uVar4) {
      if (uVar4 <= uVar5) {
        return;
      }
      param_1[1] = uVar3;
      param_2[-1] = uVar2;
      uVar9 = *param_1;
      if (*(uint *)(lVar11 + (ulong)param_1[1] * 0x78 + 0x18) <
          *(uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18)) {
        *param_1 = param_1[1];
        param_1[1] = uVar9;
        return;
      }
      return;
    }
    if (uVar5 < uVar4) {
      *param_1 = uVar3;
      param_2[-1] = uVar9;
      return;
    }
    *param_1 = uVar2;
    param_1[1] = uVar9;
    if (*(uint *)(lVar11 + (ulong)param_2[-1] * 0x78 + 0x18) < *puVar16) {
      param_1[1] = param_2[-1];
      param_2[-1] = uVar9;
      return;
    }
    return;
  case 4:
    __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,puVar18,param_3);
    return;
  case 5:
    puVar16 = param_1 + 2;
    puVar18 = param_1 + 3;
    __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
              (param_1,param_1 + 1,puVar16,puVar18,param_3);
    lVar11 = *(long *)param_3;
    uVar9 = param_1[3];
    if (*(uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18) <=
        *(uint *)(lVar11 + (ulong)param_2[-1] * 0x78 + 0x18)) {
      return;
    }
    *puVar18 = param_2[-1];
    param_2[-1] = uVar9;
    uVar9 = *puVar18;
    uVar2 = *puVar16;
    puVar15 = (uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18);
    if (*(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18) <= *puVar15) {
      return;
    }
    uVar4 = param_1[1];
    *puVar16 = uVar9;
    *puVar18 = uVar2;
    if (*(uint *)(lVar11 + (ulong)uVar4 * 0x78 + 0x18) <= *puVar15) {
      return;
    }
    uVar2 = *param_1;
    param_1[1] = uVar9;
    param_1[2] = uVar4;
    if (*(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18) <= *puVar15) {
      return;
    }
    *param_1 = uVar9;
    param_1[1] = uVar2;
    return;
  default:
    if (0x7b < (long)uVar12) {
      uVar13 = uVar10;
      if ((long)uVar10 < 0) {
        uVar13 = uVar10 + 1;
      }
      puVar16 = (uint *)((long)param_1 + (uVar13 & 0x7ffffffffffffffe) * 2);
      if (uVar12 < 0xf9d) {
        uVar9 = *puVar16;
        lVar11 = *(long *)param_3;
        uVar2 = *param_1;
        uVar4 = *puVar18;
        uVar5 = *(uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18);
        puVar15 = (uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18);
        uVar3 = *(uint *)(lVar11 + (ulong)uVar4 * 0x78 + 0x18);
        if (uVar5 < *puVar15) {
          if (uVar3 < uVar5) {
            uVar9 = 1;
            *param_1 = uVar4;
          }
          else {
            *param_1 = uVar9;
            *puVar16 = uVar2;
            if (*puVar15 <= *(uint *)(lVar11 + (ulong)*puVar18 * 0x78 + 0x18)) {
LAB_00aff580:
              uVar9 = 1;
              goto LAB_00aff594;
            }
            uVar9 = 2;
            *puVar16 = *puVar18;
          }
          *puVar18 = uVar2;
        }
        else if (uVar3 < uVar5) {
          *puVar16 = uVar4;
          *puVar18 = uVar9;
          uVar2 = *param_1;
          if (*(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18) <=
              *(uint *)(lVar11 + (ulong)*puVar16 * 0x78 + 0x18)) goto LAB_00aff580;
          uVar9 = 2;
          *param_1 = *puVar16;
          *puVar16 = uVar2;
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar12 = uVar10 + 3;
        if (-1 < (long)uVar10) {
          uVar12 = uVar10;
        }
        puVar15 = (uint *)((long)param_1 + (uVar12 & 0xfffffffffffffffc));
        puVar17 = (uint *)((long)puVar16 + (uVar12 & 0xfffffffffffffffc));
        uVar9 = __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
                          (param_1,puVar15,puVar16,puVar17,param_3);
        lVar11 = *(long *)param_3;
        uVar2 = *puVar17;
        if (*(uint *)(lVar11 + (ulong)*puVar18 * 0x78 + 0x18) <
            *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18)) {
          *puVar17 = *puVar18;
          *puVar18 = uVar2;
          uVar2 = *puVar16;
          if (*(uint *)(lVar11 + (ulong)*puVar17 * 0x78 + 0x18) <
              *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18)) {
            *puVar16 = *puVar17;
            *puVar17 = uVar2;
            uVar2 = *puVar15;
            if (*(uint *)(lVar11 + (ulong)*puVar16 * 0x78 + 0x18) <
                *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18)) {
              *puVar15 = *puVar16;
              *puVar16 = uVar2;
              uVar2 = *param_1;
              if (*(uint *)(lVar11 + (ulong)*puVar15 * 0x78 + 0x18) <
                  *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18)) {
                uVar9 = uVar9 + 4;
                *param_1 = *puVar15;
                *puVar15 = uVar2;
              }
              else {
                uVar9 = uVar9 + 3;
              }
            }
            else {
              uVar9 = uVar9 + 2;
            }
          }
          else {
            uVar9 = uVar9 + 1;
          }
        }
      }
LAB_00aff594:
      uVar2 = *param_1;
      uVar4 = *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18);
      uVar5 = *(uint *)(lVar11 + (ulong)*puVar16 * 0x78 + 0x18);
      puVar15 = puVar18;
      if (uVar5 <= uVar4) break;
      goto LAB_00aff5ec;
    }
    lVar11 = *(long *)param_3;
    uVar9 = *param_1;
    uVar10 = (ulong)uVar9;
    puVar15 = param_1 + 1;
    uVar4 = *puVar15;
    uVar13 = (ulong)uVar4;
    puVar16 = param_1 + 2;
    uVar5 = *puVar16;
    uVar12 = (ulong)uVar5;
    puVar17 = (uint *)(lVar11 + uVar10 * 0x78 + 0x18);
    uVar2 = *(uint *)(lVar11 + uVar13 * 0x78 + 0x18);
    puVar19 = (uint *)(lVar11 + uVar12 * 0x78 + 0x18);
    puVar18 = param_1;
    if (uVar2 < *puVar17) {
      if (uVar2 <= *puVar19) {
        *param_1 = uVar4;
        param_1[1] = uVar9;
        uVar10 = (ulong)uVar9;
        puVar18 = puVar15;
        if (*puVar17 <= *puVar19) goto LAB_00affa74;
      }
LAB_00affa64:
      *puVar18 = uVar5;
      *puVar16 = uVar9;
      uVar12 = uVar10;
    }
    else if (*puVar19 < uVar2) {
      *puVar15 = uVar5;
      *puVar16 = uVar4;
      uVar10 = uVar13;
      uVar12 = uVar13;
      puVar16 = puVar15;
      if (*puVar19 < *puVar17) goto LAB_00affa64;
    }
LAB_00affa74:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar14 = 0xc;
    puVar16 = param_1 + 3;
    goto LAB_00affa88;
  }
  while (puVar15 = puVar15 + -1, puVar15 != param_1) {
    if (*(uint *)(lVar11 + (ulong)*puVar15 * 0x78 + 0x18) < uVar5) goto code_r0x00aff5e0;
  }
  puVar15 = param_1 + 1;
  puVar16 = puVar15;
  if (*(uint *)(lVar11 + (ulong)*puVar18 * 0x78 + 0x18) <= uVar4) {
    while( true ) {
      if (puVar16 == puVar18) {
        return;
      }
      uVar9 = *puVar16;
      if (uVar4 < *(uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18)) break;
      puVar16 = puVar16 + 1;
    }
    puVar15 = puVar16 + 1;
    *puVar16 = *puVar18;
    *puVar18 = uVar9;
  }
  puVar17 = puVar18;
  if (puVar15 == puVar18) {
    return;
  }
  while( true ) {
    uVar9 = *(uint *)(lVar11 + (ulong)*param_1 * 0x78 + 0x18);
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + 1;
      uVar2 = *puVar16;
    } while (*(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18) <= uVar9);
    do {
      puVar17 = puVar17 + -1;
    } while (uVar9 < *(uint *)(lVar11 + (ulong)*puVar17 * 0x78 + 0x18));
    if (puVar17 <= puVar16) break;
    *puVar16 = *puVar17;
    *puVar17 = uVar2;
  }
  goto LAB_00aff38c;
code_r0x00aff5e0:
  uVar9 = uVar9 + 1;
  *param_1 = *puVar15;
  *puVar15 = uVar2;
LAB_00aff5ec:
  puVar17 = param_1 + 1;
  puVar19 = puVar17;
  if (puVar17 < puVar15) {
    while( true ) {
      uVar2 = *(uint *)(lVar11 + (ulong)*puVar16 * 0x78 + 0x18);
      do {
        puVar17 = puVar19;
        puVar19 = puVar17 + 1;
        uVar4 = *puVar17;
      } while (*(uint *)(lVar11 + (ulong)uVar4 * 0x78 + 0x18) < uVar2);
      do {
        puVar15 = puVar15 + -1;
      } while (uVar2 <= *(uint *)(lVar11 + (ulong)*puVar15 * 0x78 + 0x18));
      if (puVar15 < puVar17) break;
      uVar9 = uVar9 + 1;
      puVar1 = puVar15;
      if (puVar17 != puVar16) {
        puVar1 = puVar16;
      }
      *puVar17 = *puVar15;
      *puVar15 = uVar4;
      puVar16 = puVar1;
    }
  }
  if (puVar17 != puVar16) {
    uVar2 = *puVar17;
    if (*(uint *)(lVar11 + (ulong)*puVar16 * 0x78 + 0x18) <
        *(uint *)(lVar11 + (ulong)uVar2 * 0x78 + 0x18)) {
      uVar9 = uVar9 + 1;
      *puVar17 = *puVar16;
      *puVar16 = uVar2;
    }
  }
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
                      (param_1,puVar17,param_3);
    bVar8 = __insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
                      (puVar17 + 1,param_2,param_3);
    if (bVar8) goto LAB_00aff7c4;
    puVar16 = puVar17 + 1;
    if (bVar7) goto LAB_00aff38c;
  }
  if ((long)param_2 - (long)puVar17 <= (long)puVar17 - (long)param_1) {
    __sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>(puVar17 + 1,param_2,param_3);
    param_2 = puVar17;
    goto LAB_00aff384;
  }
  __sort<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>(param_1,puVar17,param_3);
  puVar16 = puVar17 + 1;
  goto LAB_00aff38c;
LAB_00aff7c4:
  param_2 = puVar17;
  if (bVar7) {
    return;
  }
  goto LAB_00aff384;
LAB_00affa88:
  uVar9 = *puVar16;
  puVar18 = (uint *)(lVar11 + (ulong)uVar9 * 0x78 + 0x18);
  lVar20 = lVar14;
  if (*puVar18 < *(uint *)(lVar11 + uVar12 * 0x78 + 0x18)) {
    do {
      lVar6 = lVar20 + -4;
      *(int *)((long)param_1 + lVar20) = (int)uVar12;
      puVar15 = param_1;
      if (lVar6 == 0) goto LAB_00affae8;
      uVar12 = (ulong)*(uint *)((long)param_1 + lVar20 + -8);
      lVar20 = lVar6;
    } while (*puVar18 < *(uint *)(lVar11 + uVar12 * 0x78 + 0x18));
    puVar15 = (uint *)((long)param_1 + lVar6);
LAB_00affae8:
    *puVar15 = uVar9;
  }
  if (puVar16 + 1 == param_2) {
switchD_00aff7e4_caseD_0:
    return;
  }
  uVar12 = (ulong)*puVar16;
  lVar14 = lVar14 + 4;
  puVar16 = puVar16 + 1;
  goto LAB_00affa88;
}


