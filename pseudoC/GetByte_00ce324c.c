// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetByte
// Entry Point: 00ce324c
// Size: 44 bytes
// Signature: undefined __thiscall GetByte(PolynomialMod2 * this, ulong param_1)


/* CryptoPP::PolynomialMod2::GetByte(unsigned long) const */

uint __thiscall CryptoPP::PolynomialMod2::GetByte(PolynomialMod2 *this,ulong param_1)

{
  if (param_1 >> 2 < *(ulong *)(this + 0x10)) {
    return *(uint *)(*(long *)(this + 0x18) + (param_1 & 0xfffffffffffffffc)) >>
           (ulong)(((uint)param_1 & 3) << 3);
  }
  return 0;
}


