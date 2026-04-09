// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateValidate
// Entry Point: 00e2d048
// Size: 96 bytes
// Signature: undefined inflateValidate(void)


undefined8 inflateValidate(long param_1,int param_2)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      (*(int *)(plVar1 + 1) - 0x3f34U < 0x20)))) {
    *(uint *)(plVar1 + 2) =
         *(uint *)(plVar1 + 2) & 0xfffffff8 | *(uint *)(plVar1 + 2) & 3 | (uint)(param_2 != 0) << 2;
    return 0;
  }
  return 0xfffffffe;
}


