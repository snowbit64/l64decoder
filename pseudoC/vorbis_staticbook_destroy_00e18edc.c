// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_staticbook_destroy
// Entry Point: 00e18edc
// Size: 92 bytes
// Signature: undefined vorbis_staticbook_destroy(void)


void vorbis_staticbook_destroy(undefined8 *param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    free(param_1);
    return;
  }
  return;
}


