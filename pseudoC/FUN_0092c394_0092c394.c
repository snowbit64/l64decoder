// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0092c394
// Entry Point: 0092c394
// Size: 128 bytes
// Signature: undefined FUN_0092c394(void)


long * FUN_0092c394(long param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar3 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar3;
  if (plVar6 != (long *)0x0) {
    uVar5 = *param_2;
    plVar4 = plVar3;
    do {
      bVar2 = *(uint *)(plVar6 + 5) < *(uint *)(param_2 + 1);
      if (plVar6[4] != uVar5) {
        bVar2 = (ulong)plVar6[4] < uVar5;
      }
      lVar1 = 8;
      if (!bVar2) {
        lVar1 = 0;
        plVar4 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar1);
    } while (plVar6 != (long *)0x0);
    if (plVar4 != plVar3) {
      bVar2 = *(uint *)(param_2 + 1) < *(uint *)(plVar4 + 5);
      if (uVar5 != plVar4[4]) {
        bVar2 = uVar5 < (ulong)plVar4[4];
      }
      if (!bVar2) {
        return plVar4;
      }
    }
  }
  return plVar3;
}


