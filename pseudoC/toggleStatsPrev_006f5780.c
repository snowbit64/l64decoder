// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleStatsPrev
// Entry Point: 006f5780
// Size: 200 bytes
// Signature: undefined toggleStatsPrev(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StatsOverlayManager::toggleStatsPrev() */

void StatsOverlayManager::toggleStatsPrev(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *in_x0;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar2 = *in_x0;
  iVar3 = *(int *)(in_x0 + 3);
  lVar7 = in_x0[1] - lVar2 >> 4;
  uVar1 = lVar7 + iVar3;
  uVar8 = (ulong)((int)lVar7 + 1);
  uVar4 = 0;
  if (uVar8 != 0) {
    uVar4 = uVar1 / uVar8;
  }
  lVar7 = uVar1 - uVar4 * uVar8;
  iVar6 = (int)lVar7;
  if (iVar3 == 0) {
    plVar5 = (long *)0x0;
    *(int *)(in_x0 + 3) = iVar6;
  }
  else {
    plVar5 = *(long **)(lVar2 + (-(ulong)(iVar3 - 1U >> 0x1f) & 0xfffffff000000000 |
                                (ulong)(iVar3 - 1U) << 4));
    *(int *)(in_x0 + 3) = iVar6;
  }
  if (iVar6 == 0) {
    plVar9 = (long *)0x0;
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar9 = *(long **)(lVar2 + ((lVar7 << 0x20) + -0x100000000 >> 0x1c));
    if (plVar9 == plVar5) {
      return;
    }
  }
  if (plVar5 != (long *)0x0) {
    *(undefined *)(plVar5 + 1) = 0;
    (**(code **)(*plVar5 + 0x18))(plVar5,0);
  }
  if (plVar9 != (long *)0x0) {
    *(undefined *)(plVar9 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x006f5838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,1);
    return;
  }
  return;
}


