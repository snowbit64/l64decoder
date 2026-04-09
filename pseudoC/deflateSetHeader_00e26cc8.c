// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateSetHeader
// Entry Point: 00e26cc8
// Size: 136 bytes
// Signature: undefined deflateSetHeader(void)


undefined8 deflateSetHeader(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) {
    iVar1 = *(int *)(plVar2 + 1);
    if ((((iVar1 - 0x39U < 0x39) &&
         ((1L << ((ulong)(iVar1 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
        ((iVar1 == 0x29a || (iVar1 == 0x2a)))) && (*(int *)(plVar2 + 6) == 2)) {
      plVar2[7] = param_2;
      return 0;
    }
  }
  return 0xfffffffe;
}


