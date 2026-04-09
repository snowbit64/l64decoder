// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetFilePos64
// Entry Point: 00e31e54
// Size: 52 bytes
// Signature: undefined unzGetFilePos64(void)


undefined8 unzGetFilePos64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    if (*(long *)(param_1 + 0x90) == 0) {
      return 0xffffff9c;
    }
    uVar1 = 0;
    auVar2 = NEON_ext(*(undefined (*) [16])(param_1 + 0x80),*(undefined (*) [16])(param_1 + 0x80),8,
                      1);
    param_2[1] = auVar2._8_8_;
    *param_2 = auVar2._0_8_;
  }
  return uVar1;
}


