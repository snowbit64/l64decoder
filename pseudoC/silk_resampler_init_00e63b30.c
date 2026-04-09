// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_init
// Entry Point: 00e63b30
// Size: 880 bytes
// Signature: undefined silk_resampler_init(void)


undefined8 silk_resampler_init(undefined8 *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_4 == 0) {
    if (((param_2 != 8000) && (param_2 != 16000)) && (param_2 != 12000)) {
      return 0xffffffff;
    }
    if ((int)param_3 < 16000) {
      if ((param_3 != 8000) && (param_3 != 12000)) {
        return 0xffffffff;
      }
    }
    else if (((param_3 != 16000) && (param_3 != 48000)) && (param_3 != 24000)) {
      return 0xffffffff;
    }
    pcVar4 = &UNK_00563e3a +
             (ulong)((param_2 >> 0xc) - 1) * 5 +
             (long)(int)((param_3 >> 0xc) - (uint)(16000 < param_3) >> (24000 < param_3));
  }
  else {
    if ((int)param_2 < 16000) {
      if ((param_2 != 8000) && (param_2 != 12000)) {
        return 0xffffffff;
      }
    }
    else if (((param_2 != 16000) && (param_2 != 48000)) && (param_2 != 24000)) {
      return 0xffffffff;
    }
    if (((param_3 != 8000) && (param_3 != 16000)) && (param_3 != 12000)) {
      return 0xffffffff;
    }
    uVar3 = (param_2 >> 0xc) - (uint)(16000 < param_2) >> (24000 < param_2);
    pcVar4 = &UNK_00563e29 + (long)(int)uVar3 + (long)(int)uVar3 * 2 + (ulong)((param_3 >> 0xc) - 1)
    ;
  }
  uVar3 = (param_2 >> 3 & 0x1fff) / 0x7d;
  *(int *)((long)param_1 + 0x124) = (int)*pcVar4;
  *(uint *)((long)param_1 + 0x11c) = uVar3;
  *(uint *)(param_1 + 0x24) = (param_3 >> 3 & 0x1fff) / 0x7d;
  *(uint *)((long)param_1 + 0x10c) = uVar3 * 10;
  if (param_2 <= param_3 && param_3 != param_2) {
    if (param_3 == param_2 * 2) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x21) = 1;
    }
    else {
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x21) = 2;
    }
  }
  else if (param_2 <= param_3) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x21) = 3;
    if (param_3 << 2 == param_2 * 3) {
      uVar8 = 0x300000012;
      puVar5 = silk_Resampler_3_4_COEFS;
    }
    else if (param_3 * 3 == param_2 * 2) {
      uVar8 = 0x200000012;
      puVar5 = silk_Resampler_2_3_COEFS;
    }
    else if (param_2 == param_3 * 2) {
      uVar8 = 0x100000018;
      puVar5 = silk_Resampler_1_2_COEFS;
    }
    else if (param_3 * 3 == param_2) {
      uVar8 = 0x100000024;
      puVar5 = silk_Resampler_1_3_COEFS;
    }
    else if (param_3 << 2 == param_2) {
      uVar8 = 0x100000024;
      puVar5 = silk_Resampler_1_4_COEFS;
    }
    else {
      if (param_3 * 6 != param_2) {
        return 0xffffffff;
      }
      uVar8 = 0x100000024;
      puVar5 = silk_Resampler_1_6_COEFS;
    }
    uVar3 = 0;
    *(undefined8 *)((long)param_1 + 0x114) = uVar8;
    param_1[0x25] = puVar5;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = (int)(param_2 << (ulong)(uVar3 | 0xe)) / (int)param_3;
  }
  iVar6 = iVar1 * 4 + -1;
  lVar7 = (long)(iVar1 * 4) * (ulong)param_3;
  do {
    iVar6 = iVar6 + 1;
    uVar2 = (ulong)lVar7 >> 0x10;
    lVar7 = lVar7 + (ulong)param_3;
  } while ((int)uVar2 < (int)(param_2 << (ulong)uVar3));
  *(int *)(param_1 + 0x22) = iVar6;
  return 0;
}


