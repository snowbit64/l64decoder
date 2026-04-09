// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bus
// Entry Point: 00e3a3a4
// Size: 64 bytes
// Signature: undefined __thiscall Bus(Bus * this)


/* SoLoud::Bus::Bus() */

void __thiscall SoLoud::Bus::Bus(Bus *this)

{
  AudioSource::AudioSource((AudioSource *)this);
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined ***)this = &PTR_setFilter_01013dd0;
  return;
}


