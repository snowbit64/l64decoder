// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_master_decompress
// Entry Point: 00d73120
// Size: 1172 bytes
// Signature: undefined jinit_master_decompress(void)


/* WARNING: Type propagation algorithm not settling */

void jinit_master_decompress(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined uVar3;
  code **ppcVar4;
  undefined8 *puVar5;
  uint uVar6;
  code **ppcVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  
  ppcVar4 = (code **)(**(code **)param_1[1])(param_1,1,0x30);
  iVar8 = *(int *)(param_1 + 0x23);
  param_1[0x44] = (long)ppcVar4;
  *(undefined *)(ppcVar4 + 2) = 0;
  *ppcVar4 = FUN_00d735b4;
  ppcVar4[1] = FUN_00d73784;
  if (iVar8 != 8) {
    lVar9 = *param_1;
    *(int *)(lVar9 + 0x2c) = iVar8;
    ppcVar7 = (code **)*param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x10;
    (**ppcVar7)(param_1);
  }
  jpeg_calc_output_dimensions(param_1);
  puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x500);
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[0x19] = 0;
  puVar5[0x18] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x21] = 0;
  puVar5[0x20] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x25] = 0;
  puVar5[0x24] = 0;
  puVar5[0x27] = 0;
  puVar5[0x26] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x31] = 0;
  puVar5[0x30] = 0;
  puVar5[0x33] = 0;
  puVar5[0x32] = 0;
  puVar5[0x35] = 0;
  puVar5[0x34] = 0;
  puVar5[0x37] = 0;
  puVar5[0x36] = 0;
  puVar5[0x39] = 0;
  puVar5[0x38] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x3e] = 0;
  param_1[0x33] = (long)(puVar5 + 0x40);
  puVar5[0x41] = 0xf0e0d0c0b0a0908;
  puVar5[0x40] = 0x706050403020100;
  puVar5[0x43] = 0x1f1e1d1c1b1a1918;
  puVar5[0x42] = 0x1716151413121110;
  puVar5[0x45] = 0x2f2e2d2c2b2a2928;
  puVar5[0x44] = 0x2726252423222120;
  puVar5[0x47] = 0x3f3e3d3c3b3a3938;
  puVar5[0x46] = 0x3736353433323130;
  puVar5[0x49] = 0x4f4e4d4c4b4a4948;
  puVar5[0x48] = 0x4746454443424140;
  puVar5[0x4b] = 0x5f5e5d5c5b5a5958;
  puVar5[0x4a] = 0x5756555453525150;
  puVar5[0x4d] = 0x6f6e6d6c6b6a6968;
  puVar5[0x4c] = 0x6766656463626160;
  puVar5[0x4f] = 0x7f7e7d7c7b7a7978;
  puVar5[0x4e] = 0x7776757473727170;
  puVar5[0x51] = 0x8f8e8d8c8b8a8988;
  puVar5[0x50] = 0x8786858483828180;
  puVar5[0x53] = 0x9f9e9d9c9b9a9998;
  puVar5[0x52] = 0x9796959493929190;
  puVar5[0x55] = 0xafaeadacabaaa9a8;
  puVar5[0x54] = 0xa7a6a5a4a3a2a1a0;
  puVar5[0x57] = 0xbfbebdbcbbbab9b8;
  puVar5[0x56] = 0xb7b6b5b4b3b2b1b0;
  puVar5[0x59] = 0xcfcecdcccbcac9c8;
  puVar5[0x58] = 0xc7c6c5c4c3c2c1c0;
  puVar5[0x5b] = 0xdfdedddcdbdad9d8;
  puVar5[0x5a] = 0xd7d6d5d4d3d2d1d0;
  puVar5[0x5d] = 0xefeeedecebeae9e8;
  puVar5[0x5c] = 0xe7e6e5e4e3e2e1e0;
  puVar5[0x5f] = 0xfffefdfcfbfaf9f8;
  puVar5[0x5e] = 0xf7f6f5f4f3f2f1f0;
  puVar5[0x61] = 0xffffffffffffffff;
  puVar5[0x60] = 0xffffffffffffffff;
  puVar5[99] = 0xffffffffffffffff;
  puVar5[0x62] = 0xffffffffffffffff;
  puVar5[0x65] = 0xffffffffffffffff;
  puVar5[100] = 0xffffffffffffffff;
  puVar5[0x67] = 0xffffffffffffffff;
  puVar5[0x66] = 0xffffffffffffffff;
  puVar5[0x69] = 0xffffffffffffffff;
  puVar5[0x68] = 0xffffffffffffffff;
  puVar5[0x6b] = 0xffffffffffffffff;
  puVar5[0x6a] = 0xffffffffffffffff;
  puVar5[0x6d] = 0xffffffffffffffff;
  puVar5[0x6c] = 0xffffffffffffffff;
  puVar5[0x6f] = 0xffffffffffffffff;
  puVar5[0x6e] = 0xffffffffffffffff;
  puVar5[0x71] = 0xffffffffffffffff;
  puVar5[0x70] = 0xffffffffffffffff;
  puVar5[0x73] = 0xffffffffffffffff;
  puVar5[0x72] = 0xffffffffffffffff;
  puVar5[0x75] = 0xffffffffffffffff;
  puVar5[0x74] = 0xffffffffffffffff;
  puVar5[0x77] = 0xffffffffffffffff;
  puVar5[0x76] = 0xffffffffffffffff;
  puVar5[0x79] = 0xffffffffffffffff;
  puVar5[0x78] = 0xffffffffffffffff;
  puVar5[0x7b] = 0xffffffffffffffff;
  puVar5[0x7a] = 0xffffffffffffffff;
  puVar5[0x7d] = 0xffffffffffffffff;
  puVar5[0x7c] = 0xffffffffffffffff;
  puVar5[0x7f] = 0xffffffffffffffff;
  puVar5[0x7e] = 0xffffffffffffffff;
  puVar5[0x81] = 0xffffffffffffffff;
  puVar5[0x80] = 0xffffffffffffffff;
  puVar5[0x83] = 0xffffffffffffffff;
  puVar5[0x82] = 0xffffffffffffffff;
  puVar5[0x85] = 0xffffffffffffffff;
  puVar5[0x84] = 0xffffffffffffffff;
  puVar5[0x87] = 0xffffffffffffffff;
  puVar5[0x86] = 0xffffffffffffffff;
  puVar5[0x89] = 0xffffffffffffffff;
  puVar5[0x88] = 0xffffffffffffffff;
  puVar5[0x8b] = 0xffffffffffffffff;
  puVar5[0x8a] = 0xffffffffffffffff;
  puVar5[0x8d] = 0xffffffffffffffff;
  puVar5[0x8c] = 0xffffffffffffffff;
  puVar5[0x8f] = 0xffffffffffffffff;
  puVar5[0x8e] = 0xffffffffffffffff;
  puVar5[0x91] = 0xffffffffffffffff;
  puVar5[0x90] = 0xffffffffffffffff;
  puVar5[0x93] = 0xffffffffffffffff;
  puVar5[0x92] = 0xffffffffffffffff;
  puVar5[0x95] = 0xffffffffffffffff;
  puVar5[0x94] = 0xffffffffffffffff;
  puVar5[0x97] = 0xffffffffffffffff;
  puVar5[0x96] = 0xffffffffffffffff;
  puVar5[0x99] = 0xffffffffffffffff;
  puVar5[0x98] = 0xffffffffffffffff;
  puVar5[0x9b] = 0xffffffffffffffff;
  puVar5[0x9a] = 0xffffffffffffffff;
  puVar5[0x9d] = 0xffffffffffffffff;
  puVar5[0x9c] = 0xffffffffffffffff;
  puVar5[0x9f] = 0xffffffffffffffff;
  puVar5[0x9e] = 0xffffffffffffffff;
  if (((*(int *)(param_1 + 0xf) == 0) || (uVar6 = *(uint *)((long)param_1 + 0x74), uVar6 == 0)) ||
     (iVar8 = *(int *)((long)param_1 + 0x7c), iVar8 < 1)) {
    ppcVar7 = (code **)*param_1;
    *(undefined4 *)(ppcVar7 + 5) = 0x21;
    (**ppcVar7)(param_1);
    uVar6 = *(uint *)((long)param_1 + 0x74);
    iVar8 = *(int *)((long)param_1 + 0x7c);
  }
  if ((ulong)uVar6 * (long)iVar8 >> 0x20 != 0) {
    ppcVar7 = (code **)*param_1;
    *(undefined4 *)(ppcVar7 + 5) = 0x48;
    (**ppcVar7)(param_1);
  }
  *(undefined4 *)(ppcVar4 + 3) = 0;
  uVar3 = FUN_00d72f98(param_1);
  ppcVar4[4] = (code *)0x0;
  ppcVar4[5] = (code *)0x0;
  cVar2 = *(char *)((long)param_1 + 0x62);
  *(undefined *)((long)ppcVar4 + 0x1c) = uVar3;
  if (cVar2 == '\0') {
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)((long)param_1 + 0x72) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb) == '\0') {
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)((long)param_1 + 0x72) = 0;
    }
    if (*(char *)((long)param_1 + 0x59) != '\0') {
      ppcVar7 = (code **)*param_1;
      *(undefined4 *)(ppcVar7 + 5) = 0x30;
      (**ppcVar7)(param_1);
    }
    if (*(int *)((long)param_1 + 0x7c) == 3) {
      if (param_1[0x12] == 0) {
        if (*(char *)(param_1 + 0xd) == '\0') {
          *(undefined *)(param_1 + 0xe) = 1;
        }
        else {
          *(undefined *)((long)param_1 + 0x72) = 1;
        }
      }
      else {
        *(undefined *)((long)param_1 + 0x71) = 1;
      }
    }
    else {
      *(undefined *)((long)param_1 + 0x72) = 0;
      param_1[0x12] = 0;
      *(undefined2 *)(param_1 + 0xe) = 1;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
      jinit_1pass_quantizer(param_1);
      ppcVar4[4] = (code *)param_1[0x4e];
    }
    if ((*(char *)((long)param_1 + 0x72) != '\0') || (*(char *)((long)param_1 + 0x71) != '\0')) {
      jinit_2pass_quantizer(param_1);
      ppcVar4[5] = (code *)param_1[0x4e];
    }
  }
  if (*(char *)((long)param_1 + 0x59) == '\0') {
    if (*(char *)((long)ppcVar4 + 0x1c) == '\0') {
      jinit_color_deconverter(param_1);
      jinit_upsampler(param_1);
    }
    else {
      jinit_merged_upsampler(param_1);
    }
    jinit_d_post_controller(param_1,*(undefined *)((long)param_1 + 0x72));
    jinit_inverse_dct(param_1);
    cVar2 = *(char *)((long)param_1 + 0x12a);
  }
  else {
    jinit_inverse_dct(param_1);
    cVar2 = *(char *)((long)param_1 + 0x12a);
  }
  if (cVar2 == '\0') {
    jinit_huff_decoder(param_1);
    cVar2 = *(char *)(param_1[0x48] + 0x20);
  }
  else {
    jinit_arith_decoder(param_1);
    cVar2 = *(char *)(param_1[0x48] + 0x20);
  }
  if (cVar2 == '\0') {
    jinit_d_coef_controller(param_1,*(char *)(param_1 + 0xb) != '\0');
    cVar2 = *(char *)((long)param_1 + 0x59);
  }
  else {
    jinit_d_coef_controller(param_1,1);
    cVar2 = *(char *)((long)param_1 + 0x59);
  }
  if (cVar2 == '\0') {
    jinit_d_main_controller(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x48] + 0x10))(param_1);
  lVar9 = param_1[2];
  if (((lVar9 != 0) && (*(char *)(param_1 + 0xb) == '\0')) &&
     (*(char *)(param_1[0x48] + 0x20) != '\0')) {
    uVar6 = *(uint *)(param_1 + 0x32);
    iVar8 = *(int *)(param_1 + 7);
    if (*(char *)((long)param_1 + 0x129) != '\0') {
      iVar8 = *(int *)(param_1 + 7) * 3 + 2;
    }
    iVar1 = *(int *)(ppcVar4 + 3);
    uVar10 = 2;
    if (*(char *)((long)param_1 + 0x72) != '\0') {
      uVar10 = 3;
    }
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x1c) = uVar10;
    *(undefined8 *)(lVar9 + 8) = 0;
    *(ulong *)(lVar9 + 0x10) = (long)iVar8 * (ulong)uVar6;
    *(int *)(ppcVar4 + 3) = iVar1 + 1;
    return;
  }
  return;
}


