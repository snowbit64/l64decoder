// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode
// Entry Point: 00a8b39c
// Size: 160 bytes
// Signature: undefined __cdecl encode(uchar * param_1, uchar * param_2)


/* BC7EncodeUtil::encode(unsigned char*, unsigned char*) */

void BC7EncodeUtil::encode(uchar *param_1,uchar *param_2)

{
  long lVar1;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined local_40;
  undefined2 local_3f;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x40;
  local_3f = 0x101;
  local_44 = 4;
  if (s_bc7enc16_initialized == '\0') {
    BC7Enc16::bc7enc16_compress_block_init();
    s_bc7enc16_initialized = '\x01';
  }
  local_40 = 0;
  uStack_4c = 0x100000001;
  local_54 = 0x100000001;
  BC7Enc16::bc7enc16_compress_block(param_2,param_1,(bc7enc16_compress_block_params *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


