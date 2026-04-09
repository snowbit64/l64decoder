// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFilter
// Entry Point: 00e39f58
// Size: 20 bytes
// Signature: undefined __thiscall setFilter(AudioSource * this, uint param_1, Filter * param_2)


/* SoLoud::AudioSource::setFilter(unsigned int, SoLoud::Filter*) */

void __thiscall SoLoud::AudioSource::setFilter(AudioSource *this,uint param_1,Filter *param_2)

{
  if (param_1 < 8) {
    *(Filter **)(this + (ulong)param_1 * 8 + 0x38) = param_2;
  }
  return;
}


