// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetFilePos
// Entry Point: 00e31e88
// Size: 48 bytes
// Signature: undefined unzGetFilePos(void)


undefined8 unzGetFilePos(long param_1,undefined8 *param_2)

{
  undefined auVar1 [16];
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    auVar1 = NEON_ext(*(undefined (*) [16])(param_1 + 0x80),*(undefined (*) [16])(param_1 + 0x80),8,
                      1);
    param_2[1] = auVar1._8_8_;
    *param_2 = auVar1._0_8_;
    return 0;
  }
  return 0xffffff9c;
}


