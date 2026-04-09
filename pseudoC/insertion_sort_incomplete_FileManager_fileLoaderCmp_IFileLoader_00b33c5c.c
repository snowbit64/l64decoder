// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<FileManager::fileLoaderCmp&,IFileLoader**>
// Entry Point: 00b33c5c
// Size: 736 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<FileManager::fileLoaderCmp&,IFileLoader**>(IFileLoader * * param_1, IFileLoader * * param_2, fileLoaderCmp * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<FileManager::fileLoaderCmp&,
   IFileLoader**>(IFileLoader**, IFileLoader**, FileManager::fileLoaderCmp&) */

bool std::__ndk1::__insertion_sort_incomplete<FileManager::fileLoaderCmp&,IFileLoader**>
               (IFileLoader **param_1,IFileLoader **param_2,fileLoaderCmp *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  IFileLoader *pIVar5;
  IFileLoader *pIVar6;
  IFileLoader *pIVar7;
  IFileLoader **ppIVar8;
  int iVar9;
  IFileLoader *pIVar10;
  IFileLoader *pIVar11;
  IFileLoader **ppIVar12;
  IFileLoader **ppIVar13;
  long lVar14;
  long lVar15;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pIVar7 = *param_1;
    if (*(uint *)(param_2[-1] + 8) < *(uint *)(pIVar7 + 8)) {
      *param_1 = param_2[-1];
      param_2[-1] = pIVar7;
    }
    break;
  case 3:
    pIVar7 = *param_1;
    pIVar5 = param_1[1];
    pIVar10 = param_2[-1];
    uVar1 = *(uint *)(pIVar7 + 8);
    uVar2 = *(uint *)(pIVar5 + 8);
    if (uVar2 < uVar1) {
      if (*(uint *)(pIVar10 + 8) < uVar2) {
        *param_1 = pIVar10;
        param_2[-1] = pIVar7;
        return true;
      }
      *param_1 = pIVar5;
      param_1[1] = pIVar7;
      if (uVar1 <= *(uint *)(param_2[-1] + 8)) {
        return true;
      }
      param_1[1] = param_2[-1];
      param_2[-1] = pIVar7;
      return true;
    }
    if (*(uint *)(pIVar10 + 8) < uVar2) {
      param_1[1] = pIVar10;
      param_2[-1] = pIVar5;
      pIVar7 = *param_1;
      if (*(uint *)(pIVar7 + 8) <= *(uint *)(param_1[1] + 8)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = pIVar7;
      return true;
    }
    break;
  case 4:
    __sort4<FileManager::fileLoaderCmp&,IFileLoader**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    ppIVar12 = param_1 + 2;
    ppIVar8 = param_1 + 3;
    __sort4<FileManager::fileLoaderCmp&,IFileLoader**>(param_1,param_1 + 1,ppIVar12,ppIVar8,param_3)
    ;
    pIVar7 = param_1[3];
    if (*(uint *)(param_2[-1] + 8) < *(uint *)(pIVar7 + 8)) {
      *ppIVar8 = param_2[-1];
      param_2[-1] = pIVar7;
      pIVar7 = *ppIVar8;
      pIVar5 = *ppIVar12;
      uVar1 = *(uint *)(pIVar7 + 8);
      if (uVar1 < *(uint *)(pIVar5 + 8)) {
        pIVar10 = param_1[1];
        *ppIVar12 = pIVar7;
        *ppIVar8 = pIVar5;
        if (uVar1 < *(uint *)(pIVar10 + 8)) {
          pIVar5 = *param_1;
          param_1[1] = pIVar7;
          param_1[2] = pIVar10;
          if (*(uint *)(pIVar5 + 8) <= uVar1) {
            return true;
          }
          *param_1 = pIVar7;
          param_1[1] = pIVar5;
          return true;
        }
      }
    }
    break;
  default:
    pIVar11 = *param_1;
    ppIVar13 = param_1 + 1;
    pIVar5 = *ppIVar13;
    ppIVar12 = param_1 + 2;
    pIVar10 = *ppIVar12;
    uVar1 = *(uint *)(pIVar11 + 8);
    uVar2 = *(uint *)(pIVar5 + 8);
    uVar3 = *(uint *)(pIVar10 + 8);
    pIVar7 = pIVar10;
    ppIVar8 = param_1;
    if (uVar2 < uVar1) {
      pIVar6 = pIVar11;
      if (uVar2 <= uVar3) {
        *param_1 = pIVar5;
        param_1[1] = pIVar11;
        ppIVar8 = ppIVar13;
        if (uVar1 <= uVar3) goto LAB_00b33e8c;
      }
LAB_00b33e7c:
      *ppIVar8 = pIVar10;
      *ppIVar12 = pIVar11;
      pIVar7 = pIVar6;
    }
    else if (uVar3 < uVar2) {
      *ppIVar13 = pIVar10;
      *ppIVar12 = pIVar5;
      pIVar6 = pIVar5;
      pIVar7 = pIVar5;
      ppIVar12 = ppIVar13;
      if (uVar3 < uVar1) goto LAB_00b33e7c;
    }
LAB_00b33e8c:
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      lVar14 = 0x18;
      ppIVar12 = param_1 + 3;
      do {
        pIVar5 = *ppIVar12;
        uVar1 = *(uint *)(pIVar5 + 8);
        lVar15 = lVar14;
        if (uVar1 < *(uint *)(pIVar7 + 8)) {
          do {
            lVar4 = lVar15 + -8;
            *(IFileLoader **)((long)param_1 + lVar15) = pIVar7;
            ppIVar8 = param_1;
            if (lVar4 == 0) goto LAB_00b33ee8;
            pIVar7 = *(IFileLoader **)((long)param_1 + lVar15 + -0x10);
            lVar15 = lVar4;
          } while (uVar1 < *(uint *)(pIVar7 + 8));
          ppIVar8 = (IFileLoader **)((long)param_1 + lVar4);
LAB_00b33ee8:
          iVar9 = iVar9 + 1;
          *ppIVar8 = pIVar5;
          if (iVar9 == 8) {
            return ppIVar12 + 1 == param_2;
          }
        }
        if (ppIVar12 + 1 == param_2) {
          return true;
        }
        pIVar7 = *ppIVar12;
        lVar14 = lVar14 + 8;
        ppIVar12 = ppIVar12 + 1;
      } while( true );
    }
  }
  return true;
}


