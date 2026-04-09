// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encoder_get_size
// Entry Point: 00e7ceec
// Size: 152 bytes
// Signature: undefined opus_encoder_get_size(void)


void opus_encoder_get_size(int param_1)

{
  long lVar1;
  int iVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_1 - 3U < 0xfffffffe) || (iVar2 = silk_Get_Encoder_Size(&local_2c), iVar2 != 0)) {
    iVar2 = 0;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    local_2c = local_2c + 7 & 0xfffffff8;
    iVar2 = celt_encoder_get_size(param_1);
    iVar2 = iVar2 + local_2c + 0x3f60;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


