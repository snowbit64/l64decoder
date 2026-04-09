// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_0_0_2
// Entry Point: 00bc2854
// Size: 908 bytes
// Signature: undefined __cdecl processBlock_0_0_2(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_0_0_2(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_0_0_2(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(s_wL_I8 + ((ulong)*param_2 & 0xaa) * 2) |
          (*(int *)(s_wL_I8 + ((ulong)param_2[2] & 0xaa) * 2) << 1 |
           (*(int *)(s_wL_I8 + ((ulong)param_2[4] & 0xaa) * 2) << 1 |
            (*(int *)(s_wL_I8 + ((ulong)param_2[6] & 0xaa) * 2) << 1 |
             *(int *)(s_wL_I8 + ((ulong)param_2[7] & 0xaa) * 2) << 2 |
            *(uint *)(s_wL_I8 + ((ulong)param_2[5] & 0xaa) * 2)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)param_2[3] & 0xaa) * 2)) << 2 |
          *(uint *)(s_wL_I8 + ((ulong)param_2[1] & 0xaa) * 2)) << 1;
  uVar5 = uVar4 >> 0xf | uVar4 << 0x11;
  uVar1 = *(uint *)(param_1 + 0x220);
  uVar2 = *(uint *)(param_1 + 0x224);
  uVar3 = *(uint *)(param_1 + 0x228);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar5 >> 8 ^ uVar1 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar5 >> 0xc ^ uVar1 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar5 >> 4 ^ uVar1 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar5 ^ uVar1) & 0x3f) * 4)) ^
          (*(uint *)(s_wL_I8 + ((ulong)*param_2 & 0x55) * 4) |
          (*(int *)(s_wL_I8 + ((ulong)param_2[2] & 0x55) * 4) << 1 |
           (*(int *)(s_wL_I8 + ((ulong)param_2[4] & 0x55) * 4) << 1 |
            (*(int *)(s_wL_I8 + ((ulong)param_2[6] & 0x55) * 4) << 1 |
             *(int *)(s_wL_I8 + ((ulong)param_2[7] & 0x55) * 4) << 2 |
            *(uint *)(s_wL_I8 + ((ulong)param_2[5] & 0x55) * 4)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)param_2[3] & 0x55) * 4)) << 2 |
          *(uint *)(s_wL_I8 + ((ulong)param_2[1] & 0x55) * 4)) << 1) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar4 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar4 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar4 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar5 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x22c);
  uVar5 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar2 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar5 >> 8 ^ uVar3 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar5 >> 0xc ^ uVar3 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar5 >> 4 ^ uVar3 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar5 ^ uVar3) & 0x3f) * 4)) ^ uVar4 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar5 >> 0x10) & 0x3f) * 4));
  uVar3 = *(uint *)(s_wO_L4 + (ulong)(uVar2 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 0x1c) * 4) << 6;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar1 = *(uint *)(s_wO_L4 + (ulong)(uVar2 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar2 >> 0x18 & 0xf) * 4) << 6;
  *(uint *)(param_2 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[3] = (uchar)uVar1;
  param_2[2] = (uchar)(uVar1 >> 8);
  param_2[1] = (uchar)(uVar1 >> 0x10);
  *param_2 = (uchar)(uVar1 >> 0x18);
  return;
}


