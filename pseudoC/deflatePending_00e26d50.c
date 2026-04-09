// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflatePending
// Entry Point: 00e26d50
// Size: 156 bytes
// Signature: undefined deflatePending(void)


undefined8 deflatePending(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) {
    iVar1 = *(int *)(plVar2 + 1);
    if (((iVar1 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar1 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)plVar2[5];
      }
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      *param_3 = *(undefined4 *)((long)plVar2 + 0x1734);
      return 0;
    }
  }
  return 0xfffffffe;
}


