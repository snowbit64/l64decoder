// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzSetOffset
// Entry Point: 00e32c50
// Size: 108 bytes
// Signature: undefined unzSetOffset(void)


undefined8 unzSetOffset(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x88) = param_2;
    uVar1 = FUN_00e30e5c(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}


