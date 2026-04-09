// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_0_1_2
// Entry Point: 00bc2f6c
// Size: 1320 bytes
// Signature: undefined __cdecl processBlock_0_1_2(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_0_1_2(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_0_1_2(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  CustomCipher CVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  CustomCipher CVar30;
  CustomCipher CVar31;
  CustomCipher CVar32;
  CustomCipher CVar33;
  CustomCipher CVar34;
  CustomCipher CVar35;
  CustomCipher CVar36;
  ulong uVar37;
  ulong uVar38;
  
  CVar21 = param_1[0x2b1];
  uVar38 = (ulong)(byte)CVar21;
  bVar22 = param_2[7];
  bVar23 = param_2[6];
  bVar24 = param_2[5];
  bVar25 = param_2[4];
  bVar26 = param_2[3];
  bVar27 = param_2[2];
  bVar28 = param_2[1];
  bVar29 = *param_2;
  param_1[0x2b1] = param_1[uVar38 + 0x2b0];
  param_1[uVar38 + 0x2b0] = CVar21;
  CVar30 = param_1[0x2b2];
  uVar37 = uVar38 + (byte)CVar30 & 0xff;
  CVar31 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar21) + 0x2b0];
  param_1[0x2b2] = param_1[uVar37 + 0x2b0];
  param_1[uVar37 + 0x2b0] = CVar30;
  CVar21 = param_1[0x2b3];
  uVar37 = uVar38 + (byte)CVar30 + (ulong)(byte)CVar21;
  uVar38 = uVar37 & 0xff;
  CVar32 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar30) + 0x2b0];
  param_1[0x2b3] = param_1[uVar38 + 0x2b0];
  param_1[uVar38 + 0x2b0] = CVar21;
  CVar30 = param_1[0x2b4];
  uVar37 = (ulong)((int)uVar37 + (uint)(byte)CVar30) & 0xff;
  CVar33 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar21) + 0x2b0];
  uVar5 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0x55) * 4);
  param_1[0x2b4] = param_1[uVar37 + 0x2b0];
  param_1[uVar37 + 0x2b0] = CVar30;
  CVar21 = param_1[0x2b1];
  uVar38 = (ulong)(byte)CVar21;
  iVar6 = *(int *)(s_wL_I8 + ((ulong)bVar22 & 0x55) * 4);
  iVar7 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0x55) * 4);
  iVar8 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0xaa) * 2);
  CVar34 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar30) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar38 + 0x2b0];
  param_1[uVar38 + 0x2b0] = CVar21;
  CVar30 = param_1[0x2b2];
  uVar9 = *(uint *)(s_wL_I8 + ((ulong)bVar26 & 0x55) * 4);
  iVar10 = *(int *)(s_wL_I8 + ((ulong)bVar27 & 0x55) * 4);
  uVar37 = uVar38 + (byte)CVar30 & 0xff;
  uVar11 = *(uint *)(s_wL_I8 + ((ulong)bVar29 & 0x55) * 4);
  CVar35 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar21) + 0x2b0];
  uVar12 = *(uint *)(s_wL_I8 + ((ulong)bVar28 & 0x55) * 4);
  iVar13 = *(int *)(s_wL_I8 + ((ulong)bVar22 & 0xaa) * 2);
  param_1[0x2b2] = param_1[uVar37 + 0x2b0];
  uVar14 = *(uint *)(s_wL_I8 + ((ulong)bVar26 & 0xaa) * 2);
  param_1[uVar37 + 0x2b0] = CVar30;
  iVar15 = *(int *)(s_wL_I8 + ((ulong)bVar25 & 0xaa) * 2);
  CVar21 = param_1[0x2b3];
  iVar16 = *(int *)(s_wL_I8 + ((ulong)bVar27 & 0xaa) * 2);
  uVar37 = uVar38 + (byte)CVar30 + (ulong)(byte)CVar21;
  uVar17 = *(uint *)(s_wL_I8 + ((ulong)bVar28 & 0xaa) * 2);
  uVar38 = uVar37 & 0xff;
  iVar18 = *(int *)(s_wL_I8 + ((ulong)bVar25 & 0x55) * 4);
  uVar19 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0xaa) * 2);
  CVar36 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar30) + 0x2b0];
  uVar20 = *(uint *)(s_wL_I8 + ((ulong)bVar29 & 0xaa) * 2);
  param_1[0x2b3] = param_1[uVar38 + 0x2b0];
  param_1[uVar38 + 0x2b0] = CVar21;
  CVar30 = param_1[0x2b4];
  uVar37 = (ulong)((int)uVar37 + (uint)(byte)CVar30) & 0xff;
  uVar1 = *(uint *)(param_1 + 0x224);
  CVar21 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar21) + 0x2b0];
  param_1[0x2b4] = param_1[uVar37 + 0x2b0];
  param_1[uVar37 + 0x2b0] = CVar30;
  uVar2 = *(uint *)(param_1 + 0x220);
  uVar3 = *(uint *)(param_1 + 0x228);
  uVar4 = *(uint *)(param_1 + 0x22c);
  uVar14 = ((uint)(byte)CVar21 << 0x10 |
            (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar30) & 0xff) +
                                0x2b0] << 0x18 | (uint)(byte)CVar36 << 8 | (uint)(byte)CVar35) ^
           (uVar20 | (iVar16 << 1 |
                      (iVar15 << 1 | (iVar8 << 1 | iVar13 << 2 | uVar19) << 2 | uVar14) << 2 |
                     uVar17) << 1);
  uVar17 = uVar14 >> 0xf | uVar14 << 0x11;
  uVar1 = ((uint)(byte)CVar33 << 0x10 | (uint)(byte)CVar34 << 0x18 | (uint)(byte)CVar32 << 8 |
          (uint)(byte)CVar31) ^
          (uVar11 | (iVar10 << 1 |
                     (iVar18 << 1 | (iVar7 << 1 | iVar6 << 2 | uVar5) << 2 | uVar9) << 2 | uVar12)
                    << 1) ^
          (*(uint *)(&DAT_0211e998 + (ulong)((uVar2 >> 0x10 ^ uVar17 >> 8) & 0x3f) * 4) |
           (&s_wPS)[(uVar2 >> 0x18 ^ uVar17 >> 0xc) & 0x3f] |
           *(uint *)(&DAT_0211ea98 + (ulong)((uVar2 >> 8 ^ uVar17 >> 4) & 0x3f) * 4) |
          *(uint *)(&DAT_0211eb98 + (ulong)((uVar2 ^ uVar17) & 0x3f) * 4)) ^
          (*(uint *)(&DAT_0211ed98 + (ulong)((uVar1 >> 0x10 ^ uVar14 >> 7) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ec98 + (ulong)((uVar1 >> 0x18 ^ uVar14 >> 0xb) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ee98 + (ulong)((uVar1 >> 8 ^ uVar14 >> 3) & 0x3f) * 4) |
          *(uint *)(&DAT_0211ef98 + (ulong)((uVar1 ^ uVar17 >> 0x10) & 0x3f) * 4));
  uVar2 = uVar1 >> 0xf | uVar1 << 0x11;
  uVar14 = (*(uint *)(&DAT_0211e998 + (ulong)((uVar2 >> 8 ^ uVar3 >> 0x10) & 0x3f) * 4) |
            (&s_wPS)[(uVar2 >> 0xc ^ uVar3 >> 0x18) & 0x3f] |
            *(uint *)(&DAT_0211ea98 + (ulong)((uVar2 >> 4 ^ uVar3 >> 8) & 0x3f) * 4) |
           *(uint *)(&DAT_0211eb98 + (ulong)((uVar2 ^ uVar3) & 0x3f) * 4)) ^ uVar14 ^
           (*(uint *)(&DAT_0211ed98 + (ulong)((uVar4 >> 0x10 ^ uVar1 >> 7) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ec98 + (ulong)((uVar4 >> 0x18 ^ uVar1 >> 0xb) & 0x3f) * 4) |
            *(uint *)(&DAT_0211ee98 + (ulong)((uVar4 >> 8 ^ uVar1 >> 3) & 0x3f) * 4) |
           *(uint *)(&DAT_0211ef98 + (ulong)((uVar4 ^ uVar2 >> 0x10) & 0x3f) * 4));
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar14 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x18 & 0xf) * 4) << 6;
  uVar14 = *(uint *)(s_wO_L4 + (ulong)(uVar14 >> 4 & 0xf) * 4) |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) << 1 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 3 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0xc & 0xf) * 4) << 2 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 5 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x14 & 0xf) * 4) << 4 |
           *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 7 |
           *(int *)(s_wO_L4 + (ulong)(uVar14 >> 0x1c) * 4) << 6;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  param_2[3] = (uchar)uVar2;
  param_2[2] = (uchar)(uVar2 >> 8);
  *(uint *)(param_2 + 4) = uVar14 >> 0x10 | uVar14 << 0x10;
  param_2[1] = (uchar)(uVar2 >> 0x10);
  *param_2 = (uchar)(uVar2 >> 0x18);
  return;
}


