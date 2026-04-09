// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handle_opaque_block
// Entry Point: 00a8ae0c
// Size: 888 bytes
// Signature: undefined __cdecl handle_opaque_block(void * param_1, color_quad_u8 * param_2, bc7enc16_compress_block_params * param_3, color_cell_compressor_params * param_4)


/* BC7EncodeUtil::BC7Enc16::handle_opaque_block(void*, BC7EncodeUtil::BC7Enc16::color_quad_u8
   const*, BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_params const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_params*) */

void BC7EncodeUtil::BC7Enc16::handle_opaque_block
               (void *param_1,color_quad_u8 *param_2,bc7enc16_compress_block_params *param_3,
               color_cell_compressor_params *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined uVar4;
  bc7enc16_compress_block_params bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_1f8;
  color_cell_compressor_results acStack_1f0 [8];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  color_cell_compressor_results acStack_1c8 [8];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined auStack_1a0 [16];
  undefined local_190 [16];
  byte abStack_180 [16];
  byte local_170 [16];
  undefined4 auStack_160 [16];
  undefined auStack_120 [64];
  color_cell_compressor_results acStack_e0 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined auStack_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined auStack_80 [16];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *(undefined4 *)(param_4 + 0x28) = 7;
  param_4[0x3e] = (color_cell_compressor_params)0x0;
  *(undefined1 **)(param_4 + 0x18) = g_bc7_weights4;
  *(undefined1 **)(param_4 + 0x20) = g_bc7_weights4x;
  *(undefined4 *)(param_4 + 0x10) = 0x10;
  bVar5 = param_3[0x18];
  *(undefined4 *)param_4 = 0x10;
  *(undefined2 *)(param_4 + 0x3c) = 0x100;
  *(color_quad_u8 **)(param_4 + 8) = param_2;
  *(bc7enc16_compress_block_params *)(param_4 + 0x3f) = bVar5;
  local_c8 = auStack_b0;
  puStack_c0 = auStack_80;
  uVar9 = color_cell_compression(6,param_4,acStack_e0,param_3);
  local_90 = local_d0;
  local_a0 = local_d8;
  local_98 = uStack_d4;
  local_b8 = 6;
  if ((uVar9 == 0) || (*(int *)param_3 == 0)) goto LAB_00a8b144;
  uVar8 = estimate_partition(param_2,param_3,(uint *)(param_4 + 0x2c));
  lVar11 = 0;
  *(undefined1 **)(param_4 + 0x18) = g_bc7_weights3;
  *(undefined1 **)(param_4 + 0x20) = g_bc7_weights3x;
  *(undefined4 *)(param_4 + 0x10) = 8;
  *(undefined4 *)(param_4 + 0x28) = 6;
  *(undefined2 *)(param_4 + 0x3d) = 0x101;
  local_1f8 = 0;
  do {
    uVar14 = (ulong)(byte)g_bc7_partition2[lVar11 + (ulong)uVar8 * 0x10];
    uVar1 = *(undefined4 *)(param_2 + lVar11 * 4);
    uVar2 = *(uint *)(acStack_1f0 + uVar14 * 4 + -8);
    abStack_180[(ulong)uVar2 + uVar14 * 0x10] = (byte)lVar11;
    lVar11 = lVar11 + 1;
    auStack_160[uVar14 * 0x10 + (ulong)uVar2] = uVar1;
    *(uint *)(acStack_1f0 + uVar14 * 4 + -8) = uVar2 + 1;
    uVar14 = local_1f8;
  } while (lVar11 != 0x10);
  iVar7 = (int)local_1f8;
  uVar15 = local_1f8 & 0xffffffff;
  local_1d8 = auStack_1a0;
  *(int *)param_4 = (int)local_1f8;
  *(undefined4 **)(param_4 + 8) = auStack_160;
  puStack_1d0 = auStack_80;
  uVar10 = color_cell_compression(1,param_4,acStack_1f0,param_3);
  if (uVar10 <= uVar9) {
    local_1b0 = local_190;
    *(uint *)param_4 = local_1f8._4_4_;
    *(undefined **)(param_4 + 8) = auStack_120;
    puStack_1a8 = auStack_80;
    lVar11 = color_cell_compression(1,param_4,acStack_1c8,param_3);
    uVar10 = lVar11 + uVar10;
  }
  if (uVar9 <= uVar10) goto LAB_00a8b144;
  local_b8 = CONCAT44(uVar8,1);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar14 & 0xfffffffe;
      puVar12 = (undefined *)((ulong)auStack_1a0 | 1);
      pbVar13 = (byte *)((ulong)abStack_180 | 1);
      uVar9 = uVar14;
      do {
        uVar9 = uVar9 - 2;
        bVar3 = *pbVar13;
        uVar4 = *puVar12;
        auStack_b0[pbVar13[-1]] = puVar12[-1];
        auStack_b0[bVar3] = uVar4;
        puVar12 = puVar12 + 2;
        pbVar13 = pbVar13 + 2;
      } while (uVar9 != 0);
      if (uVar14 == uVar15) goto LAB_00a8b084;
    }
    lVar11 = uVar15 - uVar14;
    puVar12 = auStack_1a0 + uVar14;
    pbVar13 = abStack_180 + uVar14;
    do {
      lVar11 = lVar11 + -1;
      auStack_b0[*pbVar13] = *puVar12;
      puVar12 = puVar12 + 1;
      pbVar13 = pbVar13 + 1;
    } while (lVar11 != 0);
  }
LAB_00a8b084:
  uVar9 = (ulong)local_1f8._4_4_;
  local_a0 = local_1e8;
  local_98 = uStack_1e4;
  local_90 = CONCAT44(local_90._4_4_,local_1e0);
  if (local_1f8._4_4_ != 0) {
    if (local_1f8._4_4_ == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xfffffffe;
      puVar12 = local_190 + 1;
      pbVar13 = local_170 + 1;
      uVar14 = uVar10;
      do {
        uVar14 = uVar14 - 2;
        bVar3 = *pbVar13;
        uVar4 = *puVar12;
        auStack_b0[pbVar13[-1]] = puVar12[-1];
        auStack_b0[bVar3] = uVar4;
        puVar12 = puVar12 + 2;
        pbVar13 = pbVar13 + 2;
      } while (uVar14 != 0);
      if (uVar10 == uVar9) goto LAB_00a8b130;
    }
    lVar11 = uVar9 - uVar10;
    pbVar13 = local_170 + uVar10;
    puVar12 = local_190 + uVar10;
    do {
      lVar11 = lVar11 + -1;
      auStack_b0[*pbVar13] = *puVar12;
      pbVar13 = pbVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar11 != 0);
  }
LAB_00a8b130:
  local_9c = local_1c0;
  local_94 = uStack_1bc;
  local_88 = local_1b8;
LAB_00a8b144:
  encode_bc7_block(param_1,(bc7_optimization_results *)&local_b8);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


