// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateEnd
// Entry Point: 00e2c890
// Size: 148 bytes
// Signature: undefined inflateEnd(void)


undefined8 inflateEnd(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
      (pcVar2 = *(code **)(param_1 + 0x48), pcVar2 != (code *)0x0)) &&
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)) &&
      (*(int *)(plVar1 + 1) - 0x3f34U < 0x20)))) {
    if (plVar1[9] != 0) {
      (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1[9]);
      pcVar2 = *(code **)(param_1 + 0x48);
      plVar1 = *(long **)(param_1 + 0x38);
    }
    (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 0;
  }
  return 0xfffffffe;
}


