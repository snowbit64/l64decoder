// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGoToFirstFile
// Entry Point: 00e31a84
// Size: 104 bytes
// Signature: undefined unzGoToFirstFile(void)


undefined8 unzGoToFirstFile(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
    uVar1 = FUN_00e30e5c(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}


