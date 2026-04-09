// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4ef2c
// Entry Point: 00e4ef2c
// Size: 96 bytes
// Signature: undefined FUN_00e4ef2c(void)


undefined8 FUN_00e4ef2c(long param_1)

{
  undefined8 uVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0x6e8) != -1) {
      *(undefined4 *)(param_1 + 0x6ec) = 0;
      *(undefined *)(param_1 + 0x6e4) = 0;
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      return 1;
    }
    uVar1 = FUN_00e4ca1c(param_1);
    if ((int)uVar1 == 0) break;
    if ((*(byte *)(param_1 + 0x6e3) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0x20;
      return 0;
    }
  }
  return uVar1;
}


