// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateUndermine
// Entry Point: 00e2cff4
// Size: 84 bytes
// Signature: undefined inflateUndermine(void)


undefined8 inflateUndermine(long param_1)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      (*(int *)(plVar1 + 1) - 0x3f34U < 0x20)))) {
    *(undefined4 *)(plVar1 + 0x37d) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}


