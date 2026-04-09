// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBit
// Entry Point: 00cf68ec
// Size: 44 bytes
// Signature: undefined __thiscall GetBit(Integer * this, ulong param_1)


/* CryptoPP::Integer::GetBit(unsigned long) const */

uint __thiscall CryptoPP::Integer::GetBit(Integer *this,ulong param_1)

{
  if (param_1 >> 5 < *(ulong *)(this + 0x18)) {
    return *(uint *)(*(long *)(this + 0x20) + (param_1 >> 5) * 4) >> (ulong)((uint)param_1 & 0x1f) &
           1;
  }
  return 0;
}


