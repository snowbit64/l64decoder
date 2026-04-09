// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilterParameter
// Entry Point: 00e44c68
// Size: 28 bytes
// Signature: undefined __thiscall getFilterParameter(FilterInstance * this, uint param_1)


/* SoLoud::FilterInstance::getFilterParameter(unsigned int) */

undefined4 __thiscall SoLoud::FilterInstance::getFilterParameter(FilterInstance *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < *(uint *)(this + 8)) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + (ulong)param_1 * 4);
  }
  return uVar1;
}


