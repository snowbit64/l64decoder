// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getApproximateVolume
// Entry Point: 00e37c34
// Size: 128 bytes
// Signature: undefined __thiscall getApproximateVolume(Soloud * this, uint param_1)


/* SoLoud::Soloud::getApproximateVolume(unsigned int) */

undefined4 __thiscall SoLoud::Soloud::getApproximateVolume(Soloud *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 <= *(uint *)(this + 0x20a4)) {
    if (*(void **)(this + 8) == (void *)0x0) {
      this[0x10] = (Soloud)0x0;
      return *(undefined4 *)(this + (ulong)param_1 * 4 + 0x2828);
    }
    Thread::lockMutex(*(void **)(this + 8));
    this[0x10] = (Soloud)0x0;
    uVar1 = *(undefined4 *)(this + (ulong)param_1 * 4 + 0x2828);
    if (*(void **)(this + 8) != (void *)0x0) {
      Thread::unlockMutex(*(void **)(this + 8));
    }
  }
  return uVar1;
}


