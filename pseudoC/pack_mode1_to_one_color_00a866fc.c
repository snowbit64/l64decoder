// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_mode1_to_one_color
// Entry Point: 00a866fc
// Size: 548 bytes
// Signature: undefined __cdecl pack_mode1_to_one_color(color_cell_compressor_params * param_1, color_cell_compressor_results * param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* BC7EncodeUtil::BC7Enc16::pack_mode1_to_one_color(BC7EncodeUtil::BC7Enc16::color_cell_compressor_params
   const*, BC7EncodeUtil::BC7Enc16::color_cell_compressor_results*, unsigned int, unsigned int,
   unsigned int, unsigned char*) */

void BC7EncodeUtil::BC7Enc16::pack_mode1_to_one_color
               (color_cell_compressor_params *param_1,color_cell_compressor_results *param_2,
               uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  color_cell_compressor_results cVar4;
  color_cell_compressor_results cVar5;
  color_cell_compressor_results cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1 = &g_bc7_mode_1_optimal_endpoints + (ulong)param_3 * 4;
  puVar2 = &g_bc7_mode_1_optimal_endpoints + (ulong)param_4 * 4;
  puVar3 = &g_bc7_mode_1_optimal_endpoints + (ulong)param_5 * 4;
  bVar13 = (uint)(ushort)(&DAT_02112d3e)[(ulong)param_4 * 4] +
           (uint)(ushort)(&DAT_02112d3e)[(ulong)param_3 * 4] +
           (uint)(ushort)(&DAT_02112d3e)[(ulong)param_5 * 4] <
           (uint)*puVar2 + (uint)*puVar1 + (uint)*puVar3;
  uVar18 = (ulong)bVar13;
  lVar19 = uVar18 * 4;
  *(uint *)(param_2 + 0x10) = (uint)bVar13;
  cVar4 = *(color_cell_compressor_results *)(puVar1 + uVar18 * 2 + 1);
  cVar5 = *(color_cell_compressor_results *)(puVar2 + uVar18 * 2 + 1);
  cVar6 = *(color_cell_compressor_results *)(puVar3 + uVar18 * 2 + 1);
  param_2[0xb] = (color_cell_compressor_results)0x0;
  param_2[8] = cVar4;
  param_2[9] = cVar5;
  param_2[10] = cVar6;
  cVar4 = *(color_cell_compressor_results *)((long)puVar1 + lVar19 + 3);
  cVar5 = *(color_cell_compressor_results *)((long)puVar2 + lVar19 + 3);
  cVar6 = *(color_cell_compressor_results *)((long)puVar3 + lVar19 + 3);
  param_2[0xf] = (color_cell_compressor_results)0x0;
  param_2[0xc] = cVar4;
  param_2[0xd] = cVar5;
  param_2[0xe] = cVar6;
  memset(param_6,2,(ulong)*(uint *)param_1);
  uVar18 = (ulong)*(uint *)param_1;
  if (*(uint *)param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    uVar7 = *(int *)(param_2 + 0x10) << 1;
    uVar9 = uVar7 | (uint)(byte)param_2[0xc] << 2;
    uVar10 = uVar7 | (uint)(byte)param_2[8] << 2;
    uVar16 = uVar7 | (uint)(byte)param_2[0xd] << 2;
    uVar11 = uVar7 | (uint)(byte)param_2[9] << 2;
    uVar12 = uVar7 | (uint)(byte)param_2[0xe] << 2;
    uVar7 = uVar7 | (uint)(byte)param_2[10] << 2;
    uVar9 = (uVar9 | uVar9 >> 7) * 0x12 + (uVar10 | uVar10 >> 7) * 0x2e + 0x20 >> 6 & 0xff;
    uVar10 = (uVar16 | uVar16 >> 7) * 0x12 + (uVar11 | uVar11 >> 7) * 0x2e + 0x20 >> 6 & 0xff;
    uVar7 = (uVar12 | uVar12 >> 7) * 0x12 + (uVar7 | uVar7 >> 7) * 0x2e + 0x20 >> 6 & 0xff;
    iVar8 = uVar9 * 0x6d + uVar10 * 0x16e + uVar7 * 0x25;
    pbVar14 = (byte *)(*(long *)(param_1 + 8) + 2);
    do {
      uVar16 = (uint)pbVar14[-2];
      if (param_1[0x3f] == (color_cell_compressor_params)0x0) {
        iVar20 = uVar9 - uVar16;
        iVar17 = uVar10 - pbVar14[-1];
        iVar15 = uVar7 - *pbVar14;
      }
      else {
        iVar15 = uVar16 * 0x6d + (uint)pbVar14[-1] * 0x16e + (uint)*pbVar14 * 0x25;
        iVar20 = iVar8 - iVar15 >> 8;
        iVar17 = (int)((uVar9 * 0x200 - iVar8) + uVar16 * -0x200 + iVar15) >> 8;
        iVar15 = (int)((uVar7 * 0x200 - iVar8) + (uint)*pbVar14 * -0x200 + iVar15) >> 8;
      }
      pbVar14 = pbVar14 + 4;
      uVar18 = uVar18 - 1;
      lVar19 = lVar19 + (ulong)(uint)(iVar20 * iVar20 * *(int *)(param_1 + 0x2c) +
                                      iVar17 * iVar17 * *(int *)(param_1 + 0x30) +
                                     iVar15 * iVar15 * *(int *)(param_1 + 0x34));
    } while (uVar18 != 0);
  }
  *(long *)param_2 = lVar19;
  return;
}


