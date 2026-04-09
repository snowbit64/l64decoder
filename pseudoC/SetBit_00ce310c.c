// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBit
// Entry Point: 00ce310c
// Size: 132 bytes
// Signature: undefined __thiscall SetBit(PolynomialMod2 * this, ulong param_1, int param_2)


/* CryptoPP::PolynomialMod2::SetBit(unsigned long, int) */

void __thiscall CryptoPP::PolynomialMod2::SetBit(PolynomialMod2 *this,ulong param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    if (*(ulong *)(this + 0x10) <= param_1 >> 5) {
      return;
    }
    lVar1 = (param_1 >> 5) * 4;
    lVar2 = *(long *)(this + 0x18);
    uVar3 = *(uint *)(lVar2 + lVar1) & (1 << (ulong)((uint)param_1 & 0x1f) ^ 0xffffffffU);
  }
  else {
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::CleanGrow
              ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)this,
               (param_1 >> 5) + 1);
    lVar1 = (param_1 >> 5) * 4;
    lVar2 = *(long *)(this + 0x18);
    uVar3 = *(uint *)(lVar2 + lVar1) | 1 << (ulong)((uint)param_1 & 0x1f);
  }
  *(uint *)(lVar2 + lVar1) = uVar3;
  return;
}


