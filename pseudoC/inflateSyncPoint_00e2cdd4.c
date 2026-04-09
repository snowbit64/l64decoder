// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateSyncPoint
// Entry Point: 00e2cdd4
// Size: 104 bytes
// Signature: undefined inflateSyncPoint(void)


ulong inflateSyncPoint(long param_1)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      (*(int *)(plVar1 + 1) - 0x3f34U < 0x20)))) {
    if (*(int *)(plVar1 + 1) == 0x3f41) {
      return (ulong)(*(int *)(plVar1 + 0xb) == 0);
    }
    return 0;
  }
  return 0xfffffffe;
}


