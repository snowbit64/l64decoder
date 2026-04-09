// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bc7enc16_compress_block
// Entry Point: 00a8b184
// Size: 536 bytes
// Signature: undefined __cdecl bc7enc16_compress_block(void * param_1, void * param_2, bc7enc16_compress_block_params * param_3)


/* BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block(void*, void const*,
   BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_params const*) */

void BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block
               (void *param_1,void *param_2,bc7enc16_compress_block_params *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_d8 [2];
  void *local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined2 local_9c;
  bc7enc16_compress_block_params local_99;
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
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3[0x18] == (bc7enc16_compress_block_params)0x0) {
    uStack_a4 = *(undefined8 *)(param_3 + 0xc);
    local_ac = *(undefined8 *)(param_3 + 4);
  }
  else {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 8));
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 4));
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0xc));
    local_ac = CONCAT44((int)(fVar3 * 4.0 * 0.4032266),(int)(fVar4 * 4.0));
    uStack_a4 = CONCAT44(*(int *)(param_3 + 0x10) << 2,(int)(fVar5 * 4.0 * 0.2904232));
  }
  if (((((*(char *)((long)param_2 + 3) == -1) && (*(char *)((long)param_2 + 7) == -1)) &&
       (*(char *)((long)param_2 + 0xb) == -1)) &&
      (((*(char *)((long)param_2 + 0xf) == -1 && (*(char *)((long)param_2 + 0x13) == -1)) &&
       ((*(char *)((long)param_2 + 0x17) == -1 &&
        ((*(char *)((long)param_2 + 0x1b) == -1 && (*(char *)((long)param_2 + 0x1f) == -1)))))))) &&
     ((*(char *)((long)param_2 + 0x23) == -1 &&
      (((((*(char *)((long)param_2 + 0x27) == -1 && (*(char *)((long)param_2 + 0x2b) == -1)) &&
         (*(char *)((long)param_2 + 0x2f) == -1)) &&
        ((*(char *)((long)param_2 + 0x33) == -1 && (*(char *)((long)param_2 + 0x37) == -1)))) &&
       ((*(char *)((long)param_2 + 0x3b) == -1 && (*(char *)((long)param_2 + 0x3f) == -1)))))))) {
    handle_opaque_block(param_1,(color_quad_u8 *)param_2,param_3,
                        (color_cell_compressor_params *)local_d8);
    uVar2 = 0;
  }
  else {
    local_b0 = 7;
    local_c0 = g_bc7_weights4;
    puStack_b8 = g_bc7_weights4x;
    local_c8 = 0x10;
    local_d8[0] = 0x10;
    local_9c = 0x101;
    local_38 = auStack_80;
    puStack_30 = auStack_98;
    local_d0 = param_2;
    local_99 = param_3[0x18];
    color_cell_compression(6,(color_cell_compressor_params *)local_d8,acStack_50,param_3);
    local_60 = local_40;
    local_70 = local_48;
    local_68 = uStack_44;
    local_88 = 6;
    encode_bc7_block(param_1,(bc7_optimization_results *)&local_88);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


