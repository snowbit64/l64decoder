// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_multistream_packet_unpad
// Entry Point: 00ea14cc
// Size: 548 bytes
// Signature: undefined opus_multistream_packet_unpad(void)


void opus_multistream_packet_unpad(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  int local_2cc;
  undefined auStack_2c8 [4];
  undefined auStack_2c4 [4];
  byte local_2c0 [4];
  int local_2bc;
  undefined auStack_2b8 [384];
  undefined auStack_138 [96];
  int local_d8;
  undefined auStack_d0 [96];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_2 < 1) {
    uVar4 = 0xffffffff;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    if (0 < param_3) {
      uVar7 = 0;
      pbVar6 = param_1;
      do {
        bVar2 = param_3 != 1;
        if (param_2 < 1) {
          uVar4 = 0xfffffffc;
          if (*(long *)(lVar5 + 0x28) == local_70) {
            return;
          }
          goto LAB_00ea16ec;
        }
        local_2bc = 0;
        uVar4 = opus_packet_parse_impl(pbVar6,param_2,bVar2,auStack_2c8,0,auStack_d0,0,&local_2cc);
        iVar1 = local_2cc;
        if ((int)uVar4 < 0) break;
        if (local_2cc < 1) {
LAB_00ea16a4:
          uVar4 = 0xfffffffc;
          break;
        }
        if (local_2bc != 0) {
          if (((*pbVar6 ^ local_2c0[0]) < 4) &&
             (iVar3 = opus_packet_get_nb_frames(pbVar6,local_2cc), 0 < iVar3)) goto LAB_00ea15c8;
          goto LAB_00ea16a4;
        }
        local_2c0[0] = *pbVar6;
        local_d8 = opus_packet_get_samples_per_frame(pbVar6,8000);
        iVar3 = opus_packet_get_nb_frames(pbVar6,iVar1);
        if (iVar3 < 1) goto LAB_00ea16a4;
LAB_00ea15c8:
        if (0x3c0 < (local_2bc + iVar3) * local_d8) goto LAB_00ea16a4;
        uVar4 = opus_packet_parse_impl
                          (pbVar6,iVar1,bVar2,auStack_2c4,auStack_2b8 + (long)local_2bc * 8,
                           auStack_138 + (long)local_2bc * 2,0,0);
        if ((int)uVar4 < 1) {
          if ((int)uVar4 < 0) break;
        }
        else {
          local_2bc = local_2bc + iVar3;
        }
        uVar4 = opus_repacketizer_out_range_impl(local_2c0,0,local_2bc,param_1,param_2,bVar2,0);
        if ((int)uVar4 < 0) break;
        uVar7 = (int)uVar4 + uVar7;
        param_1 = param_1 + (uVar4 & 0xffffffff);
        param_3 = param_3 + -1;
        uVar4 = (ulong)uVar7;
        pbVar6 = pbVar6 + local_2cc;
        param_2 = param_2 - local_2cc;
      } while (param_3 != 0);
      if (*(long *)(lVar5 + 0x28) == local_70) {
        return;
      }
      goto LAB_00ea16ec;
    }
    uVar4 = 0;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_70) {
    return;
  }
LAB_00ea16ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


