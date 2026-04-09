// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_packet_pad
// Entry Point: 00ea1220
// Size: 212 bytes
// Signature: undefined opus_packet_pad(void)


void opus_packet_pad(void *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *__dest;
  undefined auStack_238 [4];
  undefined4 local_234;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    if (param_2 == param_3) {
      uVar3 = 0;
      goto LAB_00ea126c;
    }
    if ((int)param_2 <= (int)param_3) {
      __dest = (void *)((long)param_1 + ((long)(int)param_3 - uVar3));
      local_234 = 0;
      memmove(__dest,param_1,uVar3);
      uVar3 = opus_repacketizer_cat(auStack_238,__dest,uVar3);
      if ((int)uVar3 == 0) {
        uVar2 = opus_repacketizer_out_range_impl(auStack_238,0,local_234,param_1,param_3,0,1);
        uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
      }
      goto LAB_00ea126c;
    }
  }
  uVar3 = 0xffffffff;
LAB_00ea126c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


