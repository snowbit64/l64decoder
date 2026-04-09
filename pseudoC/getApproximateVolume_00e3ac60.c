// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getApproximateVolume
// Entry Point: 00e3ac60
// Size: 100 bytes
// Signature: undefined __thiscall getApproximateVolume(Bus * this, uint param_1)


/* SoLoud::Bus::getApproximateVolume(unsigned int) */

undefined4 __thiscall SoLoud::Bus::getApproximateVolume(Bus *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 <= *(uint *)(this + 0x18)) && (*(long *)(this + 0xa0) != 0)) &&
     (*(long *)(this + 0x78) != 0)) {
    Soloud::lockAudioMutex();
    uVar1 = *(undefined4 *)(*(long *)(this + 0xa0) + (ulong)param_1 * 4 + 0x218);
    Soloud::unlockAudioMutex();
  }
  return uVar1;
}


