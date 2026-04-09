// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_zlib_inflate
// Entry Point: 00dbc74c
// Size: 64 bytes
// Signature: undefined png_zlib_inflate(void)


undefined8 png_zlib_inflate(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x2a8) != '\0') && (*(int *)(param_1 + 0x180) != 0)) {
    if (**(char **)(param_1 + 0x178) < '\0') {
      *(char **)(param_1 + 0x1a8) = "invalid window size (libpng)";
      return 0xfffffffd;
    }
    *(undefined *)(param_1 + 0x2a8) = 0;
  }
  uVar1 = inflate(param_1 + 0x178);
  return uVar1;
}


