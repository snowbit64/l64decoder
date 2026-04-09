// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_close
// Entry Point: 00e44d14
// Size: 60 bytes
// Signature: undefined stb_vorbis_close(void)


void stb_vorbis_close(void *param_1)

{
  if ((param_1 != (void *)0x0) && (FUN_00e44d50(), *(long *)((long)param_1 + 0x80) == 0)) {
    free(param_1);
    return;
  }
  return;
}


