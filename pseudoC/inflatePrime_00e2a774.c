// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflatePrime
// Entry Point: 00e2a774
// Size: 152 bytes
// Signature: undefined inflatePrime(void)


undefined8 inflatePrime(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0 && (*plVar3 == param_1)) &&
      (*(int *)(plVar3 + 1) - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      plVar3[10] = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0;
      return 0;
    }
    if (param_2 < 0x11) {
      uVar2 = *(uint *)(plVar3 + 0xb);
      uVar1 = uVar2 + param_2;
      if (uVar1 < 0x21) {
        *(uint *)(plVar3 + 0xb) = uVar1;
        plVar3[10] = plVar3[10] +
                     (ulong)((param_3 & ((uint)(-1L << ((ulong)param_2 & 0x3f)) ^ 0xffffffff)) <<
                            (ulong)(uVar2 & 0x1f));
        return 0;
      }
    }
  }
  return 0xfffffffe;
}


