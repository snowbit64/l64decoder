// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetByte
// Entry Point: 00cf69d4
// Size: 44 bytes
// Signature: undefined __thiscall GetByte(Integer * this, ulong param_1)


/* CryptoPP::Integer::GetByte(unsigned long) const */

uint __thiscall CryptoPP::Integer::GetByte(Integer *this,ulong param_1)

{
  if (param_1 >> 2 < *(ulong *)(this + 0x18)) {
    return *(uint *)(*(long *)(this + 0x20) + (param_1 & 0xfffffffffffffffc)) >>
           (ulong)(((uint)param_1 & 3) << 3);
  }
  return 0;
}


