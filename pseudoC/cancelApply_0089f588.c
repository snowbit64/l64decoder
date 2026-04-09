// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelApply
// Entry Point: 0089f588
// Size: 132 bytes
// Signature: undefined cancelApply(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::cancelApply() */

void TerrainDeformation::cancelApply(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TerrainDeformation *in_x0;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  if (in_x0[0x118] == (TerrainDeformation)0x0) {
    return;
  }
  uVar3 = *(uint *)(in_x0 + 0xfc);
  if (uVar3 != 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(in_x0 + 0xf8);
    do {
      if (uVar4 != 0) {
        uVar6 = 0;
        lVar7 = *(long *)(in_x0 + 0x100);
        do {
          uVar1 = uVar5;
          if (*(uint *)(in_x0 + 0xfc) <= uVar5) {
            uVar1 = *(uint *)(in_x0 + 0xfc) - 1;
          }
          uVar2 = 0;
          if (-1 < (int)uVar5) {
            uVar2 = uVar1;
          }
          uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          uVar6 = uVar6 + 1;
          puVar8 = (undefined4 *)(lVar7 + (ulong)(uVar1 + uVar2 * uVar4) * 0x38);
          *puVar8 = puVar8[1];
        } while (uVar4 != uVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  *(undefined2 *)(in_x0 + 0xd4) = 0;
  onFinished(in_x0,4);
  return;
}


