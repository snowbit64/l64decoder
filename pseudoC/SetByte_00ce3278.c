// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetByte
// Entry Point: 00ce3278
// Size: 100 bytes
// Signature: undefined __thiscall SetByte(PolynomialMod2 * this, ulong param_1, uchar param_2)


/* CryptoPP::PolynomialMod2::SetByte(unsigned long, unsigned char) */

void __thiscall CryptoPP::PolynomialMod2::SetByte(PolynomialMod2 *this,ulong param_1,uchar param_2)

{
  uint uVar1;
  
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)this,
             param_1 + 4 >> 2);
  uVar1 = ((uint)param_1 & 3) << 3;
  *(uint *)(*(long *)(this + 0x18) + (param_1 & 0xfffffffffffffffc)) =
       *(uint *)(*(long *)(this + 0x18) + (param_1 & 0xfffffffffffffffc)) &
       (0xff << (ulong)uVar1 ^ 0xffffffffU) | (uint)param_2 << (ulong)uVar1;
  return;
}


