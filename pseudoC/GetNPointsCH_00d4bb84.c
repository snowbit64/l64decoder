// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNPointsCH
// Entry Point: 00d4bb84
// Size: 40 bytes
// Signature: undefined __thiscall GetNPointsCH(HACD * this, ulong param_1)


/* HACD::HACD::GetNPointsCH(unsigned long) const */

undefined8 __thiscall HACD::HACD::GetNPointsCH(HACD *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x68)) {
    return *(undefined8 *)(*(long *)(this + 0xf8) + param_1 * 0x110 + 0x20);
  }
  return 0;
}


