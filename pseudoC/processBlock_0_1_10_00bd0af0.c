// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_0_1_10
// Entry Point: 00bd0af0
// Size: 2632 bytes
// Signature: undefined __cdecl processBlock_0_1_10(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_0_1_10(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_0_1_10(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  CustomCipher CVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  CustomCipher CVar28;
  CustomCipher CVar29;
  CustomCipher CVar30;
  CustomCipher CVar31;
  CustomCipher CVar32;
  CustomCipher CVar33;
  CustomCipher CVar34;
  ulong uVar35;
  ulong uVar36;
  
  CVar19 = param_1[0x2b1];
  uVar36 = (ulong)(byte)CVar19;
  bVar20 = param_2[7];
  bVar21 = param_2[6];
  bVar22 = param_2[5];
  bVar23 = param_2[4];
  bVar24 = param_2[3];
  bVar25 = param_2[2];
  bVar26 = param_2[1];
  bVar27 = *param_2;
  param_1[0x2b1] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar19;
  CVar28 = param_1[0x2b2];
  uVar35 = uVar36 + (byte)CVar28 & 0xff;
  CVar29 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar19) + 0x2b0];
  param_1[0x2b2] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar28;
  CVar19 = param_1[0x2b3];
  uVar35 = uVar36 + (byte)CVar28 + (ulong)(byte)CVar19;
  uVar36 = uVar35 & 0xff;
  CVar30 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar28) + 0x2b0];
  param_1[0x2b3] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar19;
  CVar28 = param_1[0x2b4];
  uVar35 = (ulong)((int)uVar35 + (uint)(byte)CVar28) & 0xff;
  CVar31 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar19) + 0x2b0];
  param_1[0x2b4] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar28;
  CVar19 = param_1[0x2b1];
  uVar35 = (ulong)(byte)CVar19;
  iVar3 = *(int *)(s_wL_I8 + ((ulong)bVar20 & 0x55) * 4);
  CVar32 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar28) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar19;
  CVar28 = param_1[0x2b2];
  iVar4 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0x55) * 4);
  uVar5 = *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0x55) * 4);
  uVar36 = uVar35 + (byte)CVar28 & 0xff;
  iVar6 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0x55) * 4);
  CVar33 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar19) + 0x2b0];
  uVar7 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0x55) * 4);
  iVar8 = *(int *)(s_wL_I8 + ((ulong)bVar25 & 0x55) * 4);
  param_1[0x2b2] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar28;
  uVar9 = *(uint *)(s_wL_I8 + ((ulong)bVar27 & 0x55) * 4);
  CVar19 = param_1[0x2b3];
  iVar10 = *(int *)(s_wL_I8 + ((ulong)bVar20 & 0xaa) * 2);
  uVar35 = uVar35 + (byte)CVar28 + (ulong)(byte)CVar19;
  uVar11 = *(uint *)(s_wL_I8 + ((ulong)bVar26 & 0x55) * 4);
  uVar36 = uVar35 & 0xff;
  iVar12 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0xaa) * 2);
  uVar13 = *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0xaa) * 2);
  iVar14 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0xaa) * 2);
  CVar34 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar28) + 0x2b0];
  param_1[0x2b3] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar19;
  iVar15 = *(int *)(s_wL_I8 + ((ulong)bVar25 & 0xaa) * 2);
  CVar28 = param_1[0x2b4];
  uVar16 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0xaa) * 2);
  uVar17 = *(uint *)(s_wL_I8 + ((ulong)bVar26 & 0xaa) * 2);
  uVar35 = (ulong)((int)uVar35 + (uint)(byte)CVar28) & 0xff;
  uVar18 = *(uint *)(s_wL_I8 + ((ulong)bVar27 & 0xaa) * 2);
  CVar19 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar19) + 0x2b0];
  param_1[0x2b4] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar28;
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar2 = *(uint *)(param_1 + 0x220);
  uVar13 = ((uint)(byte)CVar19 << 0x10 |
            (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar28) & 0xff) +
                                0x2b0] << 0x18 | (uint)(byte)CVar34 << 8 | (uint)(byte)CVar33) ^
           (uVar18 | (iVar15 << 1 |
                      (iVar14 << 1 | (iVar12 << 1 | iVar10 << 2 | uVar13) << 2 | uVar16) << 2 |
                     uVar17) << 1);
  uVar17 = uVar13 >> 0xf | uVar13 << 0x11;
  uVar16 = *(uint *)(param_1 + 0x228);
  uVar1 = ((uint)(byte)CVar31 << 0x10 | (uint)(byte)CVar32 << 0x18 | (uint)(byte)CVar30 << 8 |
          (uint)(byte)CVar29) ^
          (uVar9 | (iVar8 << 1 | (iVar6 << 1 | (iVar4 << 1 | iVar3 << 2 | uVar5) << 2 | uVar7) << 2
                   | uVar11) << 1) ^
          (*(uint *)(&DAT_0211e998 + (ulong)((uVar2 >> 0x10 ^ uVar17 >> 8) & 0x3f) * 4) |
           (&s_wPS)[(uVar2 >> 0x18 ^ uVar17 >> 0xc) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar2 >> 8 ^ uVar17 >> 4) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar2 ^ uVar17) & 0x3f) * 4)) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar1 >> 0x10 ^ uVar13 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar1 >> 0x18 ^ uVar13 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar1 >> 8 ^ uVar13 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar1 ^ uVar17 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x22c);
  uVar5 = *(uint *)(param_1 + 0x230);
  uVar7 = *(uint *)(param_1 + 0x234);
  uVar11 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar9 = *(uint *)(param_1 + 0x238);
  uVar13 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar16 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar11 >> 0xc ^ uVar16 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar16 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar16) & 0x3f) * 4)) ^ uVar13 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x23c);
  uVar11 = uVar13 >> 0xf | uVar13 << 0x11;
  uVar16 = *(uint *)(param_1 + 0x240);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar5 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar11 >> 0xc ^ uVar5 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar5 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar5) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar7 >> 0x10 ^ uVar13 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar7 >> 0x18 ^ uVar13 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar7 >> 8 ^ uVar13 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar7 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar5 = *(uint *)(param_1 + 0x244);
  uVar11 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar7 = *(uint *)(param_1 + 0x248);
  uVar13 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar9 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar11 >> 0xc ^ uVar9 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar9 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar9) & 0x3f) * 4)) ^ uVar13 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x24c);
  uVar11 = uVar13 >> 0xf | uVar13 << 0x11;
  uVar9 = *(uint *)(param_1 + 0x250);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar16 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar11 >> 0xc ^ uVar16 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar16 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar16) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar5 >> 0x10 ^ uVar13 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar5 >> 0x18 ^ uVar13 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar5 >> 8 ^ uVar13 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar5 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar16 = *(uint *)(param_1 + 0x254);
  uVar11 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar5 = *(uint *)(param_1 + 600);
  uVar13 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar7 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar11 >> 0xc ^ uVar7 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar7 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar7) & 0x3f) * 4)) ^ uVar13 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x25c);
  uVar11 = uVar13 >> 0xf | uVar13 << 0x11;
  uVar7 = *(uint *)(param_1 + 0x260);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar9 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar11 >> 0xc ^ uVar9 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar9 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar9) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar16 >> 0x10 ^ uVar13 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar16 >> 0x18 ^ uVar13 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar16 >> 8 ^ uVar13 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar16 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar16 = *(uint *)(param_1 + 0x264);
  uVar11 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar9 = *(uint *)(param_1 + 0x268);
  uVar13 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar11 >> 8 ^ uVar5 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar11 >> 0xc ^ uVar5 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar11 >> 4 ^ uVar5 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar11 ^ uVar5) & 0x3f) * 4)) ^ uVar13 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar11 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x26c);
  uVar5 = uVar13 >> 0xf | uVar13 << 0x11;
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar5 >> 8 ^ uVar7 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar5 >> 0xc ^ uVar7 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar5 >> 4 ^ uVar7 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar5 ^ uVar7) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar16 >> 0x10 ^ uVar13 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar16 >> 0x18 ^ uVar13 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar16 >> 8 ^ uVar13 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar16 ^ uVar5 >> 0x10) & 0x3f) * 4));
  uVar16 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar13 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar16 >> 8 ^ uVar9 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar16 >> 0xc ^ uVar9 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar16 >> 4 ^ uVar9 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar16 ^ uVar9) & 0x3f) * 4)) ^ uVar13 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar16 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar13 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar13 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar13 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar13 >> 0x1c) * 4) << 6;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar13 = *(uint *)(s_wO_L4 + (ulong)(uVar13 & 0xf) * 4) |
           *(int *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) << 1 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 3 |
           *(int *)(s_wO_L4 + (ulong)(uVar13 >> 8 & 0xf) * 4) << 2 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 5 |
           *(int *)(s_wO_L4 + (ulong)(uVar13 >> 0x10 & 0xf) * 4) << 4 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 7 |
           *(int *)(s_wO_L4 + (ulong)(uVar13 >> 0x18 & 0xf) * 4) << 6;
  *(uint *)(param_2 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = (uchar)uVar13;
  param_2[2] = (uchar)(uVar13 >> 8);
  param_2[1] = (uchar)(uVar13 >> 0x10);
  *param_2 = (uchar)(uVar13 >> 0x18);
  return;
}


