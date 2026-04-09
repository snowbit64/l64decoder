// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_multistream_packet_pad
// Entry Point: 00ea138c
// Size: 320 bytes
// Signature: undefined opus_multistream_packet_pad(void)


void opus_multistream_packet_pad(void *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  int local_2a0;
  undefined auStack_29c [4];
  undefined auStack_298 [96];
  undefined auStack_238 [4];
  undefined4 local_234;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0 < (int)param_2) {
    __n = (size_t)param_2;
    iVar1 = param_3 - param_2;
    if (iVar1 == 0) {
LAB_00ea13c8:
      uVar4 = 0;
      goto LAB_00ea13d8;
    }
    if ((int)param_2 <= param_3) {
      if (1 < param_4) {
        param_4 = param_4 + -1;
        do {
          if ((int)__n < 1) {
            uVar4 = 0xfffffffc;
            goto LAB_00ea13d8;
          }
          uVar4 = opus_packet_parse_impl(param_1,__n,1,auStack_29c,0,auStack_298,0,&local_2a0);
          if ((int)uVar4 < 0) goto LAB_00ea13d8;
          param_4 = param_4 + -1;
          param_1 = (void *)((long)param_1 + (long)local_2a0);
          uVar3 = (int)__n - local_2a0;
          __n = (size_t)uVar3;
        } while (param_4 != 0);
        if ((int)uVar3 < 1) goto LAB_00ea13d4;
        param_3 = uVar3 + iVar1;
      }
      if (iVar1 == 0) goto LAB_00ea13c8;
      if (-1 < iVar1) {
        __dest = (void *)((long)param_1 + ((long)param_3 - __n));
        local_234 = 0;
        memmove(__dest,param_1,__n);
        uVar4 = opus_repacketizer_cat(auStack_238,__dest,__n);
        if ((int)uVar4 == 0) {
          uVar3 = opus_repacketizer_out_range_impl(auStack_238,0,local_234,param_1,param_3,0,1);
          uVar4 = (ulong)(uVar3 & (int)uVar3 >> 0x1f);
        }
        goto LAB_00ea13d8;
      }
    }
  }
LAB_00ea13d4:
  uVar4 = 0xffffffff;
LAB_00ea13d8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


