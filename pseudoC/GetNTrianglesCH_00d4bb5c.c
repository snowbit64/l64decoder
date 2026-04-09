// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNTrianglesCH
// Entry Point: 00d4bb5c
// Size: 40 bytes
// Signature: undefined __thiscall GetNTrianglesCH(HACD * this, ulong param_1)


/* HACD::HACD::GetNTrianglesCH(unsigned long) const */

undefined8 __thiscall HACD::HACD::GetNTrianglesCH(HACD *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x68)) {
    return *(undefined8 *)(*(long *)(this + 0xf8) + param_1 * 0x110 + 0x60);
  }
  return 0;
}


