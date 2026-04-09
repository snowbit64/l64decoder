// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Pentanomial
// Entry Point: 00ce34d8
// Size: 384 bytes
// Signature: undefined __thiscall Pentanomial(PolynomialMod2 * this, ulong param_1, ulong param_2, ulong param_3, ulong param_4, ulong param_5)


/* CryptoPP::PolynomialMod2::Pentanomial(unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
CryptoPP::PolynomialMod2::Pentanomial
          (PolynomialMod2 *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,
          ulong param_5)

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
                    /* try { // try from 00ce3570 to 00ce361f has its CatchHandler @ 00ce3658 */
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
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,(param_3 >> 5) + 1);
  lVar2 = (param_3 >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)param_3 & 0x1f);
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            (in_x8,(param_4 >> 5) + 1);
  lVar2 = (param_4 >> 5) * 4;
  *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) =
       *(uint *)(*(long *)(in_x8 + 0x18) + lVar2) | 1 << (ulong)((uint)param_4 & 0x1f);
  return;
}


