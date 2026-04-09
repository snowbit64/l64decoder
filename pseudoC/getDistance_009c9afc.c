// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistance
// Entry Point: 009c9afc
// Size: 180 bytes
// Signature: undefined __thiscall getDistance(DistanceMatrixType * this, uint param_1, basic_string * param_2, int * param_3)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance(unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   int&) */

bool __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::getDistance
          (DistanceMatrixType *this,uint param_1,basic_string *param_2,int *param_3)

{
  uint uVar1;
  DistanceMatrixType **ppDVar2;
  DistanceMatrixType *pDVar3;
  DistanceMatrixType **ppDVar4;
  DistanceMatrixType **ppDVar5;
  
  ppDVar4 = *(DistanceMatrixType ***)(this + 0x18);
  if (param_1 != 0) {
    uVar1 = 0;
    ppDVar5 = ppDVar4;
    do {
      ppDVar2 = (DistanceMatrixType **)ppDVar5[1];
      if ((DistanceMatrixType **)ppDVar5[1] == (DistanceMatrixType **)0x0) {
        ppDVar2 = ppDVar5 + 2;
        ppDVar4 = (DistanceMatrixType **)*ppDVar2;
        if ((DistanceMatrixType **)*ppDVar4 != ppDVar5) {
          do {
            pDVar3 = *ppDVar2;
            ppDVar2 = (DistanceMatrixType **)(pDVar3 + 0x10);
            ppDVar4 = (DistanceMatrixType **)*ppDVar2;
          } while (*ppDVar4 != pDVar3);
        }
      }
      else {
        do {
          ppDVar4 = ppDVar2;
          ppDVar2 = (DistanceMatrixType **)*ppDVar4;
        } while ((DistanceMatrixType **)*ppDVar4 != (DistanceMatrixType **)0x0);
      }
      uVar1 = uVar1 + 1;
      ppDVar5 = ppDVar4;
    } while (uVar1 != param_1);
  }
  if (ppDVar4 != (DistanceMatrixType **)(this + 0x20)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2,(basic_string *)(ppDVar4 + 4));
    *param_3 = *(int *)(ppDVar4 + 7);
  }
  return ppDVar4 != (DistanceMatrixType **)(this + 0x20);
}


