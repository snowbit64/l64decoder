// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_0_1_9
// Entry Point: 00bce684
// Size: 2472 bytes
// Signature: undefined __cdecl processBlock_0_1_9(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_0_1_9(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_0_1_9(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  CustomCipher CVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  CustomCipher CVar19;
  CustomCipher CVar20;
  CustomCipher CVar21;
  CustomCipher CVar22;
  CustomCipher CVar23;
  CustomCipher CVar24;
  CustomCipher CVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  
  CVar10 = param_1[0x2b1];
  uVar28 = (ulong)(byte)CVar10;
  bVar11 = param_2[7];
  bVar12 = param_2[6];
  bVar13 = param_2[5];
  bVar14 = param_2[4];
  bVar15 = param_2[3];
  bVar16 = param_2[2];
  bVar17 = param_2[1];
  bVar18 = *param_2;
  param_1[0x2b1] = param_1[uVar28 + 0x2b0];
  param_1[uVar28 + 0x2b0] = CVar10;
  CVar19 = param_1[0x2b2];
  uVar29 = uVar28 + (byte)CVar19 & 0xff;
  CVar20 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar10) + 0x2b0];
  param_1[0x2b2] = param_1[uVar29 + 0x2b0];
  param_1[uVar29 + 0x2b0] = CVar19;
  CVar10 = param_1[0x2b3];
  uVar28 = uVar28 + (byte)CVar19 + (ulong)(byte)CVar10;
  uVar29 = uVar28 & 0xff;
  CVar21 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar19) + 0x2b0];
  param_1[0x2b3] = param_1[uVar29 + 0x2b0];
  param_1[uVar29 + 0x2b0] = CVar10;
  CVar19 = param_1[0x2b4];
  uVar28 = (ulong)((int)uVar28 + (uint)(byte)CVar19) & 0xff;
  CVar22 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar10) + 0x2b0];
  param_1[0x2b4] = param_1[uVar28 + 0x2b0];
  param_1[uVar28 + 0x2b0] = CVar19;
  CVar10 = param_1[0x2b1];
  uVar29 = (ulong)(byte)CVar10;
  CVar23 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar19) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar29 + 0x2b0];
  param_1[uVar29 + 0x2b0] = CVar10;
  CVar19 = param_1[0x2b2];
  uVar28 = uVar29 + (byte)CVar19 & 0xff;
  CVar24 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar10) + 0x2b0];
  param_1[0x2b2] = param_1[uVar28 + 0x2b0];
  param_1[uVar28 + 0x2b0] = CVar19;
  CVar10 = param_1[0x2b3];
  uVar28 = uVar29 + (byte)CVar19 + (ulong)(byte)CVar10;
  uVar29 = uVar28 & 0xff;
  CVar25 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar19) + 0x2b0];
  iVar4 = *(int *)(s_wL_I8 + ((ulong)bVar11 & 0x55) * 4);
  iVar5 = *(int *)(s_wL_I8 + ((ulong)bVar12 & 0x55) * 4);
  param_1[0x2b3] = param_1[uVar29 + 0x2b0];
  param_1[uVar29 + 0x2b0] = CVar10;
  CVar19 = param_1[0x2b4];
  iVar6 = *(int *)(s_wL_I8 + ((ulong)bVar12 & 0xaa) * 2);
  iVar7 = *(int *)(s_wL_I8 + ((ulong)bVar11 & 0xaa) * 2);
  uVar28 = (ulong)((int)uVar28 + (uint)(byte)CVar19) & 0xff;
  uVar8 = *(uint *)(s_wL_I8 + ((ulong)bVar13 & 0xaa) * 2);
  iVar9 = *(int *)(s_wL_I8 + ((ulong)bVar14 & 0xaa) * 2);
  CVar10 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar10) + 0x2b0];
  param_1[0x2b4] = param_1[uVar28 + 0x2b0];
  param_1[uVar28 + 0x2b0] = CVar19;
  uVar1 = *(uint *)(param_1 + 0x220);
  uVar8 = ((uint)(byte)CVar10 << 0x10 |
           (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar19) & 0xff) +
                               0x2b0] << 0x18 | (uint)(byte)CVar25 << 8 | (uint)(byte)CVar24) ^
          (*(uint *)(s_wL_I8 + ((ulong)bVar18 & 0xaa) * 2) |
          (*(int *)(s_wL_I8 + ((ulong)bVar16 & 0xaa) * 2) << 1 |
           (iVar9 << 1 | (iVar6 << 1 | iVar7 << 2 | uVar8) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)bVar15 & 0xaa) * 2)) << 2 |
          *(uint *)(s_wL_I8 + ((ulong)bVar17 & 0xaa) * 2)) << 1);
  uVar2 = *(uint *)(param_1 + 0x224);
  uVar26 = uVar8 >> 0xf | uVar8 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x22c);
  uVar1 = ((uint)(byte)CVar22 << 0x10 | (uint)(byte)CVar23 << 0x18 | (uint)(byte)CVar21 << 8 |
          (uint)(byte)CVar20) ^
          (*(uint *)(s_wL_I8 + ((ulong)bVar18 & 0x55) * 4) |
          (*(int *)(s_wL_I8 + ((ulong)bVar16 & 0x55) * 4) << 1 |
           (*(int *)(s_wL_I8 + ((ulong)bVar14 & 0x55) * 4) << 1 |
            (iVar5 << 1 | iVar4 << 2 | *(uint *)(s_wL_I8 + ((ulong)bVar13 & 0x55) * 4)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)bVar15 & 0x55) * 4)) << 2 |
          *(uint *)(s_wL_I8 + ((ulong)bVar17 & 0x55) * 4)) << 1) ^
          (*(uint *)(&DAT_0211e998 + (ulong)((uVar1 >> 0x10 ^ uVar26 >> 8) & 0x3f) * 4) |
           (&s_wPS)[(uVar1 >> 0x18 ^ uVar26 >> 0xc) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar1 >> 8 ^ uVar26 >> 4) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar1 ^ uVar26) & 0x3f) * 4)) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar2 >> 0x10 ^ uVar8 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar2 >> 0x18 ^ uVar8 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar2 >> 8 ^ uVar8 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar2 ^ uVar26 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x228);
  uVar27 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar26 = *(uint *)(param_1 + 0x234);
  uVar8 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar8 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x230);
  uVar27 = uVar8 >> 0xf | uVar8 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x23c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar26 >> 0x10 ^ uVar8 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar26 >> 0x18 ^ uVar8 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar26 >> 8 ^ uVar8 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar26 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x238);
  uVar27 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar26 = *(uint *)(param_1 + 0x244);
  uVar8 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar8 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x240);
  uVar27 = uVar8 >> 0xf | uVar8 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x24c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar26 >> 0x10 ^ uVar8 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar26 >> 0x18 ^ uVar8 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar26 >> 8 ^ uVar8 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar26 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x248);
  uVar27 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar26 = *(uint *)(param_1 + 0x254);
  uVar8 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar8 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x250);
  uVar27 = uVar8 >> 0xf | uVar8 << 0x11;
  uVar3 = *(uint *)(param_1 + 0x25c);
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar26 >> 0x10 ^ uVar8 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar26 >> 0x18 ^ uVar8 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar26 >> 8 ^ uVar8 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar26 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 600);
  uVar27 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar26 = *(uint *)(param_1 + 0x264);
  uVar8 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar27 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar27 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar27 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar27 ^ uVar2) & 0x3f) * 4)) ^ uVar8 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar3 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar3 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar3 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar3 ^ uVar27 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(param_1 + 0x260);
  uVar3 = uVar8 >> 0xf | uVar8 << 0x11;
  uVar1 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar3 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4) |
           (&s_wPS)[(uVar3 >> 0xc ^ uVar2 >> 0x18) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar3 >> 4 ^ uVar2 >> 8) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar3 ^ uVar2) & 0x3f) * 4)) ^ uVar1 ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar26 >> 0x10 ^ uVar8 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar26 >> 0x18 ^ uVar8 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar26 >> 8 ^ uVar8 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar26 ^ uVar3 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 6;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar8 = *(uint *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar8 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar8 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 6;
  *(uint *)(param_2 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = (uchar)uVar8;
  param_2[2] = (uchar)(uVar8 >> 8);
  param_2[1] = (uchar)(uVar8 >> 0x10);
  *param_2 = (uchar)(uVar8 >> 0x18);
  return;
}


