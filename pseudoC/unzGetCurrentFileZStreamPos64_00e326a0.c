// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetCurrentFileZStreamPos64
// Entry Point: 00e326a0
// Size: 36 bytes
// Signature: undefined unzGetCurrentFileZStreamPos64(void)


long unzGetCurrentFileZStreamPos64(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x140);
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = *(long *)(lVar1 + 0x130) + *(long *)(lVar1 + 0x78);
  }
  return param_1;
}


