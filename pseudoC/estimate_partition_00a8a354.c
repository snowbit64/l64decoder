// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: estimate_partition
// Entry Point: 00a8a354
// Size: 1000 bytes
// Signature: undefined __cdecl estimate_partition(color_quad_u8 * param_1, bc7enc16_compress_block_params * param_2, uint * param_3)


/* BC7EncodeUtil::BC7Enc16::estimate_partition(BC7EncodeUtil::BC7Enc16::color_quad_u8 const*,
   BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_params const*, unsigned int*) */

void BC7EncodeUtil::BC7Enc16::estimate_partition
               (color_quad_u8 *param_1,bc7enc16_compress_block_params *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bc7enc16_compress_block_params bVar15;
  bc7enc16_compress_block_params bVar16;
  byte bVar17;
  long lVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 local_f8;
  uint auStack_f0 [16];
  color_quad_u8 acStack_b0 [64];
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  uVar1 = *(uint *)param_2;
  if (0x3f < uVar1) {
    uVar1 = 0x40;
  }
  if (uVar1 < 2) {
    uVar20 = 0;
LAB_00a8a3a8:
    if (*(long *)(lVar18 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar20);
    }
    return;
  }
  uVar27 = 0;
  uVar28 = 0;
  uVar21 = 0;
  bVar15 = param_2[0x1a];
  uVar35 = 0xffffffffffffffff;
  do {
    bVar17 = (&DAT_0052010c)[uVar27];
    if (((bVar15 == (bc7enc16_compress_block_params)0x0) || (0x14 < (int)uVar27 - 0xeU)) ||
       ((*(uint *)(g_partition_predictors + (ulong)bVar17 * 4) >> (ulong)(uVar28 + 1 & 0x1f) & 1) !=
        0)) {
      local_f8 = 0;
      lVar23 = (ulong)bVar17 * 0x10;
      uVar37 = (ulong)(byte)g_bc7_partition2[lVar23];
      uVar26 = (ulong)(byte)g_bc7_partition2[lVar23 + 1];
      uVar2 = auStack_f0[uVar37 - 2];
      auStack_f0[uVar37 - 2] = uVar2 + 1;
      uVar29 = (ulong)(byte)g_bc7_partition2[lVar23 + 2];
      uVar3 = auStack_f0[uVar26 - 2];
      auStack_f0[uVar26 - 2] = uVar3 + 1;
      uVar30 = (ulong)(byte)g_bc7_partition2[lVar23 + 3];
      uVar4 = auStack_f0[uVar29 - 2];
      auStack_f0[uVar29 - 2] = uVar4 + 1;
      uVar31 = (ulong)(byte)g_bc7_partition2[lVar23 + 4];
      uVar5 = auStack_f0[uVar30 - 2];
      uVar22 = (ulong)(byte)g_bc7_partition2[lVar23 + 7];
      auStack_f0[uVar30 - 2] = uVar5 + 1;
      uVar24 = (ulong)(byte)g_bc7_partition2[lVar23 + 5];
      uVar6 = auStack_f0[uVar31 - 2];
      uVar32 = (ulong)(byte)g_bc7_partition2[lVar23 + 6];
      auStack_f0[uVar31 - 2] = uVar6 + 1;
      uVar7 = auStack_f0[uVar24 - 2];
      auStack_f0[uVar24 - 2] = uVar7 + 1;
      uVar8 = auStack_f0[uVar32 - 2];
      auStack_f0[uVar32 - 2] = uVar8 + 1;
      uVar25 = (ulong)(byte)g_bc7_partition2[lVar23 + 8];
      uVar9 = auStack_f0[uVar22 - 2];
      auStack_f0[uVar22 - 2] = uVar9 + 1;
      uVar38 = (ulong)(byte)g_bc7_partition2[lVar23 + 9];
      uVar10 = auStack_f0[uVar25 - 2];
      auStack_f0[uVar25 - 2] = uVar10 + 1;
      uVar34 = (ulong)(byte)g_bc7_partition2[lVar23 + 10];
      uVar11 = auStack_f0[uVar38 - 2];
      auStack_f0[uVar38 - 2] = uVar11 + 1;
      uVar36 = (ulong)(byte)g_bc7_partition2[lVar23 + 0xb];
      uVar12 = auStack_f0[uVar34 - 2];
      auStack_f0[uVar34 - 2] = uVar12 + 1;
      uVar13 = auStack_f0[uVar36 - 2];
      uVar33 = (ulong)(byte)g_bc7_partition2[lVar23 + 0xc];
      auStack_f0[uVar36 - 2] = uVar13 + 1;
      uVar20 = *(uint *)(param_1 + 4);
      auStack_f0[uVar37 * 0x10 + (ulong)uVar2] = *(uint *)param_1;
      uVar14 = auStack_f0[uVar33 - 2];
      auStack_f0[uVar26 * 0x10 + (ulong)uVar3] = uVar20;
      uVar20 = *(uint *)(param_1 + 0xc);
      uVar37 = (ulong)(byte)g_bc7_partition2[lVar23 + 0xd];
      auStack_f0[uVar29 * 0x10 + (ulong)uVar4] = *(uint *)(param_1 + 8);
      auStack_f0[uVar30 * 0x10 + (ulong)uVar5] = uVar20;
      auStack_f0[uVar33 - 2] = uVar14 + 1;
      uVar20 = *(uint *)(param_1 + 0x14);
      auStack_f0[uVar31 * 0x10 + (ulong)uVar6] = *(uint *)(param_1 + 0x10);
      uVar4 = auStack_f0[uVar37 - 2];
      auStack_f0[uVar24 * 0x10 + (ulong)uVar7] = uVar20;
      uVar26 = (ulong)(byte)g_bc7_partition2[lVar23 + 0xe];
      uVar2 = *(uint *)(param_1 + 0x1c);
      auStack_f0[uVar32 * 0x10 + (ulong)uVar8] = *(uint *)(param_1 + 0x18);
      uVar24 = (ulong)(byte)g_bc7_partition2[lVar23 + 0xf];
      auStack_f0[uVar37 - 2] = uVar4 + 1;
      uVar20 = *(uint *)(param_1 + 0x20);
      uVar3 = *(uint *)(param_1 + 0x24);
      uVar5 = auStack_f0[uVar26 - 2];
      auStack_f0[uVar22 * 0x10 + (ulong)uVar9] = uVar2;
      auStack_f0[uVar25 * 0x10 + (ulong)uVar10] = uVar20;
      auStack_f0[uVar38 * 0x10 + (ulong)uVar11] = uVar3;
      uVar20 = *(uint *)(param_1 + 0x28);
      uVar2 = *(uint *)(param_1 + 0x2c);
      auStack_f0[uVar26 - 2] = uVar5 + 1;
      auStack_f0[uVar34 * 0x10 + (ulong)uVar12] = uVar20;
      uVar3 = auStack_f0[uVar24 - 2];
      auStack_f0[uVar36 * 0x10 + (ulong)uVar13] = uVar2;
      uVar20 = *(uint *)(param_1 + 0x34);
      bVar16 = param_2[0x18];
      auStack_f0[uVar33 * 0x10 + (ulong)uVar14] = *(uint *)(param_1 + 0x30);
      auStack_f0[uVar37 * 0x10 + (ulong)uVar4] = uVar20;
      uVar20 = *(uint *)(param_1 + 0x38);
      uVar2 = *(uint *)(param_1 + 0x3c);
      auStack_f0[uVar24 - 2] = uVar3 + 1;
      auStack_f0[uVar26 * 0x10 + (ulong)uVar5] = uVar20;
      auStack_f0[uVar24 * 0x10 + (ulong)uVar3] = uVar2;
      uVar22 = color_cell_compression_est
                         ((uint)local_f8,(color_quad_u8 *)auStack_f0,(uchar)bVar16,param_3,uVar35);
      bVar19 = uVar35 <= uVar22;
      if (!bVar19) {
        lVar23 = color_cell_compression_est(local_f8._4_4_,acStack_b0,(uchar)bVar16,param_3,uVar35);
        uVar22 = lVar23 + uVar22;
        bVar19 = uVar35 <= uVar22;
      }
      if (bVar19) {
        uVar22 = uVar35;
      }
      uVar20 = (uint)bVar17;
      if (bVar19) {
        uVar20 = uVar21;
      }
      uVar21 = uVar20;
      if (uVar27 != 0xd) {
        uVar21 = uVar28;
      }
      uVar35 = uVar22;
      uVar28 = uVar21;
      uVar21 = uVar20;
      if ((uVar27 == 0x22) && (uVar20 != 0x22)) goto LAB_00a8a3a8;
    }
    else {
      uVar20 = uVar21;
      if (uVar27 == 0x22) goto LAB_00a8a3a8;
    }
    uVar27 = uVar27 + 1;
    uVar20 = uVar21;
    if ((uVar1 <= uVar27) || (uVar35 == 0)) goto LAB_00a8a3a8;
  } while( true );
}


