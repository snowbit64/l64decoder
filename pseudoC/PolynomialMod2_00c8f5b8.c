// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PolynomialMod2
// Entry Point: 00c8f5b8
// Size: 60 bytes
// Signature: undefined __thiscall ~PolynomialMod2(PolynomialMod2 * this)


/* CryptoPP::PolynomialMod2::~PolynomialMod2() */

void __thiscall CryptoPP::PolynomialMod2::~PolynomialMod2(PolynomialMod2 *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  uVar1 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 0x10) <= *(ulong *)(this + 8)) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8f5e8 to 00c8f5eb has its CatchHandler @ 00c8f5f4 */
  UnalignedDeallocate(pvVar2);
  return;
}


