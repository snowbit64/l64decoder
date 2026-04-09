// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getQuad
// Entry Point: 00a1e58c
// Size: 16 bytes
// Signature: undefined __thiscall getQuad(NPlaneFrustum * this, uint param_1)


/* NPlaneFrustum::getQuad(unsigned int) const */

long __thiscall NPlaneFrustum::getQuad(NPlaneFrustum *this,uint param_1)

{
  return *(long *)(this + 0x18) + (ulong)param_1 * 0x30;
}


