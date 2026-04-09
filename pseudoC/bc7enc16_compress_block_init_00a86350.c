// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bc7enc16_compress_block_init
// Entry Point: 00a86350
// Size: 260 bytes
// Signature: undefined bc7enc16_compress_block_init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_init() */

void BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_init(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint in_w13;
  uint in_w14;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = 0;
  do {
    uVar9 = 0;
    uVar7 = 0xffff;
    do {
      uVar10 = 0;
      uVar5 = 0;
      uVar8 = uVar7;
      do {
        uVar7 = uVar10 | uVar5 >> 5;
        uVar10 = uVar10 + 4;
        iVar2 = ((uVar9 >> 5 | uVar9 << 2) * 0x2e + 0x20 + uVar7 * 0x12 >> 6) - (int)lVar6;
        uVar7 = iVar2 * iVar2;
        uVar3 = uVar5;
        uVar4 = uVar9;
        if ((uVar8 & 0xffff) <= uVar7) {
          uVar7 = uVar8;
          uVar3 = in_w14;
          uVar4 = in_w13;
        }
        in_w13 = uVar4;
        in_w14 = uVar3;
        uVar5 = uVar5 + 1;
        uVar8 = uVar7;
      } while (uVar5 != 0x40);
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x40);
    uVar9 = 0;
    uVar10 = 0xffff;
    (&g_bc7_mode_1_optimal_endpoints)[lVar6 * 4] = (short)uVar7;
    (&DAT_02112d3c)[lVar6 * 8] = (char)in_w13;
    (&DAT_02112d3d)[lVar6 * 8] = (char)in_w14;
    do {
      uVar5 = 0;
      uVar7 = 2;
      uVar8 = uVar10;
      do {
        uVar10 = uVar7 | uVar5 >> 5;
        uVar7 = uVar7 + 4;
        iVar2 = ((uVar9 << 2 | uVar9 >> 5 | 2) * 0x2e + 0x20 + uVar10 * 0x12 >> 6) - (int)lVar6;
        uVar10 = iVar2 * iVar2;
        uVar3 = uVar5;
        uVar4 = uVar9;
        if ((uVar8 & 0xffff) <= uVar10) {
          uVar10 = uVar8;
          uVar3 = in_w14;
          uVar4 = in_w13;
        }
        in_w13 = uVar4;
        in_w14 = uVar3;
        uVar5 = uVar5 + 1;
        uVar8 = uVar10;
      } while (uVar5 != 0x40);
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x40);
    lVar1 = lVar6 + 1;
    (&DAT_02112d3e)[lVar6 * 4] = (short)uVar10;
    (&DAT_02112d40)[lVar6 * 8] = (char)in_w13;
    (&DAT_02112d41)[lVar6 * 8] = (char)in_w14;
    lVar6 = lVar1;
  } while (lVar1 != 0x100);
  return;
}


