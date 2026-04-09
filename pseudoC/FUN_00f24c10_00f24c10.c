// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24c10
// Entry Point: 00f24c10
// Size: 172 bytes
// Signature: undefined FUN_00f24c10(void)


undefined8
FUN_00f24c10(long param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,int param_6
            )

{
  uint uVar1;
  double *pdVar2;
  long *plVar3;
  double dVar4;
  
  if ((param_4 != 1) || (param_6 != 1)) {
    return 0xffffffff;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = ~(uint)*(byte *)(*(long *)(*plVar3 + 0x18) + 0x81) +
          (int)((ulong)(*(long *)(param_1 + 0x10) - (long)plVar3) >> 4);
  if (*(int *)((long)param_3 + 0xc) == 5) {
    if (*(char *)((long)*param_3 + 0x18) == '#') {
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *param_2 = (double)uVar1;
      return 1;
    }
  }
  else if ((*(int *)((long)param_3 + 0xc) == 3) && ((int)*param_3 - 1U < uVar1)) {
    pdVar2 = (double *)
             (*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10 +
             (long)(int)((int)*param_3 - 1U) * 0x10);
    dVar4 = *pdVar2;
    param_2[1] = pdVar2[1];
    *param_2 = dVar4;
    return 1;
  }
  return 0xffffffff;
}


