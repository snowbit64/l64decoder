// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findBestHmd
// Entry Point: 00a9b344
// Size: 100 bytes
// Signature: undefined findBestHmd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::findBestHmd() */

undefined8 HeadMountedDisplayManager::findBestHmd(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *in_x0;
  if (in_x0[1] != lVar2) {
    uVar3 = 0;
    do {
      iVar1 = (**(code **)(**(long **)(lVar2 + uVar3 * 8) + 0x18))();
      if (iVar1 == 0) {
        return *(undefined8 *)(*in_x0 + uVar3 * 8);
      }
      lVar2 = *in_x0;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(in_x0[1] - lVar2 >> 3));
  }
  return 0;
}


