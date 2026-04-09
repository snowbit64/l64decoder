// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVisibility
// Entry Point: 00749760
// Size: 24 bytes
// Signature: undefined __thiscall getVisibility(Clip * this, int param_1)


/* Clip::getVisibility(int) */

ushort __thiscall Clip::getVisibility(Clip *this,int param_1)

{
  return *(ushort *)(*(long *)(*(long *)(*(long *)(this + 0x20) + (long)param_1 * 8) + 0xb8) + 4) >>
         0xf;
}


