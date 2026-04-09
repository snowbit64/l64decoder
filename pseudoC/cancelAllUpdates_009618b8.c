// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllUpdates
// Entry Point: 009618b8
// Size: 132 bytes
// Signature: undefined cancelAllUpdates(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MultiresTextureGpuUpdater::cancelAllUpdates() */

void MultiresTextureGpuUpdater::cancelAllUpdates(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(in_x0 + 0x120);
  lVar2 = *(long *)(in_x0 + 0x128);
  if (lVar1 != lVar2) {
    uVar4 = (lVar2 - lVar1) - 0xf8;
    lVar3 = lVar1;
    if (0xf7 < uVar4) {
      uVar4 = uVar4 / 0xf8 + 1;
      uVar6 = uVar4 & 0x3fffffffffffffe;
      lVar3 = lVar1 + uVar6 * 0xf8;
      puVar5 = (undefined4 *)(lVar1 + 0x140);
      uVar7 = uVar6;
      do {
        puVar5[-0x3e] = 0;
        uVar7 = uVar7 - 2;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x7c;
      } while (uVar7 != 0);
      if (uVar4 == uVar6) {
        return;
      }
    }
    do {
      *(undefined4 *)(lVar3 + 0x48) = 0;
      lVar3 = lVar3 + 0xf8;
    } while (lVar3 != lVar2);
  }
  return;
}


