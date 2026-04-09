// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_clear
// Entry Point: 00e18f38
// Size: 104 bytes
// Signature: undefined vorbis_book_clear(void)


void vorbis_book_clear(undefined8 *param_1)

{
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    free((void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


