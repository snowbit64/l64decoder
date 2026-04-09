// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetOffset64
// Entry Point: 00e32b6c
// Size: 60 bytes
// Signature: undefined unzGetOffset64(void)


long unzGetOffset64(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x90) == 0) ||
       (((lVar1 = *(long *)(param_1 + 0x68), lVar1 != 0 && (lVar1 != 0xffff)) &&
        (*(long *)(param_1 + 0x80) == lVar1)))) {
      return 0;
    }
    param_1 = *(long *)(param_1 + 0x88);
  }
  return param_1;
}


