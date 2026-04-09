// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistance
// Entry Point: 009c9bb0
// Size: 280 bytes
// Signature: undefined __thiscall getDistance(DistanceMatrixType * this, basic_string * param_1)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance
          (DistanceMatrixType *this,basic_string *param_1)

{
  DistanceMatrixType *__n;
  char *__s2;
  byte bVar1;
  bool bVar2;
  int iVar3;
  DistanceMatrixType *pDVar4;
  DistanceMatrixType **ppDVar5;
  char *pcVar6;
  char *pcVar7;
  DistanceMatrixType *pDVar8;
  DistanceMatrixType **ppDVar9;
  
  __n = *(DistanceMatrixType **)(param_1 + 2);
  __s2 = *(char **)(param_1 + 4);
  ppDVar9 = *(DistanceMatrixType ***)(this + 0x18);
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (char *)((long)param_1 + 1);
    __n = (DistanceMatrixType *)(ulong)(*(byte *)param_1 >> 1);
  }
  do {
    if (ppDVar9 == (DistanceMatrixType **)(this + 0x20)) {
      return 0;
    }
    bVar1 = *(byte *)(ppDVar9 + 4);
    pDVar4 = (DistanceMatrixType *)(ulong)(bVar1 >> 1);
    pDVar8 = pDVar4;
    if ((bVar1 & 1) != 0) {
      pDVar8 = ppDVar9[5];
    }
    if (pDVar8 == __n) {
      pDVar8 = ppDVar9[6];
      if ((bVar1 & 1) == 0) {
        pDVar8 = (DistanceMatrixType *)((long)ppDVar9 + 0x21);
      }
      if ((bVar1 & 1) == 0) {
        if (__n == (DistanceMatrixType *)0x0) {
LAB_009c9cac:
          return *(undefined4 *)(ppDVar9 + 7);
        }
        pcVar6 = (char *)((long)ppDVar9 + 0x21);
        pcVar7 = __s2;
        while (*pcVar6 == *pcVar7) {
          pDVar4 = pDVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
          if (pDVar4 == (DistanceMatrixType *)0x0) goto LAB_009c9cac;
        }
      }
      else if ((__n == (DistanceMatrixType *)0x0) ||
              (iVar3 = memcmp(pDVar8,__s2,(size_t)__n), iVar3 == 0)) goto LAB_009c9cac;
    }
    ppDVar5 = (DistanceMatrixType **)ppDVar9[1];
    if ((DistanceMatrixType **)ppDVar9[1] == (DistanceMatrixType **)0x0) {
      ppDVar5 = ppDVar9 + 2;
      bVar2 = *(DistanceMatrixType ***)*ppDVar5 != ppDVar9;
      ppDVar9 = (DistanceMatrixType **)*ppDVar5;
      if (bVar2) {
        do {
          pDVar8 = *ppDVar5;
          ppDVar5 = (DistanceMatrixType **)(pDVar8 + 0x10);
          ppDVar9 = (DistanceMatrixType **)*ppDVar5;
        } while (*ppDVar9 != pDVar8);
      }
    }
    else {
      do {
        ppDVar9 = ppDVar5;
        ppDVar5 = (DistanceMatrixType **)*ppDVar9;
      } while ((DistanceMatrixType **)*ppDVar9 != (DistanceMatrixType **)0x0);
    }
  } while( true );
}


