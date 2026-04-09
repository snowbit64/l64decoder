// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChannelName
// Entry Point: 008bc044
// Size: 48 bytes
// Signature: undefined __thiscall getChannelName(SoundPlayer * this, uint param_1)


/* SoundPlayer::getChannelName(unsigned int) */

undefined * __thiscall SoundPlayer::getChannelName(SoundPlayer *this,uint param_1)

{
  undefined *puVar1;
  
  if ((this[0xd9] != (SoundPlayer)0x0) && (*(long *)(this + 0xe8) != *(long *)(this + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (**(code **)(**(long **)(*(long *)(this + 0xe8) + (ulong)param_1 * 8) + 0x10))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


