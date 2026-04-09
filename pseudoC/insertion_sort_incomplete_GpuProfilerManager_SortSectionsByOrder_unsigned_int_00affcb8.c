// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
// Entry Point: 00affcb8
// Size: 956 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>(uint * param_1, uint * param_2, SortSectionsByOrder * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&, unsigned
   int*>(unsigned int*, unsigned int*, GpuProfilerManager::SortSectionsByOrder&) */

bool std::__ndk1::
     __insertion_sort_incomplete<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
               (uint *param_1,uint *param_2,SortSectionsByOrder *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    if (*(uint *)(*(long *)param_3 + (ulong)param_2[-1] * 0x78 + 0x18) <
        *(uint *)(*(long *)param_3 + (ulong)uVar1 * 0x78 + 0x18)) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar7 = *(long *)param_3;
    uVar3 = param_2[-1];
    uVar4 = *(uint *)(lVar7 + (ulong)uVar2 * 0x78 + 0x18);
    puVar11 = (uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18);
    uVar5 = *(uint *)(lVar7 + (ulong)uVar3 * 0x78 + 0x18);
    if (uVar4 < *puVar11) {
      if (uVar5 < uVar4) {
        *param_1 = uVar3;
        param_2[-1] = uVar1;
        return true;
      }
      *param_1 = uVar2;
      param_1[1] = uVar1;
      if (*puVar11 <= *(uint *)(lVar7 + (ulong)param_2[-1] * 0x78 + 0x18)) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = uVar1;
      return true;
    }
    if (uVar5 < uVar4) {
      param_1[1] = uVar3;
      param_2[-1] = uVar2;
      uVar1 = *param_1;
      if (*(uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18) <=
          *(uint *)(lVar7 + (ulong)param_1[1] * 0x78 + 0x18)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = uVar1;
      return true;
    }
    break;
  case 4:
    __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    puVar11 = param_1 + 2;
    puVar17 = param_1 + 3;
    __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
              (param_1,param_1 + 1,puVar11,puVar17,param_3);
    lVar7 = *(long *)param_3;
    uVar1 = param_1[3];
    if (*(uint *)(lVar7 + (ulong)param_2[-1] * 0x78 + 0x18) <
        *(uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18)) {
      *puVar17 = param_2[-1];
      param_2[-1] = uVar1;
      uVar1 = *puVar17;
      uVar2 = *puVar11;
      puVar10 = (uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18);
      if (*puVar10 < *(uint *)(lVar7 + (ulong)uVar2 * 0x78 + 0x18)) {
        uVar4 = param_1[1];
        *puVar11 = uVar1;
        *puVar17 = uVar2;
        if (*puVar10 < *(uint *)(lVar7 + (ulong)uVar4 * 0x78 + 0x18)) {
          uVar2 = *param_1;
          param_1[1] = uVar1;
          param_1[2] = uVar4;
          if (*(uint *)(lVar7 + (ulong)uVar2 * 0x78 + 0x18) <= *puVar10) {
            return true;
          }
          *param_1 = uVar1;
          param_1[1] = uVar2;
          return true;
        }
      }
    }
    break;
  default:
    lVar7 = *(long *)param_3;
    uVar1 = *param_1;
    uVar13 = (ulong)uVar1;
    puVar10 = param_1 + 1;
    uVar4 = *puVar10;
    uVar8 = (ulong)uVar4;
    puVar11 = param_1 + 2;
    uVar5 = *puVar11;
    uVar12 = (ulong)uVar5;
    puVar15 = (uint *)(lVar7 + uVar13 * 0x78 + 0x18);
    uVar2 = *(uint *)(lVar7 + uVar8 * 0x78 + 0x18);
    puVar16 = (uint *)(lVar7 + uVar12 * 0x78 + 0x18);
    puVar17 = param_1;
    if (uVar2 < *puVar15) {
      if (uVar2 <= *puVar16) {
        *param_1 = uVar4;
        param_1[1] = uVar1;
        uVar13 = (ulong)uVar1;
        puVar17 = puVar10;
        if (*puVar15 <= *puVar16) goto LAB_00afffa8;
      }
LAB_00afff98:
      *puVar17 = uVar5;
      *puVar11 = uVar1;
      uVar12 = uVar13;
    }
    else if (*puVar16 < uVar2) {
      *puVar10 = uVar5;
      *puVar11 = uVar4;
      uVar13 = uVar8;
      uVar12 = uVar8;
      puVar11 = puVar10;
      if (*puVar16 < *puVar15) goto LAB_00afff98;
    }
LAB_00afffa8:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      lVar14 = 0xc;
      puVar11 = param_1 + 3;
      do {
        uVar1 = *puVar11;
        puVar17 = (uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18);
        lVar18 = lVar14;
        if (*puVar17 < *(uint *)(lVar7 + uVar12 * 0x78 + 0x18)) {
          do {
            lVar6 = lVar18 + -4;
            *(int *)((long)param_1 + lVar18) = (int)uVar12;
            puVar10 = param_1;
            if (lVar6 == 0) goto LAB_00b00020;
            uVar12 = (ulong)*(uint *)((long)param_1 + lVar18 + -8);
            lVar18 = lVar6;
          } while (*puVar17 < *(uint *)(lVar7 + uVar12 * 0x78 + 0x18));
          puVar10 = (uint *)((long)param_1 + lVar6);
LAB_00b00020:
          iVar9 = iVar9 + 1;
          *puVar10 = uVar1;
          if (iVar9 == 8) {
            return puVar11 + 1 == param_2;
          }
        }
        if (puVar11 + 1 == param_2) {
          return true;
        }
        uVar12 = (ulong)*puVar11;
        lVar14 = lVar14 + 4;
        puVar11 = puVar11 + 1;
      } while( true );
    }
  }
  return true;
}


