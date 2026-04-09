// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetGlobalInfo
// Entry Point: 00e30e04
// Size: 28 bytes
// Signature: undefined unzGetGlobalInfo(void)


undefined8 unzGetGlobalInfo(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    param_2[1] = *(undefined8 *)(param_1 + 0x70);
    *param_2 = uVar1;
    return 0;
  }
  return 0xffffff9a;
}


