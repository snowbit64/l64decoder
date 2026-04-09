// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shouldEnableFps
// Entry Point: 00b206a4
// Size: 84 bytes
// Signature: undefined shouldEnableFps(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::shouldEnableFps() */

bool AndroidInputDevice::shouldEnableFps(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  int iVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(in_x0 + 0x1578) - *(long *)(in_x0 + 0x1570);
  if (lVar2 != 0) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      lVar1 = uVar4 * 8;
      uVar4 = (ulong)((int)uVar4 + 1);
      if (4000.0 < *(float *)(*(long *)(in_x0 + 0x1570) + lVar1 + 4)) {
        iVar3 = iVar3 + 1;
      }
    } while (uVar4 < (ulong)(lVar2 >> 3));
    return iVar3 == 4;
  }
  return false;
}


