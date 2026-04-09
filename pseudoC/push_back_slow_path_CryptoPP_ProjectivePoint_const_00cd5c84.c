// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::ProjectivePoint_const&>
// Entry Point: 00cd5c84
// Size: 436 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::ProjectivePoint_const&>(vector<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>> * this, ProjectivePoint * param_1)


/* void std::__ndk1::vector<CryptoPP::ProjectivePoint,
   std::__ndk1::allocator<CryptoPP::ProjectivePoint>
   >::__push_back_slow_path<CryptoPP::ProjectivePoint const&>(CryptoPP::ProjectivePoint const&) */

void __thiscall
std::__ndk1::vector<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>>::
__push_back_slow_path<CryptoPP::ProjectivePoint_const&>
          (vector<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>> *this
          ,ProjectivePoint *param_1)

{
  ulong uVar1;
  ProjectivePoint *pPVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ProjectivePoint *pPVar9;
  ProjectivePoint *pPVar10;
  ProjectivePoint *pPVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar8 = lVar7 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xe38e38e38e38e2 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x1c71c71c71c71c7;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x90);
  }
  pPVar10 = (ProjectivePoint *)((long)pvVar4 + lVar6 * 0x10);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x90);
                    /* try { // try from 00cd5d60 to 00cd5d6f has its CatchHandler @ 00cd5e38 */
  allocator<CryptoPP::ProjectivePoint>::
  construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>
            ((allocator<CryptoPP::ProjectivePoint> *)(this + 0x10),pPVar10,param_1);
  pPVar9 = *(ProjectivePoint **)this;
  pPVar11 = *(ProjectivePoint **)(this + 8);
  pPVar2 = pPVar10 + 0x90;
  if (pPVar11 == pPVar9) {
    *(ProjectivePoint **)this = pPVar10;
    *(ProjectivePoint **)(this + 8) = pPVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      pPVar10 = pPVar10 + -0x90;
      pPVar11 = pPVar11 + -0x90;
                    /* try { // try from 00cd5d8c to 00cd5d9b has its CatchHandler @ 00cd5e3c */
      allocator<CryptoPP::ProjectivePoint>::
      construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>
                ((allocator<CryptoPP::ProjectivePoint> *)(this + 0x10),pPVar10,pPVar11);
    } while (pPVar11 != pPVar9);
    pPVar9 = *(ProjectivePoint **)this;
    pPVar11 = *(ProjectivePoint **)(this + 8);
    *(ProjectivePoint **)this = pPVar10;
    *(ProjectivePoint **)(this + 8) = pPVar2;
    *(void **)(this + 0x10) = pvVar4;
    while (pPVar11 != pPVar9) {
      pPVar11 = pPVar11 + -0x90;
      CryptoPP::ProjectivePoint::~ProjectivePoint(pPVar11);
    }
  }
  if (pPVar9 != (ProjectivePoint *)0x0) {
    operator_delete(pPVar9);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


