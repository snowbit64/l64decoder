// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00886c94
// Size: 36 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTSoundStop::update() */

undefined8 BTSoundStop::update(void)

{
  long in_x0;
  
  AnimalSoundSystem::stopSound(*(AnimalSoundSystem **)(in_x0 + 0x28),*(uint *)(in_x0 + 0x30));
  return 1;
}


