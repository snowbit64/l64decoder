// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6e9c
// Entry Point: 007b6e9c
// Size: 232 bytes
// Signature: undefined FUN_007b6e9c(void)


void FUN_007b6e9c(uint param_1,uint *param_2)

{
  SoundPlayer::addAmbientSampleVariation
            (param_1,(char *)(ulong)*param_2,(float)param_2[8],**(float **)(param_2 + 0xc),
             (*(float **)(param_2 + 0xc))[1],**(float **)(param_2 + 0x10),
             (*(float **)(param_2 + 0x10))[1],(float)param_2[0x14],
             (uint)*(undefined8 *)(param_2 + 4),**(uint **)(param_2 + 0x18),
             **(float **)(param_2 + 0x1c),(*(float **)(param_2 + 0x1c))[1],
             **(float **)(param_2 + 0x20),(*(float **)(param_2 + 0x20))[1],
             **(float **)(param_2 + 0x24),(*(float **)(param_2 + 0x24))[1],
             **(float **)(param_2 + 0x28),(*(float **)(param_2 + 0x28))[1]);
  if (*(void **)(param_2 + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0xc));
  }
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x10));
  }
  if (*(void **)(param_2 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x18));
  }
  if (*(void **)(param_2 + 0x1c) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x1c));
  }
  if (*(void **)(param_2 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x20));
  }
  if (*(void **)(param_2 + 0x24) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x24));
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x28));
    return;
  }
  return;
}


