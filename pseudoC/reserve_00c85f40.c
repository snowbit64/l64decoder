// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00c85f40
// Size: 524 bytes
// Signature: undefined __thiscall reserve(vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> >
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
::reserve(vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  pvVar8 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar8 >> 5) * -0x5555555555555555) < param_1) {
    lVar11 = *(long *)(this + 8);
    if (0x2aaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(param_1 * 0x60);
    lVar2 = (lVar11 - (long)pvVar8) / 0x60;
    pvVar10 = (void *)((long)pvVar5 + lVar2 * 0x60);
    pvVar6 = pvVar10;
    pvVar9 = pvVar8;
    if (lVar11 - (long)pvVar8 != 0) {
      lVar12 = 0;
      do {
        lVar3 = lVar12 + lVar2 * 0x60;
                    /* try { // try from 00c86020 to 00c86027 has its CatchHandler @ 00c861a8 */
        CryptoPP::Integer::Integer
                  ((Integer *)((long)pvVar5 + lVar3 + -0x60),(Integer *)(lVar11 + lVar12 + -0x60));
                    /* try { // try from 00c86030 to 00c86033 has its CatchHandler @ 00c8614c */
        CryptoPP::Integer::Integer
                  ((Integer *)((long)pvVar5 + lVar3 + -0x30),(Integer *)(lVar11 + lVar12 + -0x30));
        lVar12 = lVar12 + -0x60;
      } while ((void *)(lVar11 + lVar12) != pvVar8);
      pvVar8 = *(void **)this;
      pvVar6 = (void *)((long)pvVar5 + lVar12 + lVar2 * 0x60);
      pvVar9 = *(void **)(this + 8);
    }
    *(void **)this = pvVar6;
    *(void **)(this + 8) = pvVar10;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + param_1 * 0x60);
    while (pvVar9 != pvVar8) {
      *(undefined ***)((long)pvVar9 + -0x30) = &PTR__Integer_0100c890;
      pvVar6 = *(void **)((long)pvVar9 + -0x10);
      uVar4 = *(ulong *)((long)pvVar9 + -0x20);
      if (*(ulong *)((long)pvVar9 + -0x18) <= *(ulong *)((long)pvVar9 + -0x20)) {
        uVar4 = *(ulong *)((long)pvVar9 + -0x18);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)pvVar6 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00c860c8 to 00c860cb has its CatchHandler @ 00c861bc */
      CryptoPP::UnalignedDeallocate(pvVar6);
      pvVar6 = *(void **)((long)pvVar9 + -0x40);
      *(undefined ***)((long)pvVar9 + -0x60) = &PTR__Integer_0100c890;
      uVar4 = *(ulong *)((long)pvVar9 + -0x50);
      if (*(ulong *)((long)pvVar9 + -0x48) <= *(ulong *)((long)pvVar9 + -0x50)) {
        uVar4 = *(ulong *)((long)pvVar9 + -0x48);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)pvVar6 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00c86084 to 00c86087 has its CatchHandler @ 00c861c0 */
      CryptoPP::UnalignedDeallocate(pvVar6);
      pvVar9 = (void *)((long)pvVar9 + -0x60);
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


