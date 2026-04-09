// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encoder_ctl
// Entry Point: 00e81b08
// Size: 3792 bytes
// Signature: undefined opus_encoder_ctl(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x00e82844) */
/* WARNING: Removing unreachable block (ram,0x00e828c8) */
/* WARNING: Removing unreachable block (ram,0x00e828f8) */
/* WARNING: Removing unreachable block (ram,0x00e82864) */
/* WARNING: Removing unreachable block (ram,0x00e827b4) */
/* WARNING: Removing unreachable block (ram,0x00e8269c) */
/* WARNING: Removing unreachable block (ram,0x00e8276c) */
/* WARNING: Removing unreachable block (ram,0x00e822b4) */
/* WARNING: Removing unreachable block (ram,0x00e8233c) */
/* WARNING: Removing unreachable block (ram,0x00e82798) */
/* WARNING: Removing unreachable block (ram,0x00e82740) */
/* WARNING: Removing unreachable block (ram,0x00e82724) */
/* WARNING: Removing unreachable block (ram,0x00e826fc) */
/* WARNING: Removing unreachable block (ram,0x00e826e0) */
/* WARNING: Removing unreachable block (ram,0x00e826c4) */
/* WARNING: Removing unreachable block (ram,0x00e825ac) */
/* WARNING: Removing unreachable block (ram,0x00e82590) */
/* WARNING: Removing unreachable block (ram,0x00e8266c) */
/* WARNING: Removing unreachable block (ram,0x00e82298) */
/* WARNING: Removing unreachable block (ram,0x00e82314) */
/* WARNING: Removing unreachable block (ram,0x00e82650) */
/* WARNING: Removing unreachable block (ram,0x00e8262c) */
/* WARNING: Removing unreachable block (ram,0x00e82414) */
/* WARNING: Removing unreachable block (ram,0x00e8256c) */
/* WARNING: Removing unreachable block (ram,0x00e8227c) */
/* WARNING: Removing unreachable block (ram,0x00e82544) */
/* WARNING: Removing unreachable block (ram,0x00e82610) */
/* WARNING: Removing unreachable block (ram,0x00e82520) */
/* WARNING: Removing unreachable block (ram,0x00e825f4) */
/* WARNING: Removing unreachable block (ram,0x00e822ec) */
/* WARNING: Removing unreachable block (ram,0x00e822d0) */
/* WARNING: Removing unreachable block (ram,0x00e823dc) */
/* WARNING: Removing unreachable block (ram,0x00e82504) */
/* WARNING: Removing unreachable block (ram,0x00e823ac) */
/* WARNING: Removing unreachable block (ram,0x00e824e8) */
/* WARNING: Removing unreachable block (ram,0x00e824b8) */
/* WARNING: Removing unreachable block (ram,0x00e82484) */
/* WARNING: Removing unreachable block (ram,0x00e8244c) */
/* WARNING: Removing unreachable block (ram,0x00e82430) */
/* WARNING: Removing unreachable block (ram,0x00e82360) */
/* WARNING: Removing unreachable block (ram,0x00e828a4) */
/* WARNING: Removing unreachable block (ram,0x00e82880) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff00 : 0x00e822f8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void opus_encoder_ctl(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint *local_100;
  undefined auStack_d0 [104];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar5 = (long)param_1 + (long)*param_1;
  uVar3 = 0xfffffffb;
  if (0x271e < param_2) {
    if (param_2 < 0x2afa) {
      if (param_2 == 0x271f) {
        if (local_100 == (uint *)0x0) goto LAB_00e82978;
        uVar3 = 0x271f;
      }
      else {
        if (param_2 == 0x2728) {
          param_1[0x2c] = (uint)local_100;
          uVar3 = opus_custom_encoder_ctl(lVar5,0x2728);
          goto switchD_00e81bac_caseD_fb2;
        }
        if (param_2 != 0x272a) goto switchD_00e81bac_caseD_fb2;
        uVar3 = 0x272a;
        *(uint **)(param_1 + 0xdec) = local_100;
      }
      uVar3 = opus_custom_encoder_ctl(lVar5,uVar3);
      goto switchD_00e81bac_caseD_fb2;
    }
    if (param_2 == 0x2afa) {
      if (((uint)local_100 - 1000 < 3) || ((uint)local_100 == 0xfffffc18)) {
        uVar3 = 0;
        param_1[0x22] = (uint)local_100;
        goto switchD_00e81bac_caseD_fb2;
      }
    }
    else if (param_2 == 0x2b0a) {
      if (0xffffff99 < (uint)local_100 - 0x65) {
        uVar3 = 0;
        param_1[0x23] = (uint)local_100;
        goto switchD_00e81bac_caseD_fb2;
      }
    }
    else {
      if (param_2 != 0x2b0b) goto switchD_00e81bac_caseD_fb2;
      if (local_100 != (uint *)0x0) {
        uVar7 = param_1[0x23];
        goto LAB_00e82964;
      }
    }
    goto LAB_00e82978;
  }
  switch(param_2) {
  case 4000:
    uVar3 = 0xffffffff;
    if ((3 < (uint)local_100 - 0x800) || ((uint)local_100 - 0x800 == 2))
    goto switchD_00e81bac_caseD_fb2;
    if ((param_1[0xdeb] != 0) || (param_1[0x1b] == (uint)local_100)) {
      uVar3 = 0;
      param_1[0x1b] = (uint)local_100;
      param_1[0x30] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfa1:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x1b];
LAB_00e82964:
      uVar3 = 0;
      *local_100 = uVar7;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfa2:
    uVar7 = (uint)local_100;
    if (((uint)local_100 != 0xfffffc18) && ((uint)local_100 != 0xffffffff)) {
      if ((int)(uint)local_100 < 1) break;
      if ((uint)local_100 < 0x1f5) {
        uVar7 = 500;
      }
      else {
        uVar7 = param_1[0x1c] * 300000;
        if ((int)(uint)local_100 <= param_1[0x1c] * 300000) {
          uVar7 = (uint)local_100;
        }
      }
    }
    uVar3 = 0;
    param_1[0x29] = uVar7;
    goto switchD_00e81bac_caseD_fb2;
  case 0xfa3:
    if (local_100 != (uint *)0x0) {
      uVar7 = FUN_00e80840(param_1,param_1[0xde7],0x4fc);
      uVar3 = 0;
      *local_100 = uVar7;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfa4:
    if (0xfffffffa < (uint)local_100 - 0x452) {
      param_1[0x21] = (uint)local_100;
      if ((uint)local_100 == 0x44e) goto LAB_00e824e0;
LAB_00e82404:
      if ((uint)local_100 == 0x44d) {
        iVar2 = 8000;
      }
      else {
        iVar2 = 16000;
      }
LAB_00e82924:
      uVar3 = 0;
      param_1[5] = iVar2;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfa5:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x21];
      goto LAB_00e82964;
    }
    break;
  case 0xfa6:
    if ((uint)local_100 < 2) {
      uVar3 = 0;
      param_1[0x25] = (uint)local_100;
      param_1[0xf] = 1 - (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfa7:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x25];
      goto LAB_00e82964;
    }
    break;
  case 0xfa8:
    if (((uint)local_100 - 0x44d < 5) || ((uint)local_100 == 0xfffffc18)) {
      param_1[0x20] = (uint)local_100;
      if ((uint)local_100 != 0x44e) goto LAB_00e82404;
LAB_00e824e0:
      iVar2 = 12000;
      goto LAB_00e82924;
    }
    break;
  case 0xfa9:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0xde8];
      goto LAB_00e82964;
    }
    break;
  case 0xfaa:
    if ((uint)local_100 < 0xb) {
      param_1[0xb] = (uint)local_100;
      uVar3 = 0xfaa;
LAB_00e8278c:
      opus_custom_encoder_ctl(lVar5,uVar3);
      uVar3 = 0;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfab:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0xb];
      goto LAB_00e82964;
    }
    break;
  case 0xfac:
    if ((uint)local_100 < 2) {
      uVar3 = 0;
      param_1[0xc] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfad:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0xc];
      goto LAB_00e82964;
    }
    break;
  case 0xfae:
    if ((uint)local_100 < 0x65) {
      param_1[10] = (uint)local_100;
      uVar3 = 0xfae;
      goto LAB_00e8278c;
    }
    break;
  case 0xfaf:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[10];
      goto LAB_00e82964;
    }
    break;
  case 0xfb0:
    if ((uint)local_100 < 2) {
      uVar3 = 0;
      param_1[0x2e] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfb1:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x2e];
      goto LAB_00e82964;
    }
    break;
  default:
    goto switchD_00e81bac_caseD_fb2;
  case 0xfb4:
    if ((uint)local_100 < 2) {
      uVar3 = 0;
      param_1[0x26] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfb5:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x26];
      goto LAB_00e82964;
    }
    break;
  case 0xfb6:
    if ((int)(uint)local_100 < 1) {
      if ((uint)local_100 == 0xfffffc18) goto LAB_00e82950;
    }
    else if ((int)(uint)local_100 <= param_1[0x1c]) {
LAB_00e82950:
      uVar3 = 0;
      param_1[0x1e] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfb7:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x1e];
      goto LAB_00e82964;
    }
    break;
  case 0xfb8:
    if (((uint)local_100 - 0xbb9 < 2) || ((uint)local_100 == 0xfffffc18)) {
      uVar3 = 0;
      param_1[0x1f] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfb9:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x1f];
      goto LAB_00e82964;
    }
    break;
  case 0xfbb:
    if (local_100 != (uint *)0x0) {
      iVar2 = param_1[0x24];
      *local_100 = iVar2 / 400;
      if (param_1[0x1b] == 0x803) {
LAB_00e825ec:
        uVar3 = 0;
        goto switchD_00e81bac_caseD_fb2;
      }
      uVar7 = param_1[0x1d] + iVar2 / 400;
      goto LAB_00e82964;
    }
    break;
  case 0xfbc:
    iVar2 = param_1[1];
    tonality_analysis_reset(param_1 + 0x2f);
    memset(param_1 + 0xddc,0,0x7f0);
    opus_custom_encoder_ctl(lVar5,0xfbc);
    silk_InitEncoder((long)param_1 + (long)iVar2,param_1[0x2d],auStack_d0);
    param_1[0xddc] = param_1[0x1c];
    *(undefined2 *)(param_1 + 0xddd) = 0x4000;
    *(undefined2 *)(param_1 + 0xddf) = 0x7fff;
    param_1[0xdeb] = 1;
    param_1[0xde4] = 0x3e9;
    param_1[0xde8] = 0x451;
    iVar2 = silk_lin2log(0x3c);
    uVar3 = 0;
    param_1[0xdde] = iVar2 << 8;
    goto switchD_00e81bac_caseD_fb2;
  case 0xfbd:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x24];
      goto LAB_00e82964;
    }
    break;
  case 0xfbf:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0xfd6];
      goto LAB_00e82964;
    }
    break;
  case 0xfc4:
    if (0xffffffee < (uint)local_100 - 0x19) {
      uVar3 = 0;
      param_1[0x2a] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfc5:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x2a];
      goto LAB_00e82964;
    }
    break;
  case 0xfc8:
    if ((uint)local_100 - 5000 < 10) {
      uVar3 = 0;
      param_1[0x27] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfc9:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x27];
      goto LAB_00e82964;
    }
    break;
  case 0xfca:
    if ((uint)local_100 < 2) {
      uVar3 = 0;
      param_1[0x13] = (uint)local_100;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfcb:
    if (local_100 != (uint *)0x0) {
      uVar7 = param_1[0x13];
      goto LAB_00e82964;
    }
    break;
  case 0xfce:
    if ((uint)local_100 < 2) {
      uVar3 = 0xfce;
      goto LAB_00e8278c;
    }
    break;
  case 0xfcf:
    if (local_100 != (uint *)0x0) {
      opus_custom_encoder_ctl(lVar5,0xfcf);
      uVar3 = 0;
      goto switchD_00e81bac_caseD_fb2;
    }
    break;
  case 0xfd1:
    if (local_100 != (uint *)0x0) {
      if ((param_1[0xe] != 0) && ((param_1[0xde5] & 0xfffffffeU) == 1000)) {
        iVar2 = param_1[1];
        *local_100 = 1;
        if (0 < param_1[3]) {
          lVar5 = 0;
          piVar6 = (int *)((long)param_1 + (long)iVar2 + 0x17d8);
          uVar7 = 1;
          do {
            if (uVar7 != 0) {
              uVar7 = (uint)(9 < *piVar6);
            }
            *local_100 = uVar7;
            uVar3 = 0;
            lVar5 = lVar5 + 1;
            piVar6 = piVar6 + 0x874;
          } while (lVar5 < param_1[3]);
          goto switchD_00e81bac_caseD_fb2;
        }
        goto LAB_00e825ec;
      }
      if (param_1[0x2e] == 0) {
        uVar3 = 0;
        *local_100 = 0;
        goto switchD_00e81bac_caseD_fb2;
      }
      uVar7 = (uint)(9 < param_1[0xfd3]);
      goto LAB_00e82964;
    }
  }
LAB_00e82978:
  uVar3 = 0xffffffff;
switchD_00e81bac_caseD_fb2:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


