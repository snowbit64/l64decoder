// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00afe570
// Size: 404 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GpuProfilerManager::destroy() */

void GpuProfilerManager::destroy(void)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar3 = 0;
  do {
    lVar4 = in_x0 + lVar3 * 0x78;
    plVar5 = (long *)(lVar4 + 0x20);
    lVar2 = *plVar5;
    plVar6 = (long *)(lVar4 + 0x28);
    if (*plVar6 != lVar2) {
      uVar7 = 0;
      do {
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar5;
        }
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar5;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(*plVar6 - lVar2 >> 4));
    }
    lVar2 = in_x0 + lVar3 * 0x78;
    plVar5 = (long *)(lVar2 + 0x40);
    plVar6 = (long *)(lVar2 + 0x38);
    lVar2 = *plVar6;
    if (*plVar5 != lVar2) {
      uVar7 = 0;
      do {
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar6;
        }
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar6;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(*plVar5 - lVar2 >> 4));
    }
    lVar2 = in_x0 + lVar3 * 0x78;
    plVar5 = (long *)(lVar2 + 0x58);
    plVar6 = (long *)(lVar2 + 0x50);
    lVar2 = *plVar6;
    if (*plVar5 != lVar2) {
      uVar7 = 0;
      do {
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar6;
        }
        plVar1 = *(long **)(lVar2 + uVar7 * 0x10 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar2 = *plVar6;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(*plVar5 - lVar2 >> 4));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x28);
  return;
}


