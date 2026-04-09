// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bus
// Entry Point: 00e3acc4
// Size: 36 bytes
// Signature: undefined __thiscall ~Bus(Bus * this)


/* SoLoud::Bus::~Bus() */

void __thiscall SoLoud::Bus::~Bus(Bus *this)

{
  AudioSource::~AudioSource((AudioSource *)this);
  operator_delete(this);
  return;
}


