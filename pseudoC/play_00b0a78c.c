// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00b0a78c
// Size: 72 bytes
// Signature: undefined __cdecl play(float param_1, float param_2, uint param_3, float param_4, float param_5, IAudioSource * param_6)


/* NullAudioSource::play(float, float, unsigned int, float, float, IAudioSource*) */

void NullAudioSource::play
               (float param_1,float param_2,uint param_3,float param_4,float param_5,
               IAudioSource *param_6)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = (ulong)param_3;
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(uVar1 + 0x1c));
  fVar2 = (param_5 / 1000.0) * fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (param_2 <= 0.01) {
    param_2 = 0.01;
  }
  *(undefined *)(uVar1 + 8) = 1;
  *(int *)(uVar1 + 0x14) = (int)fVar2;
  *(float *)(uVar1 + 0xc) = param_2;
  return;
}


