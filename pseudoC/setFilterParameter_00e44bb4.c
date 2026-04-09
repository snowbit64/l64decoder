// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFilterParameter
// Entry Point: 00e44bb4
// Size: 60 bytes
// Signature: undefined __thiscall setFilterParameter(FilterInstance * this, uint param_1, float param_2)


/* SoLoud::FilterInstance::setFilterParameter(unsigned int, float) */

void __thiscall
SoLoud::FilterInstance::setFilterParameter(FilterInstance *this,uint param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 < *(uint *)(this + 8)) {
    lVar1 = *(long *)(this + 0x18);
    uVar2 = *(uint *)(this + 0xc);
    *(float *)(*(long *)(this + 0x10) + (ulong)param_1 * 4) = param_2;
    *(undefined4 *)(lVar1 + (ulong)param_1 * 0x30 + 0x28) = 0;
    *(uint *)(this + 0xc) = uVar2 | 1 << (ulong)(param_1 & 0x1f);
  }
  return;
}


