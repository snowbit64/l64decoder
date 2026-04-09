// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handle_alpha_block
// Entry Point: 00a8ad38
// Size: 212 bytes
// Signature: undefined __cdecl handle_alpha_block(void * param_1, color_quad_u8 * param_2, bc7enc16_compress_block_params * param_3, color_cell_compressor_params * param_4)


/* BC7EncodeUtil::BC7Enc16::handle_alpha_block(void*, BC7EncodeUtil::BC7Enc16::color_quad_u8 const*,
   BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_params const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_params*) */

void BC7EncodeUtil::BC7Enc16::handle_alpha_block
               (void *param_1,color_quad_u8 *param_2,bc7enc16_compress_block_params *param_3,
               color_cell_compressor_params *param_4)

{
  bc7enc16_compress_block_params bVar1;
  long lVar2;
  undefined auStack_98 [16];
  undefined8 local_88;
  undefined auStack_80 [16];
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  color_cell_compressor_results acStack_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_4 + 0x28) = 7;
  *(undefined1 **)(param_4 + 0x18) = g_bc7_weights4;
  *(undefined1 **)(param_4 + 0x20) = g_bc7_weights4x;
  *(undefined4 *)(param_4 + 0x10) = 0x10;
  *(undefined2 *)(param_4 + 0x3c) = 0x101;
  bVar1 = param_3[0x18];
  *(undefined4 *)param_4 = 0x10;
  puStack_30 = auStack_98;
  *(color_quad_u8 **)(param_4 + 8) = param_2;
  *(bc7enc16_compress_block_params *)(param_4 + 0x3f) = bVar1;
  local_38 = auStack_80;
  color_cell_compression(6,param_4,acStack_50,param_3);
  local_60 = local_40;
  local_70 = local_48;
  local_68 = uStack_44;
  local_88 = 6;
  encode_bc7_block(param_1,(bc7_optimization_results *)&local_88);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


