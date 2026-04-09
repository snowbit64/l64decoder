// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_file_offset
// Entry Point: 00e48a00
// Size: 80 bytes
// Signature: undefined stb_vorbis_get_file_offset(void)


int stb_vorbis_get_file_offset(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar2 = ftell(*(FILE **)(param_1 + 0x30));
      iVar1 = (int)lVar2 - *(int *)(param_1 + 0x38);
    }
    else {
      iVar1 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


