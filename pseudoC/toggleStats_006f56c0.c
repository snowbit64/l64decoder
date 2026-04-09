// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleStats
// Entry Point: 006f56c0
// Size: 192 bytes
// Signature: undefined toggleStats(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StatsOverlayManager::toggleStats() */

void StatsOverlayManager::toggleStats(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *in_x0;
  long *plVar6;
  long *plVar7;
  
  lVar2 = *in_x0;
  iVar3 = *(int *)(in_x0 + 3);
  uVar1 = (int)((ulong)(in_x0[1] - lVar2) >> 4) + 1;
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar5 = (iVar3 + 1U) / uVar1;
  }
  iVar4 = (iVar3 + 1U) - uVar5 * uVar1;
  if (iVar3 == 0) {
    plVar6 = (long *)0x0;
    *(int *)(in_x0 + 3) = iVar4;
  }
  else {
    plVar6 = *(long **)(lVar2 + (-(ulong)(iVar3 - 1U >> 0x1f) & 0xfffffff000000000 |
                                (ulong)(iVar3 - 1U) << 4));
    *(int *)(in_x0 + 3) = iVar4;
  }
  if (iVar4 == 0) {
    plVar7 = (long *)0x0;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar7 = *(long **)(lVar2 + (long)iVar4 * 0x10 + -0x10);
    if (plVar7 == plVar6) {
      return;
    }
  }
  if (plVar6 != (long *)0x0) {
    *(undefined *)(plVar6 + 1) = 0;
    (**(code **)(*plVar6 + 0x18))(plVar6,0);
  }
  if (plVar7 != (long *)0x0) {
    *(undefined *)(plVar7 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x006f5770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,1);
    return;
  }
  return;
}


