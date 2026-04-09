// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encoder_init
// Entry Point: 00e7cf84
// Size: 752 bytes
// Signature: undefined opus_encoder_init(void)


void opus_encoder_init(int *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = 0xffffffff;
  if (param_2 < 16000) {
    if ((param_2 == 8000) || (param_2 == 12000)) goto LAB_00e7d00c;
  }
  else if ((param_2 == 16000) || ((param_2 == 48000 || (param_2 == 24000)))) {
LAB_00e7d00c:
    uVar5 = 0xffffffff;
    if ((0xfffffffd < param_3 - 3U) && ((param_4 - 0x800U < 4 && (param_4 - 0x800U != 2)))) {
      iVar3 = silk_Get_Encoder_Size(&local_5c);
      if (iVar3 == 0) {
        local_5c = local_5c + 7 & 0xfffffff8;
        iVar3 = celt_encoder_get_size(param_3);
        memset(param_1,0,(long)(int)(iVar3 + local_5c + 0x3f60));
        iVar3 = silk_Get_Encoder_Size(&local_5c);
      }
      else {
        memset(param_1,0,0);
        iVar3 = silk_Get_Encoder_Size(&local_5c);
      }
      if (iVar3 != 0) {
        uVar5 = 0xffffffff;
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
        goto LAB_00e7d270;
      }
      param_1[0x1c] = param_3;
      param_1[0xddc] = param_3;
      local_5c = local_5c + 7 & 0xfffffff8;
      param_1[0x24] = param_2;
      iVar3 = local_5c + 0x3f60;
      param_1[0x2d] = 0;
      *param_1 = iVar3;
      param_1[1] = 0x3f60;
      iVar4 = silk_InitEncoder(param_1 + 0xfd8,0,param_1 + 2);
      if (iVar4 == 0) {
        lVar1 = (long)param_1 + (long)iVar3;
        param_1[2] = param_3;
        param_1[3] = param_3;
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 7) = 0x1400003e80;
        *(undefined8 *)(param_1 + 5) = 0x1f4000003e80;
        param_1[4] = param_1[0x24];
        param_1[0x13] = 0;
        *(undefined8 *)(param_1 + 0xb) = 9;
        *(undefined8 *)(param_1 + 9) = 25000;
        iVar3 = celt_encoder_init(lVar1,param_2,param_3,param_1[0x2d]);
        if (iVar3 == 0) {
          opus_custom_encoder_ctl(lVar1,0x2720,0);
          opus_custom_encoder_ctl(lVar1,0xfaa,param_1[0xb]);
          param_1[0x1b] = param_4;
          *(undefined8 *)(param_1 + 0x25) = 0x100000001;
          *(undefined8 *)(param_1 + 0x20) = 0x451fffffc18;
          *(undefined8 *)(param_1 + 0x1e) = 0xfffffc18fffffc18;
          *(undefined8 *)(param_1 + 0x22) = 0xfffffffffffffc18;
          param_1[0x2b] = param_1[0x24] / 100;
          param_1[0x27] = 5000;
          param_1[0x28] = param_3 * param_2 + 3000;
          *(undefined8 *)(param_1 + 0x29) = 0x18fffffc18;
          param_1[0x1d] = param_1[0x24] / 0xfa;
          *(undefined2 *)(param_1 + 0xddd) = 0x4000;
          *(undefined2 *)(param_1 + 0xddf) = 0x7fff;
          iVar3 = silk_lin2log(0x3c);
          param_1[0xdeb] = 1;
          param_1[0xde4] = 0x3e9;
          param_1[0xdde] = iVar3 << 8;
          param_1[0xde8] = 0x451;
          tonality_analysis_init(param_1 + 0x2f,param_1[0x24]);
          uVar5 = 0;
          param_1[0x30] = param_1[0x1b];
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return;
          }
          goto LAB_00e7d270;
        }
      }
      uVar5 = 0xfffffffd;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00e7d270:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


