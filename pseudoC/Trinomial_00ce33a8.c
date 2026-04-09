// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Trinomial
// Entry Point: 00ce33a8
// Size: 284 bytes
// Signature: undefined __thiscall Trinomial(PolynomialMod2 * this, ulong param_1, ulong param_2, ulong param_3)


/* CryptoPP::PolynomialMod2::Trinomial(unsigned long, unsigned long, unsigned long) */

void __thiscall
CryptoPP::PolynomialMod2::Trinomial(PolynomialMod2 *this,ulong param_1,ulong param_2,ulong param_3)

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
                    /* try { // try from 00ce3434 to 00ce348f has its CatchHandler @ 00ce34c4 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,((ulong)this >> 5) + 1);
  lVar2 = ((ulong)this >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)this & 0x1f);
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,(param_1 >> 5) + 1);
  lVar2 = (param_1 >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)param_1 & 0x1f);
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,(param_2 >> 5) + 1);
  lVar2 = (param_2 >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)param_2 & 0x1f);
  return;
}


