// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBit
// Entry Point: 00cf662c
// Size: 256 bytes
// Signature: undefined __thiscall SetBit(Integer * this, ulong param_1, bool param_2)


/* CryptoPP::Integer::SetBit(unsigned long, bool) */

void __thiscall CryptoPP::Integer::SetBit(Integer *this,ulong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2) {
    uVar3 = param_1 + 0x20;
    if (uVar3 < 0x120) {
      uVar3 = (ulong)(uint)(&DAT_005443f4)[uVar3 >> 5];
    }
    else if (uVar3 < 0x220) {
      uVar3 = 0x10;
    }
    else if (uVar3 < 0x420) {
      uVar3 = 0x20;
    }
    else if (uVar3 < 0x820) {
      uVar3 = 0x40;
    }
    else {
      uVar6 = 0;
      uVar4 = 0x40;
      do {
        uVar2 = uVar6 + (uint)uVar4 >> 1;
        uVar1 = uVar2;
        if ((uVar3 >> 5) - 1 >> ((ulong)uVar2 & 0x3f) != 0) {
          uVar1 = (uint)uVar4;
          uVar6 = uVar2;
        }
        uVar4 = (ulong)uVar1;
      } while (1 < uVar1 - uVar6);
      uVar3 = 1L << (uVar4 & 0x3f);
    }
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
               (this + 8),uVar3);
    lVar5 = *(long *)(this + 0x20);
    uVar3 = param_1 >> 3 & 0x1ffffffffffffffc;
    uVar6 = *(uint *)(lVar5 + uVar3) | 1 << (ulong)((uint)param_1 & 0x1f);
  }
  else {
    if (*(ulong *)(this + 0x18) <= param_1 >> 5) {
      return;
    }
    uVar3 = (param_1 >> 5) * 4;
    lVar5 = *(long *)(this + 0x20);
    uVar6 = *(uint *)(lVar5 + uVar3) & (1 << (ulong)((uint)param_1 & 0x1f) ^ 0xffffffffU);
  }
  *(uint *)(lVar5 + uVar3) = uVar6;
  return;
}


