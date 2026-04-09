// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<FileManager::fileLoaderCmp&,IFileLoader**>
// Entry Point: 00b334fc
// Size: 1588 bytes
// Signature: void __cdecl __sort<FileManager::fileLoaderCmp&,IFileLoader**>(IFileLoader * * param_1, IFileLoader * * param_2, fileLoaderCmp * param_3)


/* void std::__ndk1::__sort<FileManager::fileLoaderCmp&, IFileLoader**>(IFileLoader**,
   IFileLoader**, FileManager::fileLoaderCmp&) */

void std::__ndk1::__sort<FileManager::fileLoaderCmp&,IFileLoader**>
               (IFileLoader **param_1,IFileLoader **param_2,fileLoaderCmp *param_3)

{
  ulong uVar1;
  IFileLoader **ppIVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  IFileLoader **ppIVar11;
  IFileLoader *pIVar12;
  IFileLoader **ppIVar13;
  ulong uVar14;
  IFileLoader *pIVar15;
  IFileLoader *pIVar16;
  IFileLoader **ppIVar17;
  IFileLoader *pIVar18;
  IFileLoader *pIVar19;
  IFileLoader **ppIVar20;
  long lVar21;
  IFileLoader **ppIVar22;
  
LAB_00b33524:
  ppIVar13 = param_2 + -1;
  ppIVar20 = param_1;
LAB_00b3352c:
  param_1 = ppIVar20;
  uVar14 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar14 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00b338c8_caseD_0;
  case 2:
    pIVar15 = *param_1;
    if (*(uint *)(param_2[-1] + 8) < *(uint *)(pIVar15 + 8)) {
      *param_1 = param_2[-1];
      param_2[-1] = pIVar15;
      return;
    }
    return;
  case 3:
    pIVar15 = *param_1;
    pIVar16 = param_1[1];
    pIVar18 = param_2[-1];
    uVar8 = *(uint *)(pIVar15 + 8);
    uVar3 = *(uint *)(pIVar16 + 8);
    if (uVar8 <= uVar3) {
      if (uVar3 <= *(uint *)(pIVar18 + 8)) {
        return;
      }
      param_1[1] = pIVar18;
      param_2[-1] = pIVar16;
      pIVar15 = *param_1;
      if (*(uint *)(param_1[1] + 8) < *(uint *)(pIVar15 + 8)) {
        *param_1 = param_1[1];
        param_1[1] = pIVar15;
        return;
      }
      return;
    }
    if (*(uint *)(pIVar18 + 8) < uVar3) {
      *param_1 = pIVar18;
      param_2[-1] = pIVar15;
      return;
    }
    *param_1 = pIVar16;
    param_1[1] = pIVar15;
    if (*(uint *)(param_2[-1] + 8) < uVar8) {
      param_1[1] = param_2[-1];
      param_2[-1] = pIVar15;
      return;
    }
    return;
  case 4:
    __sort4<FileManager::fileLoaderCmp&,IFileLoader**>
              (param_1,param_1 + 1,param_1 + 2,ppIVar13,param_3);
    return;
  case 5:
    ppIVar20 = param_1 + 2;
    ppIVar13 = param_1 + 3;
    __sort4<FileManager::fileLoaderCmp&,IFileLoader**>
              (param_1,param_1 + 1,ppIVar20,ppIVar13,param_3);
    pIVar15 = param_1[3];
    if (*(uint *)(pIVar15 + 8) <= *(uint *)(param_2[-1] + 8)) {
      return;
    }
    *ppIVar13 = param_2[-1];
    param_2[-1] = pIVar15;
    pIVar15 = *ppIVar13;
    pIVar16 = *ppIVar20;
    uVar8 = *(uint *)(pIVar15 + 8);
    if (*(uint *)(pIVar16 + 8) <= uVar8) {
      return;
    }
    pIVar18 = param_1[1];
    *ppIVar20 = pIVar15;
    *ppIVar13 = pIVar16;
    if (*(uint *)(pIVar18 + 8) <= uVar8) {
      return;
    }
    pIVar16 = *param_1;
    param_1[1] = pIVar15;
    param_1[2] = pIVar18;
    if (*(uint *)(pIVar16 + 8) <= uVar8) {
      return;
    }
    *param_1 = pIVar15;
    param_1[1] = pIVar16;
    return;
  default:
    if (0xf7 < (long)uVar14) {
      uVar1 = uVar9;
      if ((long)uVar9 < 0) {
        uVar1 = uVar9 + 1;
      }
      ppIVar20 = (IFileLoader **)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
      if (uVar14 < 0x1f39) {
        pIVar16 = *ppIVar20;
        pIVar15 = *param_1;
        pIVar18 = *ppIVar13;
        uVar8 = *(uint *)(pIVar16 + 8);
        uVar3 = *(uint *)(pIVar15 + 8);
        if (uVar8 < uVar3) {
          if (*(uint *)(pIVar18 + 8) < uVar8) {
            uVar8 = 1;
            *param_1 = pIVar18;
          }
          else {
            *param_1 = pIVar16;
            *ppIVar20 = pIVar15;
            if (uVar3 <= *(uint *)(*ppIVar13 + 8)) {
LAB_00b336c4:
              uVar8 = 1;
              goto LAB_00b336d8;
            }
            uVar8 = 2;
            *ppIVar20 = *ppIVar13;
          }
          *ppIVar13 = pIVar15;
        }
        else if (*(uint *)(pIVar18 + 8) < uVar8) {
          *ppIVar20 = pIVar18;
          *ppIVar13 = pIVar16;
          pIVar15 = *param_1;
          if (*(uint *)(pIVar15 + 8) <= *(uint *)(*ppIVar20 + 8)) goto LAB_00b336c4;
          uVar8 = 2;
          *param_1 = *ppIVar20;
          *ppIVar20 = pIVar15;
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar14 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar14 = uVar9;
        }
        lVar10 = (uVar14 & 0x7ffffffffffffffc) * 2;
        ppIVar11 = (IFileLoader **)((long)param_1 + lVar10);
        ppIVar17 = (IFileLoader **)((long)ppIVar20 + lVar10);
        uVar8 = __sort4<FileManager::fileLoaderCmp&,IFileLoader**>
                          (param_1,ppIVar11,ppIVar20,ppIVar17,param_3);
        pIVar15 = *ppIVar17;
        if (*(uint *)(*ppIVar13 + 8) < *(uint *)(pIVar15 + 8)) {
          *ppIVar17 = *ppIVar13;
          *ppIVar13 = pIVar15;
          pIVar15 = *ppIVar20;
          if (*(uint *)(*ppIVar17 + 8) < *(uint *)(pIVar15 + 8)) {
            *ppIVar20 = *ppIVar17;
            *ppIVar17 = pIVar15;
            pIVar15 = *ppIVar11;
            if (*(uint *)(*ppIVar20 + 8) < *(uint *)(pIVar15 + 8)) {
              *ppIVar11 = *ppIVar20;
              *ppIVar20 = pIVar15;
              pIVar15 = *param_1;
              if (*(uint *)(*ppIVar11 + 8) < *(uint *)(pIVar15 + 8)) {
                uVar8 = uVar8 + 4;
                *param_1 = *ppIVar11;
                *ppIVar11 = pIVar15;
              }
              else {
                uVar8 = uVar8 + 3;
              }
            }
            else {
              uVar8 = uVar8 + 2;
            }
          }
          else {
            uVar8 = uVar8 + 1;
          }
        }
      }
LAB_00b336d8:
      pIVar15 = *param_1;
      uVar3 = *(uint *)(pIVar15 + 8);
      ppIVar11 = ppIVar13;
      if (*(uint *)(*ppIVar20 + 8) <= uVar3) break;
      goto LAB_00b3371c;
    }
    pIVar19 = *param_1;
    ppIVar11 = param_1 + 1;
    pIVar16 = *ppIVar11;
    ppIVar20 = param_1 + 2;
    pIVar18 = *ppIVar20;
    uVar8 = *(uint *)(pIVar19 + 8);
    uVar3 = *(uint *)(pIVar16 + 8);
    uVar4 = *(uint *)(pIVar18 + 8);
    pIVar15 = pIVar18;
    ppIVar13 = param_1;
    if (uVar3 < uVar8) {
      pIVar12 = pIVar19;
      if (uVar3 <= uVar4) {
        *param_1 = pIVar16;
        param_1[1] = pIVar19;
        ppIVar13 = ppIVar11;
        if (uVar8 <= uVar4) goto LAB_00b33aa0;
      }
LAB_00b33a90:
      *ppIVar13 = pIVar18;
      *ppIVar20 = pIVar19;
      pIVar15 = pIVar12;
    }
    else if (uVar4 < uVar3) {
      *ppIVar11 = pIVar18;
      *ppIVar20 = pIVar16;
      pIVar12 = pIVar16;
      pIVar15 = pIVar16;
      ppIVar20 = ppIVar11;
      if (uVar4 < uVar8) goto LAB_00b33a90;
    }
LAB_00b33aa0:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0x18;
    ppIVar20 = param_1 + 3;
    goto LAB_00b33ab0;
  }
  while (ppIVar11 = ppIVar11 + -1, ppIVar11 != param_1) {
    if (*(uint *)(*ppIVar11 + 8) < *(uint *)(*ppIVar20 + 8)) goto code_r0x00b33710;
  }
  ppIVar11 = param_1 + 1;
  ppIVar20 = ppIVar11;
  if (*(uint *)(*ppIVar13 + 8) <= uVar3) {
    while( true ) {
      if (ppIVar20 == ppIVar13) {
        return;
      }
      pIVar15 = *ppIVar20;
      if (uVar3 < *(uint *)(pIVar15 + 8)) break;
      ppIVar20 = ppIVar20 + 1;
    }
    ppIVar11 = ppIVar20 + 1;
    *ppIVar20 = *ppIVar13;
    *ppIVar13 = pIVar15;
  }
  ppIVar17 = ppIVar13;
  if (ppIVar11 == ppIVar13) {
    return;
  }
  while( true ) {
    do {
      ppIVar20 = ppIVar11;
      ppIVar11 = ppIVar20 + 1;
      pIVar15 = *ppIVar20;
    } while (*(uint *)(pIVar15 + 8) <= *(uint *)(*param_1 + 8));
    do {
      ppIVar17 = ppIVar17 + -1;
    } while (*(uint *)(*param_1 + 8) < *(uint *)(*ppIVar17 + 8));
    if (ppIVar17 <= ppIVar20) break;
    *ppIVar20 = *ppIVar17;
    *ppIVar17 = pIVar15;
  }
  goto LAB_00b3352c;
