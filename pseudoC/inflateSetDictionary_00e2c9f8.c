// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateSetDictionary
// Entry Point: 00e2c9f8
// Size: 272 bytes
// Signature: undefined inflateSetDictionary(void)


undefined8 inflateSetDictionary(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) ||
     ((plVar4 = *(long **)(param_1 + 0x38), plVar4 == (long *)0x0 || (*plVar4 != param_1)))) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(plVar4 + 1);
  if (0x1f < iVar1 - 0x3f34U) {
    return 0xfffffffe;
  }
  if (*(int *)(plVar4 + 2) == 0) {
    if (iVar1 != 0x3f3e) goto LAB_00e2caac;
  }
  else if (iVar1 != 0x3f3e) {
    return 0xfffffffe;
  }
  uVar2 = adler32(0,0,0);
  lVar3 = adler32(uVar2,param_2,param_3);
  if (lVar3 != plVar4[4]) {
    return 0xfffffffd;
  }
LAB_00e2caac:
  uVar2 = FUN_00e2c768(param_1,param_2 + (ulong)param_3,param_3);
  if ((int)uVar2 == 0) {
    *(undefined4 *)((long)plVar4 + 0x14) = 1;
    return uVar2;
  }
  *(undefined4 *)(plVar4 + 1) = 0x3f52;
  return 0xfffffffc;
}


