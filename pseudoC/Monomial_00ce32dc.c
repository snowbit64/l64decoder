// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Monomial
// Entry Point: 00ce32dc
// Size: 184 bytes
// Signature: undefined __thiscall Monomial(PolynomialMod2 * this, ulong param_1)


/* CryptoPP::PolynomialMod2::Monomial(unsigned long) */

void __thiscall CryptoPP::PolynomialMod2::Monomial(PolynomialMod2 *this,ulong param_1)

{
  undefined4 *puVar1;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *in_x8;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(this + 0x20) >> 5;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar3;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (this < (PolynomialMod2 *)0xffffffffffffffe0) {
    puVar1 = (undefined4 *)UnalignedAllocate(uVar3 * 4);
    *puVar1 = 0;
    *(undefined4 **)(in_x8 + 0x18) = puVar1;
    if (uVar3 != 1) {
      memset(puVar1 + 1,0,uVar3 * 4 - 4);
    }
  }
  else {
    *(undefined8 *)(in_x8 + 0x18) = 0;
  }
                    /* try { // try from 00ce335c to 00ce3363 has its CatchHandler @ 00ce3394 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,((ulong)this >> 5) + 1);
  lVar2 = ((ulong)this >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)this & 0x1f);
  return;
}


