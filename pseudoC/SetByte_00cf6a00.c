// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetByte
// Entry Point: 00cf6a00
// Size: 232 bytes
// Signature: undefined __thiscall SetByte(Integer * this, ulong param_1, uchar param_2)


/* CryptoPP::Integer::SetByte(unsigned long, unsigned char) */

void __thiscall CryptoPP::Integer::SetByte(Integer *this,ulong param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = param_1 + 4;
  if (uVar3 < 0x24) {
    uVar3 = (ulong)*(uint *)((long)&DAT_005443f4 + (uVar3 & 0xfffffffffffffffc));
  }
  else if (uVar3 < 0x44) {
    uVar3 = 0x10;
  }
  else if (uVar3 < 0x84) {
    uVar3 = 0x20;
  }
  else if (uVar3 < 0x104) {
    uVar3 = 0x40;
  }
  else {
    uVar5 = 0;
    uVar4 = 0x40;
    do {
      uVar2 = uVar5 + (uint)uVar4 >> 1;
      uVar1 = uVar2;
      if ((uVar3 >> 2) - 1 >> ((ulong)uVar2 & 0x3f) != 0) {
        uVar1 = (uint)uVar4;
        uVar5 = uVar2;
      }
      uVar4 = (ulong)uVar1;
    } while (1 < uVar1 - uVar5);
    uVar3 = 1L << (uVar4 & 0x3f);
  }
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(this + 8),
             uVar3);
  uVar5 = ((uint)param_1 & 3) << 3;
  *(uint *)(*(long *)(this + 0x20) + (param_1 & 0xfffffffffffffffc)) =
       *(uint *)(*(long *)(this + 0x20) + (param_1 & 0xfffffffffffffffc)) &
       (0xff << (ulong)uVar5 ^ 0xffffffffU) | (uint)param_2 << (ulong)uVar5;
  return;
}


