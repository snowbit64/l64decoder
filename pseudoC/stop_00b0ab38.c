// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00b0ab38
// Size: 52 bytes
// Signature: undefined __cdecl stop(float param_1, float param_2)


/* NullAudioStreamedSource::stop(float, float) */

void NullAudioStreamedSource::stop(float param_1,float param_2)

{
  long in_x0;
  long lVar1;
  
  lVar1 = **(long **)(in_x0 + 0x30);
  *(undefined *)(in_x0 + 8) = 0;
  (**(code **)(lVar1 + 0x30))();
  *(undefined4 *)(in_x0 + 0x40) = 0;
  return;
}


