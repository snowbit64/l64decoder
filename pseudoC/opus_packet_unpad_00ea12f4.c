// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_unpad
// Entry Point: 00ea12f4
// Size: 152 bytes
// Signature: undefined opus_packet_unpad(void)


void opus_packet_unpad(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined auStack_228 [4];
  undefined4 local_224;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    local_224 = 0;
    uVar2 = opus_repacketizer_cat(auStack_228,param_1,param_2);
    if (-1 < (int)uVar2) {
      uVar2 = opus_repacketizer_out_range_impl(auStack_228,0,local_224,param_1,param_2,0,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


