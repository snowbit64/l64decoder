// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCache
// Entry Point: 0098b3d0
// Size: 200 bytes
// Signature: undefined clearCache(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PlayerCenteredCollisionHeightmap::clearCache() */

void PlayerCenteredCollisionHeightmap::clearCache(void)

{
  uint uVar1;
  int *in_x0;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  *(undefined8 *)(in_x0 + 8) = 0;
  in_x0[7] = 0;
  uVar1 = in_x0[3] * in_x0[2];
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar4 = *(long *)(in_x0 + 10);
    if (uVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2 & 0xfffffffe;
      puVar5 = (undefined *)(lVar4 + 0x14);
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 2;
        puVar5[-0xc] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x18;
      } while (uVar7 != 0);
      if (uVar6 == uVar2) goto LAB_0098b438;
    }
    lVar3 = uVar2 - uVar6;
    puVar5 = (undefined *)(lVar4 + uVar6 * 0xc + 8);
    do {
      lVar3 = lVar3 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 0xc;
    } while (lVar3 != 0);
  }
LAB_0098b438:
  uVar1 = in_x0[1] * *in_x0;
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar4 = *(long *)(in_x0 + 0xc);
    if (uVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2 & 0xfffffffe;
      puVar5 = (undefined *)(lVar4 + 0xc);
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 2;
        puVar5[-8] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x10;
      } while (uVar7 != 0);
      if (uVar6 == uVar2) {
        return;
      }
    }
    lVar3 = uVar2 - uVar6;
    puVar5 = (undefined *)(lVar4 + uVar6 * 8 + 4);
    do {
      lVar3 = lVar3 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 8;
    } while (lVar3 != 0);
  }
  return;
}


