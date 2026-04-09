// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBits
// Entry Point: 00cf6ae8
// Size: 92 bytes
// Signature: undefined __thiscall GetBits(Integer * this, ulong param_1, ulong param_2)


/* CryptoPP::Integer::GetBits(unsigned long, unsigned long) const */

ulong __thiscall CryptoPP::Integer::GetBits(Integer *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    do {
      uVar4 = uVar2 + param_1 >> 5;
      if (uVar4 < *(ulong *)(this + 0x18)) {
        uVar3 = *(uint *)(*(long *)(this + 0x20) + uVar4 * 4) >>
                (ulong)((uint)(uVar2 + param_1) & 0x1f) & 1;
      }
      else {
        uVar3 = 0;
      }
      uVar4 = uVar2 & 0x3f;
      uVar2 = (ulong)((int)uVar2 + 1);
      uVar1 = (ulong)uVar3 << uVar4 | uVar1;
    } while (uVar2 < param_2);
  }
  return uVar1;
}


