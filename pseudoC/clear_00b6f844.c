// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00b6f844
// Size: 204 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BrepSpatialHash::clear() */

void BrepSpatialHash::clear(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  long in_x0;
  long lVar4;
  undefined8 *puVar5;
  undefined auVar6 [16];
  
  lVar4 = 0x1f0;
  puVar5 = (undefined8 *)(in_x0 + 0x30);
  do {
    auVar6._8_8_ = puVar5[-3];
    auVar6._0_8_ = puVar5[-6];
    auVar2._8_8_ = puVar5[-2];
    auVar2._0_8_ = puVar5[-5];
    auVar6 = NEON_cmeq(auVar2,auVar6,8);
    if ((~auVar6[0] & 1) != 0) {
      puVar5[-5] = puVar5[-6];
    }
    if ((~auVar6[0] & 1) != 0) {
      puVar5[-2] = puVar5[-3];
    }
    auVar1._8_8_ = puVar5[3];
    auVar1._0_8_ = *puVar5;
    auVar3._8_8_ = puVar5[4];
    auVar3._0_8_ = puVar5[1];
    auVar6 = NEON_cmeq(auVar3,auVar1,8);
    if ((~auVar6[0] & 1) != 0) {
      puVar5[1] = *puVar5;
    }
    if ((~auVar6[0] & 1) != 0) {
      puVar5[4] = puVar5[3];
    }
    lVar4 = lVar4 + -4;
    puVar5 = puVar5 + 0xc;
  } while (lVar4 != 0);
  if (*(long *)(in_x0 + 0x2e88) != *(long *)(in_x0 + 0x2e80)) {
    *(long *)(in_x0 + 0x2e88) = *(long *)(in_x0 + 0x2e80);
  }
  if (*(long *)(in_x0 + 0x2ea0) != *(long *)(in_x0 + 0x2e98)) {
    *(long *)(in_x0 + 0x2ea0) = *(long *)(in_x0 + 0x2e98);
  }
  if (*(long *)(in_x0 + 0x2eb8) != *(long *)(in_x0 + 0x2eb0)) {
    *(long *)(in_x0 + 0x2eb8) = *(long *)(in_x0 + 0x2eb0);
  }
  if (*(long *)(in_x0 + 0x2ed0) != *(long *)(in_x0 + 0x2ec8)) {
    *(long *)(in_x0 + 0x2ed0) = *(long *)(in_x0 + 0x2ec8);
  }
  return;
}


