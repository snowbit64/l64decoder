// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PolynomialMod2
// Entry Point: 00ce2e48
// Size: 132 bytes
// Signature: undefined __thiscall PolynomialMod2(PolynomialMod2 * this, PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::PolynomialMod2(CryptoPP::PolynomialMod2 const&) */

void __thiscall
CryptoPP::PolynomialMod2::PolynomialMod2(PolynomialMod2 *this,PolynomialMod2 *param_1)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x10) = uVar1;
  AllocatorBase<unsigned_int>::CheckSize(uVar1);
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    *(undefined8 *)(this + 0x18) = 0;
    __src = *(void **)(param_1 + 0x18);
    if (__src == (void *)0x0) {
      return;
    }
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar1 << 2);
    *(void **)(this + 0x18) = __dest;
    __src = *(void **)(param_1 + 0x18);
    if (__dest == __src) {
      return;
    }
  }
  memcpy(__dest,__src,*(long *)(this + 0x10) << 2);
  return;
}


