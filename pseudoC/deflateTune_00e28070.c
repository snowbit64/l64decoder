// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateTune
// Entry Point: 00e28070
// Size: 132 bytes
// Signature: undefined deflateTune(void)


undefined8
deflateTune(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  int iVar1;
  long *plVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) {
    iVar1 = *(int *)(plVar2 + 1);
    if (((iVar1 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar1 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      *(undefined4 *)((long)plVar2 + 0xcc) = param_2;
      *(undefined4 *)(plVar2 + 0x1a) = param_4;
      *(undefined4 *)((long)plVar2 + 0xbc) = param_5;
      *(undefined4 *)(plVar2 + 0x18) = param_3;
      return 0;
    }
  }
  return 0xfffffffe;
}


