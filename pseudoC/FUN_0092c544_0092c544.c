// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0092c544
// Entry Point: 0092c544
// Size: 124 bytes
// Signature: undefined FUN_0092c544(void)


long * FUN_0092c544(long param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      uVar1 = memcmp(plVar5 + 4,param_2,0x80);
      if (-1 < (int)uVar1) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[uVar1 >> 0x1f];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = memcmp(param_2,plVar4 + 4,0x80), -1 < iVar2)) {
      return plVar4;
    }
  }
  return plVar3;
}


