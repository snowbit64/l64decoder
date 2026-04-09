// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HalfTrace
// Entry Point: 00ce6b00
// Size: 252 bytes
// Signature: undefined __cdecl HalfTrace(PolynomialMod2 * param_1)


/* CryptoPP::GF2NP::HalfTrace(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::GF2NP::HalfTrace(PolynomialMod2 *param_1)

{
  void *__dest;
  undefined8 uVar1;
  SecBlock *pSVar2;
  long in_x1;
  void *__src;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *in_x8;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(in_x1 + 0x10);
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar4;
  AllocatorBase<unsigned_int>::CheckSize(uVar4);
  if (uVar4 == 0) {
    __dest = (void *)0x0;
    __src = *(void **)(in_x1 + 0x18);
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (__src == (void *)0x0) goto LAB_00ce6b5c;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar4 << 2);
    __src = *(void **)(in_x1 + 0x18);
    *(void **)(in_x8 + 0x18) = __dest;
    if (__dest == __src) goto LAB_00ce6b5c;
  }
  memcpy(__dest,__src,uVar4 << 2);
LAB_00ce6b5c:
  if (1 < *(int *)(param_1 + 0x90) - 1U) {
    uVar3 = 0;
    do {
                    /* try { // try from 00ce6b78 to 00ce6bbb has its CatchHandler @ 00ce6bfc */
      uVar1 = (**(code **)(*(long *)param_1 + 0x90))(param_1);
      uVar1 = (**(code **)(*(long *)param_1 + 0x90))(param_1,uVar1);
      pSVar2 = (SecBlock *)(**(code **)(*(long *)param_1 + 0x20))(param_1,uVar1);
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                (in_x8,pSVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(int *)(param_1 + 0x90) - 1U >> 1);
  }
  return;
}


