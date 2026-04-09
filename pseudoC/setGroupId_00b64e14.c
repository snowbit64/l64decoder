// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupId
// Entry Point: 00b64e14
// Size: 20 bytes
// Signature: undefined __thiscall setGroupId(Brep * this, uint param_1, uint param_2)


/* Brep::setGroupId(unsigned int, unsigned int) */

void __thiscall Brep::setGroupId(Brep *this,uint param_1,uint param_2)

{
  *(uint *)(*(long *)(this + 0x2f68) + (ulong)param_1 * 0x20 + 4) = param_2;
  return;
}


