// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaterialAttributesHash
// Entry Point: 009463ac
// Size: 20 bytes
// Signature: undefined __thiscall getMaterialAttributesHash(GsMaterial * this, uint param_1, uint param_2)


/* GsMaterial::getMaterialAttributesHash(unsigned int, unsigned int) const */

undefined8 __thiscall
GsMaterial::getMaterialAttributesHash(GsMaterial *this,uint param_1,uint param_2)

{
  return *(undefined8 *)(this + (ulong)param_2 * 8 + (ulong)param_1 * 0x18 + 0xb8);
}


