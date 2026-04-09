// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decoder_ctl
// Entry Point: 00e5f448
// Size: 988 bytes
// Signature: undefined opus_decoder_ctl(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x00e5f7a0) */
/* WARNING: Removing unreachable block (ram,0x00e5f708) */
/* WARNING: Removing unreachable block (ram,0x00e5f6ec) */
/* WARNING: Removing unreachable block (ram,0x00e5f69c) */
/* WARNING: Removing unreachable block (ram,0x00e5f758) */
/* WARNING: Removing unreachable block (ram,0x00e5f724) */
/* WARNING: Removing unreachable block (ram,0x00e5f680) */
/* WARNING: Removing unreachable block (ram,0x00e5f6d0) */
/* WARNING: Removing unreachable block (ram,0x00e5f780) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x00e5f6a8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 opus_decoder_ctl(int *param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *local_88;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar6 = param_1[2];
  uVar2 = 0xfffffffb;
  lVar5 = (long)param_1 + (long)*param_1;
  switch(param_2) {
  case 0xfa9:
    if (local_88 != (int *)0x0) {
      iVar6 = param_1[0xd];
LAB_00e5f73c:
      uVar2 = 0;
      *local_88 = iVar6;
      lVar5 = *(long *)(lVar1 + 0x28);
      goto joined_r0x00e5f750;
    }
    break;
  default:
switchD_00e5f4dc_caseD_faa:
    lVar5 = *(long *)(lVar1 + 0x28);
    goto joined_r0x00e5f750;
  case 0xfbc:
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    opus_custom_decoder_ctl(lVar5,0xfbc);
    silk_InitDecoder((long)param_1 + (long)iVar6);
    uVar2 = 0;
    param_1[0xc] = param_1[2];
    param_1[0x10] = param_1[3] / 400;
    lVar5 = *(long *)(lVar1 + 0x28);
    goto joined_r0x00e5f750;
  case 0xfbd:
    if (local_88 != (int *)0x0) {
      iVar6 = param_1[3];
      goto LAB_00e5f73c;
    }
    break;
  case 0xfbf:
    if (local_88 != (int *)0x0) {
      iVar6 = param_1[0x13];
      goto LAB_00e5f73c;
    }
    break;
  case 0xfc1:
    if (local_88 != (int *)0x0) {
      if (param_1[0xf] != 0x3ea) {
        uVar2 = 0;
        *local_88 = param_1[9];
        lVar5 = *(long *)(lVar1 + 0x28);
        goto joined_r0x00e5f750;
      }
      uVar3 = 0xfc1;
LAB_00e5f798:
      uVar2 = opus_custom_decoder_ctl(lVar5,uVar3);
      goto switchD_00e5f4dc_caseD_faa;
    }
    break;
  case 0xfc2:
    if ((uint)local_88 == (int)(short)local_88) {
      uVar2 = 0;
      param_1[10] = (uint)local_88;
      lVar5 = *(long *)(lVar1 + 0x28);
      goto joined_r0x00e5f750;
    }
    break;
  case 0xfc7:
    if (local_88 != (int *)0x0) {
      iVar6 = param_1[0x12];
      goto LAB_00e5f73c;
    }
    break;
  case 0xfcd:
    if (local_88 != (int *)0x0) {
      iVar6 = param_1[10];
      goto LAB_00e5f73c;
    }
    break;
  case 0xfce:
    if ((uint)local_88 < 2) {
      uVar2 = opus_custom_decoder_ctl(lVar5,0xfce);
      goto switchD_00e5f4dc_caseD_faa;
    }
    break;
  case 0xfcf:
    if (local_88 != (int *)0x0) {
      uVar3 = 0xfcf;
      goto LAB_00e5f798;
    }
  }
  uVar2 = 0xffffffff;
  lVar5 = *(long *)(lVar1 + 0x28);
joined_r0x00e5f750:
  if (lVar5 == lVar4) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


