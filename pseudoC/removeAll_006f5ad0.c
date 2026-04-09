// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAll
// Entry Point: 006f5ad0
// Size: 136 bytes
// Signature: undefined removeAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StatsOverlayManager::removeAll() */

void StatsOverlayManager::removeAll(void)

{
  long *in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *in_x0;
  lVar2 = in_x0[1];
  if ((int)((ulong)(lVar2 - lVar1) >> 4) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((*(int *)(lVar1 + lVar3 + 8) == 0) && (*(long **)(lVar1 + lVar3) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar1 + lVar3) + 8))();
        lVar1 = *in_x0;
        lVar2 = in_x0[1];
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)(lVar2 - lVar1) >> 4 & 0xffffffff));
  }
  in_x0[1] = lVar1;
  *(undefined4 *)(in_x0 + 3) = 0;
  return;
}


