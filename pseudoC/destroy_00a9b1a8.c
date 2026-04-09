// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00a9b1a8
// Size: 128 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::destroy() */

void HeadMountedDisplayManager::destroy(void)

{
  long *in_x0;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((long *)in_x0[5] != (long *)0x0) {
    (**(code **)(*(long *)in_x0[5] + 8))();
  }
  lVar3 = *in_x0;
  lVar2 = in_x0[1];
  in_x0[5] = 0;
  lVar4 = lVar2;
  if (lVar2 != lVar3) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(lVar3 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *in_x0;
        lVar2 = in_x0[1];
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      lVar4 = lVar3;
    } while (uVar5 < (ulong)(lVar2 - lVar3 >> 3));
  }
  in_x0[1] = lVar4;
  in_x0[3] = 0;
  in_x0[4] = 0;
  return;
}


