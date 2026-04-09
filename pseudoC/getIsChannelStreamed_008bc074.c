// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsChannelStreamed
// Entry Point: 008bc074
// Size: 44 bytes
// Signature: undefined __thiscall getIsChannelStreamed(SoundPlayer * this, uint param_1)


/* SoundPlayer::getIsChannelStreamed(unsigned int) */

undefined8 __thiscall SoundPlayer::getIsChannelStreamed(SoundPlayer *this,uint param_1)

{
  undefined8 uVar1;
  
  if ((this[0xd9] != (SoundPlayer)0x0) && (*(long *)(this + 0xe8) != *(long *)(this + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(*(long *)(this + 0xe8) + (ulong)param_1 * 8) + 0x58))();
    return uVar1;
  }
  return 0;
}


