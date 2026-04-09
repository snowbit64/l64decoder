// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00b0ab1c
// Size: 28 bytes
// Signature: undefined __cdecl play(float param_1, float param_2, uint param_3, float param_4, float param_5, IAudioSource * param_6)


/* NullAudioStreamedSource::play(float, float, unsigned int, float, float, IAudioSource*) */

void NullAudioStreamedSource::play
               (float param_1,float param_2,uint param_3,float param_4,float param_5,
               IAudioSource *param_6)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_3;
  *(int *)(uVar1 + 0x48) = (int)param_6;
  *(undefined *)(uVar1 + 8) = 1;
  *(bool *)(uVar1 + 0x44) = (int)param_6 == 0;
  return;
}


