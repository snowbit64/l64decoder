// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isOuterCone
// Entry Point: 00b650b0
// Size: 44 bytes
// Signature: undefined __thiscall isOuterCone(Brep * this, ushort param_1)


/* Brep::isOuterCone(unsigned short) const */

bool __thiscall Brep::isOuterCone(Brep *this,ushort param_1)

{
  return *(int *)(*(long *)(this + 0x2f68) +
                  (ulong)*(uint *)(*(long *)(this + 0x2f50) + (ulong)param_1 * 0xc + 4) * 8 + 4) ==
         -1;
}


