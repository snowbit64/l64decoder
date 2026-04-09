// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nextOuterCone
// Entry Point: 00b64c88
// Size: 36 bytes
// Signature: undefined __thiscall nextOuterCone(Brep * this, ushort param_1)


/* Brep::nextOuterCone(unsigned short) const */

undefined2 __thiscall Brep::nextOuterCone(Brep *this,ushort param_1)

{
  return *(undefined2 *)
          (*(long *)(this + 0x2f68) +
          (ulong)*(uint *)(*(long *)(this + 0x2f50) + (ulong)param_1 * 0xc + 4) * 8);
}


