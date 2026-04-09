// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValidVoiceHandleLocked
// Entry Point: 00e3d208
// Size: 120 bytes
// Signature: undefined __thiscall isValidVoiceHandleLocked(Soloud * this, uint param_1)


/* SoLoud::Soloud::isValidVoiceHandleLocked(unsigned int) */

undefined8 __thiscall SoLoud::Soloud::isValidVoiceHandleLocked(Soloud *this,uint param_1)

{
  uint *puVar1;
  
  if (param_1 < 0xfffff000) {
    puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
    if (puVar1 != (uint *)0x0) {
      param_1 = *puVar1;
    }
    if (param_1 != 0) {
      if (((*(long *)(this + ((ulong)param_1 & 0xfff) * 8 + 0x98) != 0) &&
          ((int)((ulong)param_1 & 0xfff) != 0)) &&
         ((*(uint *)(*(long *)(this + ((ulong)param_1 & 0xfff) * 8 + 0x98) + 8) & 0xfffff) ==
          param_1 >> 0xc)) {
        return 1;
      }
    }
  }
  return 0;
}


