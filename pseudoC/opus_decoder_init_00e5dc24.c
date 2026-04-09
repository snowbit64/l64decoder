// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decoder_init
// Entry Point: 00e5dc24
// Size: 460 bytes
// Signature: undefined opus_decoder_init(void)


void opus_decoder_init(int *param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = 0xffffffff;
  if ((int)param_2 < 16000) {
    if ((param_2 == 8000) || (param_2 == 12000)) goto LAB_00e5dca4;
  }
  else if ((param_2 == 16000) || ((param_2 == 48000 || (param_2 == 24000)))) {
LAB_00e5dca4:
    if (param_3 - 3U < 0xfffffffe) {
      uVar5 = 0xffffffff;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
      goto LAB_00e5ddec;
    }
    iVar3 = silk_Get_Decoder_Size(&local_4c);
    if (iVar3 == 0) {
      local_4c = local_4c + 7 & 0xfffffff8;
      iVar3 = celt_decoder_get_size(param_3);
      memset(param_1,0,(long)(int)(iVar3 + local_4c + 0x50));
      iVar3 = silk_Get_Decoder_Size(&local_4c);
    }
    else {
      memset(param_1,0,0);
      iVar3 = silk_Get_Decoder_Size(&local_4c);
    }
    if (iVar3 == 0) {
      param_1[0xc] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_2;
      param_1[6] = param_2;
      local_4c = local_4c + 7 & 0xfffffff8;
      param_1[4] = param_3;
      iVar3 = local_4c + 0x50;
      *param_1 = iVar3;
      param_1[1] = 0x50;
      iVar4 = silk_InitDecoder(param_1 + 0x14);
      if (iVar4 == 0) {
        lVar1 = (long)param_1 + (long)iVar3;
        iVar3 = celt_decoder_init(lVar1,param_2,param_3);
        if (iVar3 == 0) {
          opus_custom_decoder_ctl(lVar1,0x2720,0);
          uVar5 = 0;
          param_1[0xb] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = (param_2 >> 4 & 0xfff) / 0x19;
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
          goto LAB_00e5ddec;
        }
      }
    }
    uVar5 = 0xfffffffd;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00e5ddec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


