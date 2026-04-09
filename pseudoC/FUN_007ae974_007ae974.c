// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae974
// Entry Point: 007ae974
// Size: 48 bytes
// Signature: undefined FUN_007ae974(void)


void FUN_007ae974(AudioSource *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = AudioSource::getSampleElementProbabilityAt(param_1,*param_2);
  param_2[0x40] = uVar1;
  param_2[0x42] = 4;
  return;
}