code_r0x00b33710:
  uVar8 = uVar8 + 1;
  *param_1 = *ppIVar11;
  *ppIVar11 = pIVar15;
LAB_00b3371c:
  ppIVar17 = param_1 + 1;
  ppIVar22 = ppIVar17;
  if (ppIVar17 < ppIVar11) {
    while( true ) {
      do {
        ppIVar17 = ppIVar22;
        ppIVar22 = ppIVar17 + 1;
        pIVar15 = *ppIVar17;
      } while (*(uint *)(pIVar15 + 8) < *(uint *)(*ppIVar20 + 8));
      do {
        ppIVar11 = ppIVar11 + -1;
      } while (*(uint *)(*ppIVar20 + 8) <= *(uint *)(*ppIVar11 + 8));
      if (ppIVar11 < ppIVar17) break;
      uVar8 = uVar8 + 1;
      ppIVar2 = ppIVar11;
      if (ppIVar17 != ppIVar20) {
        ppIVar2 = ppIVar20;
      }
      *ppIVar17 = *ppIVar11;
      *ppIVar11 = pIVar15;
      ppIVar20 = ppIVar2;
    }
  }
  if (ppIVar17 != ppIVar20) {
    pIVar15 = *ppIVar17;
    if (*(uint *)(*ppIVar20 + 8) < *(uint *)(pIVar15 + 8)) {
      uVar8 = uVar8 + 1;
      *ppIVar17 = *ppIVar20;
      *ppIVar20 = pIVar15;
    }
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<FileManager::fileLoaderCmp&,IFileLoader**>
                      (param_1,ppIVar17,param_3);
    bVar7 = __insertion_sort_incomplete<FileManager::fileLoaderCmp&,IFileLoader**>
                      (ppIVar17 + 1,param_2,param_3);
    if (bVar7) goto LAB_00b338a8;
    ppIVar20 = ppIVar17 + 1;
    if (bVar6) goto LAB_00b3352c;
  }
  if ((long)param_2 - (long)ppIVar17 <= (long)ppIVar17 - (long)param_1) {
    __sort<FileManager::fileLoaderCmp&,IFileLoader**>(ppIVar17 + 1,param_2,param_3);
    param_2 = ppIVar17;
    goto LAB_00b33524;
  }
  __sort<FileManager::fileLoaderCmp&,IFileLoader**>(param_1,ppIVar17,param_3);
  ppIVar20 = ppIVar17 + 1;
  goto LAB_00b3352c;
LAB_00b338a8:
  param_2 = ppIVar17;
  if (bVar6) {
    return;
  }
  goto LAB_00b33524;
LAB_00b33ab0:
  pIVar16 = *ppIVar20;
  uVar8 = *(uint *)(pIVar16 + 8);
  lVar21 = lVar10;
  if (uVar8 < *(uint *)(pIVar15 + 8)) {
    do {
      lVar5 = lVar21 + -8;
      *(IFileLoader **)((long)param_1 + lVar21) = pIVar15;
      ppIVar13 = param_1;
      if (lVar5 == 0) goto LAB_00b33af8;
      pIVar15 = *(IFileLoader **)((long)param_1 + lVar21 + -0x10);
      lVar21 = lVar5;
    } while (uVar8 < *(uint *)(pIVar15 + 8));
    ppIVar13 = (IFileLoader **)((long)param_1 + lVar5);
LAB_00b33af8:
    *ppIVar13 = pIVar16;
  }
  if (ppIVar20 + 1 == param_2) {
switchD_00b338c8_caseD_0:
    return;
  }
  pIVar15 = *ppIVar20;
  lVar10 = lVar10 + 8;
  ppIVar20 = ppIVar20 + 1;
  goto LAB_00b33ab0;
}


