// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>
// Entry Point: 00cc0114
// Size: 572 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>(vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>> * this, BaseAndExponent * param_1)


/* void std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >
   >::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>
   >(CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>&&) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>
          (vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
           *this,BaseAndExponent *param_1)

{
  ulong uVar1;
  Integer *pIVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Integer *this_00;
  void *pvVar10;
  void *pvVar11;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 5;
  uVar9 = lVar8 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar1 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x60);
  }
  this_00 = (Integer *)((long)pvVar5 + lVar7 * 0x20);
                    /* try { // try from 00cc01e0 to 00cc01eb has its CatchHandler @ 00cc03a0 */
  CryptoPP::Integer::Integer(this_00,(Integer *)param_1);
                    /* try { // try from 00cc01fc to 00cc01ff has its CatchHandler @ 00cc0350 */
  CryptoPP::Integer::Integer
            ((Integer *)((long)pvVar5 + lVar7 * 0x20 + 0x30),(Integer *)(param_1 + 0x30));
  pvVar10 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pIVar2 = this_00 + 0x60;
  pvVar11 = pvVar10;
  if (pvVar3 != pvVar10) {
    lVar7 = 0;
    do {
                    /* try { // try from 00cc022c to 00cc0233 has its CatchHandler @ 00cc03f0 */
      CryptoPP::Integer::Integer(this_00 + lVar7 + -0x60,(Integer *)((long)pvVar3 + lVar7 + -0x60));
                    /* try { // try from 00cc023c to 00cc023f has its CatchHandler @ 00cc03a4 */
      CryptoPP::Integer::Integer(this_00 + lVar7 + -0x30,(Integer *)((long)pvVar3 + lVar7 + -0x30));
      lVar7 = lVar7 + -0x60;
    } while ((void *)((long)pvVar3 + lVar7) != pvVar10);
    pvVar10 = *(void **)this;
    this_00 = this_00 + lVar7;
    pvVar11 = *(void **)(this + 8);
  }
  *(Integer **)this = this_00;
  *(Integer **)(this + 8) = pIVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x60);
  while (pvVar11 != pvVar10) {
    *(undefined ***)((long)pvVar11 + -0x30) = &PTR__Integer_0100c890;
    pvVar5 = *(void **)((long)pvVar11 + -0x10);
    uVar1 = *(ulong *)((long)pvVar11 + -0x20);
    if (*(ulong *)((long)pvVar11 + -0x18) <= *(ulong *)((long)pvVar11 + -0x20)) {
      uVar1 = *(ulong *)((long)pvVar11 + -0x18);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar5 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc02c4 to 00cc02c7 has its CatchHandler @ 00cc0404 */
    CryptoPP::UnalignedDeallocate(pvVar5);
    pvVar5 = *(void **)((long)pvVar11 + -0x40);
    *(undefined ***)((long)pvVar11 + -0x60) = &PTR__Integer_0100c890;
    uVar1 = *(ulong *)((long)pvVar11 + -0x50);
    if (*(ulong *)((long)pvVar11 + -0x48) <= *(ulong *)((long)pvVar11 + -0x50)) {
      uVar1 = *(ulong *)((long)pvVar11 + -0x48);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar5 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc0280 to 00cc0283 has its CatchHandler @ 00cc0408 */
    CryptoPP::UnalignedDeallocate(pvVar5);
    pvVar11 = (void *)((long)pvVar11 + -0x60);
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


