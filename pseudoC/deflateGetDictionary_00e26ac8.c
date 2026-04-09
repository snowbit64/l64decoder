// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateGetDictionary
// Entry Point: 00e26ac8
// Size: 240 bytes
// Signature: undefined deflateGetDictionary(void)


undefined8 deflateGetDictionary(long param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) ||
     (plVar5 = *(long **)(param_1 + 0x38), plVar5 == (long *)0x0)) {
    return 0xfffffffe;
  }
  if (*plVar5 == param_1) {
    iVar3 = *(int *)(plVar5 + 1);
    if (((0x38 < iVar3 - 0x39U) ||
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
       ((iVar3 != 0x29a && (iVar3 != 0x2a)))) {
      return 0xfffffffe;
    }
    uVar1 = *(uint *)((long)plVar5 + 0xb4) + *(uint *)((long)plVar5 + 0xac);
    uVar2 = *(uint *)(plVar5 + 10);
    if (uVar1 <= *(uint *)(plVar5 + 10)) {
      uVar2 = uVar1;
    }
    if ((param_2 != (void *)0x0) && (uVar2 != 0)) {
      memcpy(param_2,(void *)((plVar5[0xc] + (ulong)*(uint *)((long)plVar5 + 0xac) +
                              (ulong)*(uint *)((long)plVar5 + 0xb4)) - (ulong)uVar2),(ulong)uVar2);
    }
    uVar4 = 0;
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar2;
      return uVar4;
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


