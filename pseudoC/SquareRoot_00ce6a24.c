// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SquareRoot
// Entry Point: 00ce6a24
// Size: 200 bytes
// Signature: undefined __cdecl SquareRoot(PolynomialMod2 * param_1)


/* CryptoPP::GF2NP::SquareRoot(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::GF2NP::SquareRoot(PolynomialMod2 *param_1)

{
  void *__dest;
  SecBlock *pSVar1;
  long in_x1;
  void *__src;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *in_x8;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(in_x1 + 0x10);
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar3;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    __dest = (void *)0x0;
    __src = *(void **)(in_x1 + 0x18);
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (__src == (void *)0x0) goto LAB_00ce6a80;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar3 << 2);
    __src = *(void **)(in_x1 + 0x18);
    *(void **)(in_x8 + 0x18) = __dest;
    if (__dest == __src) goto LAB_00ce6a80;
  }
  memcpy(__dest,__src,uVar3 << 2);
LAB_00ce6a80:
  if (1 < *(uint *)(param_1 + 0x90)) {
    uVar2 = 1;
    do {
                    /* try { // try from 00ce6a98 to 00ce6aaf has its CatchHandler @ 00ce6aec */
      pSVar1 = (SecBlock *)(**(code **)(*(long *)param_1 + 0x90))(param_1);
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                (in_x8,pSVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x90));
  }
  return;
}


