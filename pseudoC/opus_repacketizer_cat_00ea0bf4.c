// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_repacketizer_cat
// Entry Point: 00ea0bf4
// Size: 300 bytes
// Signature: undefined opus_repacketizer_cat(void)


void opus_repacketizer_cat(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0 < param_3) {
    if (*(int *)(param_1 + 4) == 0) {
      *param_1 = *param_2;
      uVar4 = opus_packet_get_samples_per_frame(param_2,8000);
      *(undefined4 *)(param_1 + 0x1e8) = uVar4;
      iVar3 = opus_packet_get_nb_frames(param_2,param_3);
    }
    else {
      if (3 < (*param_2 ^ *param_1)) goto LAB_00ea0ca8;
      iVar3 = opus_packet_get_nb_frames(param_2,param_3);
    }
    if ((0 < iVar3) &&
       (iVar1 = *(int *)(param_1 + 4), (iVar1 + iVar3) * *(int *)(param_1 + 0x1e8) < 0x3c1)) {
      uVar5 = opus_packet_parse_impl
                        (param_2,param_3,0,auStack_4c,param_1 + (long)iVar1 * 8 + 8,
                         param_1 + (long)iVar1 * 2 + 0x188,0,0);
      if (0 < (int)uVar5) {
        uVar5 = 0;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
      }
      goto LAB_00ea0cac;
    }
  }
LAB_00ea0ca8:
  uVar5 = 0xfffffffc;
LAB_00ea0cac:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


