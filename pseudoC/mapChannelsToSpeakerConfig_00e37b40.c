// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapChannelsToSpeakerConfig
// Entry Point: 00e37b40
// Size: 36 bytes
// Signature: undefined __thiscall mapChannelsToSpeakerConfig(Soloud * this, uint param_1)


/* SoLoud::Soloud::mapChannelsToSpeakerConfig(unsigned int) const */

undefined4 __thiscall SoLoud::Soloud::mapChannelsToSpeakerConfig(Soloud *this,uint param_1)

{
  if (param_1 - 1 < 8) {
    return *(undefined4 *)(&DAT_00517740 + (long)(int)(param_1 - 1) * 4);
  }
  return 2;
}


