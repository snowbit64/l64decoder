// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_1_1_10
// Entry Point: 00bd1538
// Size: 2576 bytes
// Signature: undefined __cdecl processBlock_1_1_10(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_1_1_10(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_1_1_10(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  CustomCipher CVar8;
  CustomCipher CVar9;
  CustomCipher CVar10;
  CustomCipher CVar11;
  CustomCipher CVar12;
  CustomCipher CVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar14 = *(uint *)(s_wL_I8 + ((ulong)*param_2 & 0xaa) * 2) |
           (*(int *)(s_wL_I8 + ((ulong)param_2[2] & 0xaa) * 2) << 1 |
            (*(int *)(s_wL_I8 + ((ulong)param_2[4] & 0xaa) * 2) << 1 |
             (*(int *)(s_wL_I8 + ((ulong)param_2[6] & 0xaa) * 2) << 1 |
              *(int *)(s_wL_I8 + ((ulong)param_2[7] & 0xaa) * 2) << 2 |
             *(uint *)(s_wL_I8 + ((ulong)param_2[5] & 0xaa) * 2)) << 2 |
            *(uint *)(s_wL_I8 + ((ulong)param_2[3] & 0xaa) * 2)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)param_2[1] & 0xaa) * 2)) << 1;
  uVar15 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar1 = *(uint *)(param_1 + 0x268);
  uVar2 = *(uint *)(param_1 + 0x26c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar15 >> 8 ^ uVar1 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar15 >> 0xc ^ uVar1 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar15 >> 4 ^ uVar1 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar15 ^ uVar1) & 0x3f) * 4)) ^
          (*(uint *)(s_wL_I8 + ((ulong)*param_2 & 0x55) * 4) |
          (*(int *)(s_wL_I8 + ((ulong)param_2[2] & 0x55) * 4) << 1 |
           (*(int *)(s_wL_I8 + ((ulong)param_2[4] & 0x55) * 4) << 1 |
            (*(int *)(s_wL_I8 + ((ulong)param_2[6] & 0x55) * 4) << 1 |
             *(int *)(s_wL_I8 + ((ulong)param_2[7] & 0x55) * 4) << 2 |
            *(uint *)(s_wL_I8 + ((ulong)param_2[5] & 0x55) * 4)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)param_2[3] & 0x55) * 4)) << 2 |
          *(uint *)(s_wL_I8 + ((ulong)param_2[1] & 0x55) * 4)) << 1) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar15 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x260);
  uVar15 = *(uint *)(param_1 + 0x264);
  uVar16 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x25c);
  uVar4 = *(uint *)(param_1 + 600);
  uVar2 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar2) & 0x3f) * 4)) ^ uVar14 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar15 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar15 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar15 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar15 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar2 >> 0xf | uVar2 << 0x11;
  uVar15 = *(uint *)(param_1 + 0x254);
  uVar14 = *(uint *)(param_1 + 0x250);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar4 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar4 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar4 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar4) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar2 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar2 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar2 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x24c);
  uVar4 = *(uint *)(param_1 + 0x248);
  uVar2 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar14 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar14 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar14 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar14) & 0x3f) * 4)) ^ uVar2 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar15 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar15 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar15 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar15 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar2 >> 0xf | uVar2 << 0x11;
  uVar15 = *(uint *)(param_1 + 0x244);
  uVar14 = *(uint *)(param_1 + 0x240);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar4 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar4 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar4 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar4) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar2 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar2 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar2 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x23c);
  uVar4 = *(uint *)(param_1 + 0x238);
  uVar2 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar14 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar14 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar14 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar14) & 0x3f) * 4)) ^ uVar2 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar15 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar15 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar15 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar15 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar2 >> 0xf | uVar2 << 0x11;
  uVar15 = *(uint *)(param_1 + 0x234);
  uVar14 = *(uint *)(param_1 + 0x230);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar4 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar4 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar4 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar4) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar2 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar2 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar2 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x22c);
  uVar4 = *(uint *)(param_1 + 0x228);
  uVar2 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar14 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar16 >> 0xc ^ uVar14 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar14 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar14) & 0x3f) * 4)) ^ uVar2 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar15 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar15 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar15 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar15 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar15 = uVar2 >> 0xf | uVar2 << 0x11;
  uVar14 = *(uint *)(param_1 + 0x224);
  uVar15 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar15 >> 8 ^ uVar4 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar15 >> 0xc ^ uVar4 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar15 >> 4 ^ uVar4 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar15 ^ uVar4) & 0x3f) * 4)) ^ uVar1 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar2 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar2 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar2 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar15 >> 0x10) & 0x3f) * 4));
  uVar1 = *(uint *)(param_1 + 0x220);
  uVar17 = uVar15 >> 0xf | uVar15 << 0x11;
  uVar3 = (&s_wPS)[(uVar17 >> 0xc ^ uVar1 >> 0x18) & 0x3f];
  uVar4 = *(uint *)(&DAT_0211ea98 + (ulong)((uVar17 >> 4 ^ uVar1 >> 8) & 0x3f) * 4);
  uVar16 = *(uint *)(&DAT_0211e998 + (ulong)((uVar17 >> 8 ^ uVar1 >> 0x10) & 0x3f) * 4);
  uVar1 = *(uint *)(&DAT_0211eb98 + (ulong)((uVar17 ^ uVar1) & 0x3f) * 4);
  CVar8 = param_1[0x2b1];
  uVar18 = (ulong)(byte)CVar8;
  uVar5 = *(uint *)(&DAT_0211ec98 + (ulong)((uVar14 >> 0x18 ^ uVar15 >> 0xb) & 0x3f) * 4);
  uVar6 = *(uint *)(&DAT_0211ee98 + (ulong)((uVar14 >> 8 ^ uVar15 >> 3) & 0x3f) * 4);
  uVar7 = *(uint *)(&DAT_0211ed98 + (ulong)((uVar14 >> 0x10 ^ uVar15 >> 7) & 0x3f) * 4);
  uVar14 = *(uint *)(&DAT_0211ef98 + (ulong)((uVar14 ^ uVar17 >> 0x10) & 0x3f) * 4);
  param_1[0x2b1] = param_1[uVar18 + 0x2b0];
  param_1[uVar18 + 0x2b0] = CVar8;
  CVar9 = param_1[0x2b2];
  uVar19 = uVar18 + (byte)CVar9 & 0xff;
  CVar10 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar8) + 0x2b0];
  param_1[0x2b2] = param_1[uVar19 + 0x2b0];
  param_1[uVar19 + 0x2b0] = CVar9;
  CVar8 = param_1[0x2b3];
  uVar18 = uVar18 + (byte)CVar9 + (ulong)(byte)CVar8;
  uVar19 = uVar18 & 0xff;
  CVar11 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar9) + 0x2b0];
  param_1[0x2b3] = param_1[uVar19 + 0x2b0];
  param_1[uVar19 + 0x2b0] = CVar8;
  CVar9 = param_1[0x2b4];
  uVar18 = (ulong)((int)uVar18 + (uint)(byte)CVar9) & 0xff;
  CVar12 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar8) + 0x2b0];
  param_1[0x2b4] = param_1[uVar18 + 0x2b0];
  param_1[uVar18 + 0x2b0] = CVar9;
  CVar8 = param_1[0x2b1];
  uVar18 = (ulong)(byte)CVar8;
  CVar13 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar9) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar18 + 0x2b0];
  param_1[uVar18 + 0x2b0] = CVar8;
  CVar9 = param_1[0x2b2];
  uVar19 = uVar18 + (byte)CVar9 & 0xff;
  uVar1 = (uVar16 | uVar3 | uVar4 | uVar1) ^ uVar2 ^ (uVar7 | uVar5 | uVar6 | uVar14) ^
          ((uint)(byte)CVar12 << 0x10 | (uint)(byte)CVar13 << 0x18 | (uint)(byte)CVar11 << 8 |
          (uint)(byte)CVar10);
  CVar10 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar8) + 0x2b0];
  param_1[0x2b2] = param_1[uVar19 + 0x2b0];
  param_1[uVar19 + 0x2b0] = CVar9;
  CVar8 = param_1[0x2b3];
  uVar18 = uVar18 + (byte)CVar9 + (ulong)(byte)CVar8;
  uVar19 = uVar18 & 0xff;
  CVar11 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar9) + 0x2b0];
  param_1[0x2b3] = param_1[uVar19 + 0x2b0];
  param_1[uVar19 + 0x2b0] = CVar8;
  CVar9 = param_1[0x2b4];
  uVar18 = (ulong)((int)uVar18 + (uint)(byte)CVar9) & 0xff;
  CVar8 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar8) + 0x2b0];
  param_1[0x2b4] = param_1[uVar18 + 0x2b0];
  param_1[uVar18 + 0x2b0] = CVar9;
  uVar15 = ((uint)(byte)CVar8 << 0x10 |
            (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar9) & 0xff) +
                                0x2b0] << 0x18 | (uint)(byte)CVar11 << 8 | (uint)(byte)CVar10) ^
           uVar15;
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar15 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 6;
  uVar1 = *(uint *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar15 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 6;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  param_2[3] = (uchar)uVar2;
  param_2[2] = (uchar)(uVar2 >> 8);
  param_2[1] = (uchar)(uVar2 >> 0x10);
  *(uint *)(param_2 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_2 = (uchar)(uVar2 >> 0x18);
  return;
}


