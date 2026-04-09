// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PedestrianAudioData
// Entry Point: 0089913c
// Size: 32 bytes
// Signature: undefined __thiscall PedestrianAudioData(PedestrianAudioData * this)


/* PedestrianAudioData::PedestrianAudioData() */

void __thiscall PedestrianAudioData::PedestrianAudioData(PedestrianAudioData *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 8) = 0;
  this[0x18] = (PedestrianAudioData)0x0;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)this = 0x200000000;
  return;
}


