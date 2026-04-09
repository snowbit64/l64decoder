// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_0_1_14
// Entry Point: 00bdb620
// Size: 3280 bytes
// Signature: undefined __cdecl processBlock_0_1_14(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_0_1_14(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_0_1_14(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  CustomCipher CVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  CustomCipher CVar29;
  CustomCipher CVar30;
  CustomCipher CVar31;
  CustomCipher CVar32;
  CustomCipher CVar33;
  CustomCipher CVar34;
  CustomCipher CVar35;
  ulong uVar36;
  ulong uVar37;
  
  CVar20 = param_1[0x2b1];
  uVar37 = (ulong)(byte)CVar20;
  bVar21 = param_2[7];
  bVar22 = param_2[6];
  bVar23 = param_2[5];
  bVar24 = param_2[4];
  bVar25 = param_2[3];
  bVar26 = param_2[2];
  bVar27 = param_2[1];
  bVar28 = *param_2;
  param_1[0x2b1] = param_1[uVar37 + 0x2b0];
  param_1[uVar37 + 0x2b0] = CVar20;
  CVar29 = param_1[0x2b2];
  uVar36 = uVar37 + (byte)CVar29 & 0xff;
  CVar30 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar20) + 0x2b0];
  param_1[0x2b2] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar29;
  CVar20 = param_1[0x2b3];
  uVar36 = uVar37 + (byte)CVar29 + (ulong)(byte)CVar20;
  uVar37 = uVar36 & 0xff;
  CVar31 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar29) + 0x2b0];
  param_1[0x2b3] = param_1[uVar37 + 0x2b0];
  param_1[uVar37 + 0x2b0] = CVar20;
  CVar29 = param_1[0x2b4];
  uVar36 = (ulong)((int)uVar36 + (uint)(byte)CVar29) & 0xff;
  CVar32 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar20) + 0x2b0];
  param_1[0x2b4] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar29;
  CVar20 = param_1[0x2b1];
  uVar36 = (ulong)(byte)CVar20;
  CVar33 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar29) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar20;
  CVar29 = param_1[0x2b2];
  uVar4 = *(uint *)(s_wL_I8 + ((ulong)bVar25 & 0x55) * 4);
  iVar5 = *(int *)(s_wL_I8 + ((ulong)bVar26 & 0x55) * 4);
  uVar37 = uVar36 + (byte)CVar29 & 0xff;
  uVar6 = *(uint *)(s_wL_I8 + ((ulong)bVar23 & 0x55) * 4);
  iVar7 = *(int *)(s_wL_I8 + ((ulong)bVar24 & 0x55) * 4);
  CVar34 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar20) + 0x2b0];
  iVar8 = *(int *)(s_wL_I8 + ((ulong)bVar22 & 0x55) * 4);
  iVar9 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0x55) * 4);
  param_1[0x2b2] = param_1[uVar37 + 0x2b0];
  uVar10 = *(uint *)(s_wL_I8 + ((ulong)bVar27 & 0x55) * 4);
  param_1[uVar37 + 0x2b0] = CVar29;
  CVar20 = param_1[0x2b3];
  uVar11 = *(uint *)(s_wL_I8 + ((ulong)bVar28 & 0x55) * 4);
  uVar36 = uVar36 + (byte)CVar29 + (ulong)(byte)CVar20;
  iVar12 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0xaa) * 2);
  uVar37 = uVar36 & 0xff;
  iVar13 = *(int *)(s_wL_I8 + ((ulong)bVar22 & 0xaa) * 2);
  uVar14 = *(uint *)(s_wL_I8 + ((ulong)bVar23 & 0xaa) * 2);
  iVar15 = *(int *)(s_wL_I8 + ((ulong)bVar24 & 0xaa) * 2);
  CVar35 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar29) + 0x2b0];
  iVar16 = *(int *)(s_wL_I8 + ((ulong)bVar26 & 0xaa) * 2);
  param_1[0x2b3] = param_1[uVar37 + 0x2b0];
  uVar17 = *(uint *)(s_wL_I8 + ((ulong)bVar25 & 0xaa) * 2);
  param_1[uVar37 + 0x2b0] = CVar20;
  uVar18 = *(uint *)(s_wL_I8 + ((ulong)bVar27 & 0xaa) * 2);
  CVar29 = param_1[0x2b4];
  uVar19 = *(uint *)(s_wL_I8 + ((ulong)bVar28 & 0xaa) * 2);
  uVar36 = (ulong)((int)uVar36 + (uint)(byte)CVar29) & 0xff;
  CVar20 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar20) + 0x2b0];
  uVar1 = *(uint *)(param_1 + 0x220);
  param_1[0x2b4] = param_1[uVar36 + 0x2b0];
  param_1[uVar36 + 0x2b0] = CVar29;
  uVar2 = *(uint *)(param_1 + 0x224);
  uVar3 = *(uint *)(param_1 + 0x22c);
  uVar14 = ((uint)(byte)CVar20 << 0x10 |
            (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar29) & 0xff) +
                                0x2b0] << 0x18 | (uint)(byte)CVar35 << 8 | (uint)(byte)CVar34) ^
           (uVar19 | (iVar16 << 1 |
                      (iVar15 << 1 | (iVar13 << 1 | iVar12 << 2 | uVar14) << 2 | uVar17) << 2 |
                     uVar18) << 1);
  uVar17 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar1 = ((uint)(byte)CVar32 << 0x10 | (uint)(byte)CVar33 << 0x18 | (uint)(byte)CVar31 << 8 |
          (uint)(byte)CVar30) ^
          (uVar11 | (iVar5 << 1 | (iVar7 << 1 | (iVar8 << 1 | iVar9 << 2 | uVar6) << 2 | uVar4) << 2
                    | uVar10) << 1) ^
          (*(uint *)(&DAT_0211e998 + (ulong)((uVar1 >> 0x10 ^ uVar17 >> 8) & 0x3f) * 4) |
           (&s_wPS)[(uVar1 >> 0x18 ^ uVar17 >> 0xc) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar1 >> 8 ^ uVar17 >> 4) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar1 ^ uVar17) & 0x3f) * 4)) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar17 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x228);
  uVar10 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar4 = *(uint *)(param_1 + 0x234);
  uVar6 = *(uint *)(param_1 + 0x230);
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar10 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar10 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar10 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar10 ^ uVar2) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar10 >> 0x10) & 0x3f) * 4));
  uVar10 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar2 = *(uint *)(param_1 + 0x23c);
  uVar3 = *(uint *)(param_1 + 0x238);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar10 >> 8 ^ uVar6 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar10 >> 0xc ^ uVar6 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar10 >> 4 ^ uVar6 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar10 ^ uVar6) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar10 >> 0x10) & 0x3f) * 4));
  uVar6 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar4 = *(uint *)(param_1 + 0x244);
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar3 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar6 >> 0xc ^ uVar3 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar3 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar3) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar6 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x24c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x248);
  uVar6 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar4 = *(uint *)(param_1 + 0x254);
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x250);
  uVar6 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x25c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 600);
  uVar6 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar4 = *(uint *)(param_1 + 0x264);
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x260);
  uVar6 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x26c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x268);
  uVar6 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar4 = *(uint *)(param_1 + 0x274);
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar6 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar6 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar6 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar6 ^ uVar2) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar6 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x270);
  uVar10 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x27c);
  uVar6 = *(uint *)(param_1 + 0x278);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar10 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar10 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar10 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar10 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar10 >> 0x10) & 0x3f) * 4));
  uVar2 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar2 >> 8 ^ uVar6 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar2 >> 0xc ^ uVar6 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar2 >> 4 ^ uVar6 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar2 ^ uVar6) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar2 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x284);
  uVar3 = *(uint *)(param_1 + 0x280);
  uVar4 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar4 >> 8 ^ uVar3 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar4 >> 0xc ^ uVar3 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar4 >> 4 ^ uVar3 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar4 ^ uVar3) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar4 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x28c);
  uVar3 = *(uint *)(param_1 + 0x288);
  uVar4 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar4 >> 8 ^ uVar3 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar4 >> 0xc ^ uVar3 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar4 >> 4 ^ uVar3 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar4 ^ uVar3) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar4 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar14 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x1c) * 4) << 6;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar14 = *(uint *)(s_wO_L4 + (ulong)(uVar14 & 0xf) * 4) |
           *(int *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) << 1 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 3 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 8 & 0xf) * 4) << 2 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 5 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x10 & 0xf) * 4) << 4 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 7 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x18 & 0xf) * 4) << 6;
  *(uint *)(param_2 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = (uchar)uVar14;
  param_2[2] = (uchar)(uVar14 >> 8);
  param_2[1] = (uchar)(uVar14 >> 0x10);
  *param_2 = (uchar)(uVar14 >> 0x18);
  return;
}


