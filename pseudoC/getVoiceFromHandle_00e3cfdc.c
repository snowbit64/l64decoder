// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVoiceFromHandle
// Entry Point: 00e3cfdc
// Size: 88 bytes
// Signature: undefined __thiscall getVoiceFromHandle(Soloud * this, uint param_1)


/* SoLoud::Soloud::getVoiceFromHandle(unsigned int) const */

long __thiscall SoLoud::Soloud::getVoiceFromHandle(Soloud *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    param_1 = *puVar1;
  }
  if (param_1 != 0) {
    lVar2 = ((ulong)param_1 & 0xfff) - 1;
    if ((*(long *)(this + lVar2 * 8 + 0xa0) != 0) &&
       ((*(uint *)(*(long *)(this + lVar2 * 8 + 0xa0) + 8) & 0xfffff) == param_1 >> 0xc)) {
      return lVar2;
    }
  }
  return 0xffffffff;
}


