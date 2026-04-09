// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: voiceGroupHandleToArray
// Entry Point: 00e3fa6c
// Size: 64 bytes
// Signature: undefined __thiscall voiceGroupHandleToArray(Soloud * this, uint param_1)


/* SoLoud::Soloud::voiceGroupHandleToArray(unsigned int) const */

long __thiscall SoLoud::Soloud::voiceGroupHandleToArray(Soloud *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  if (0xffffefff < param_1) {
    if ((param_1 & 0xfff) < *(uint *)(this + 0x214e8)) {
      lVar2 = *(long *)(*(long *)(this + 0x214e0) + (ulong)(param_1 & 0xfff) * 8);
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + 4;
      }
      return lVar1;
    }
  }
  return 0;
}


