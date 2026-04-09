// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setChannel
// Entry Point: 008bc0a0
// Size: 176 bytes
// Signature: undefined __thiscall setChannel(SoundPlayer * this, uint param_1)


/* SoundPlayer::setChannel(unsigned int) */

void __thiscall SoundPlayer::setChannel(SoundPlayer *this,uint param_1)

{
  ulong uVar1;
  
  if (this[0xd9] != (SoundPlayer)0x0) {
    if (((*(long *)(this + 0xe8) == *(long *)(this + 0xf0)) ||
        (uVar1 = (**(code **)(**(long **)(*(long *)(this + 0xe8) +
                                         (ulong)*(uint *)(this + 0x100) * 8) + 0x20))(),
        (uVar1 & 1) == 0)) || (this[0xd9] == (SoundPlayer)0x0)) {
      *(uint *)(this + 0x100) = param_1;
    }
    else {
      if (*(long *)(this + 0xe8) == *(long *)(this + 0xf0)) {
        *(uint *)(this + 0x100) = param_1;
      }
      else {
        (**(code **)(**(long **)(*(long *)(this + 0xe8) + (ulong)*(uint *)(this + 0x100) * 8) + 0x30
                    ))();
        *(uint *)(this + 0x100) = param_1;
        if (this[0xd9] == (SoundPlayer)0x0) {
          return;
        }
      }
      if (*(long *)(this + 0xe8) != *(long *)(this + 0xf0)) {
                    /* WARNING: Could not recover jumptable at 0x008bc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(*(long *)(this + 0xe8) + (ulong)param_1 * 8) + 0x18))();
        return;
      }
    }
  }
  return;
}


