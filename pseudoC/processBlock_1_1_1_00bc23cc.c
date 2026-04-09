// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_1_1_1
// Entry Point: 00bc23cc
// Size: 1160 bytes
// Signature: undefined __cdecl processBlock_1_1_1(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_1_1_1(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_1_1_1(CustomCipher *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  CustomCipher CVar24;
  CustomCipher CVar25;
  CustomCipher CVar26;
  CustomCipher CVar27;
  CustomCipher CVar28;
  CustomCipher CVar29;
  CustomCipher CVar30;
  CustomCipher CVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  
  bVar16 = param_2[6];
  bVar17 = param_2[7];
  bVar18 = param_2[5];
  bVar19 = param_2[4];
  bVar20 = param_2[3];
  bVar21 = param_2[2];
  bVar22 = param_2[1];
  bVar23 = *param_2;
  uVar32 = *(uint *)(s_wL_I8 + ((ulong)bVar23 & 0xaa) * 2) |
           (*(int *)(s_wL_I8 + ((ulong)bVar21 & 0xaa) * 2) << 1 |
            (*(int *)(s_wL_I8 + ((ulong)bVar19 & 0xaa) * 2) << 1 |
             (*(int *)(s_wL_I8 + ((ulong)bVar16 & 0xaa) * 2) << 1 |
              *(int *)(s_wL_I8 + ((ulong)bVar17 & 0xaa) * 2) << 2 |
             *(uint *)(s_wL_I8 + ((ulong)bVar18 & 0xaa) * 2)) << 2 |
            *(uint *)(s_wL_I8 + ((ulong)bVar20 & 0xaa) * 2)) << 2 |
           *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0xaa) * 2)) << 1;
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar2 = *(uint *)(param_1 + 0x220);
  uVar33 = uVar32 >> 0xf | uVar32 << 0x11;
  uVar8 = (&s_wPS)[(uVar33 >> 0xc ^ uVar2 >> 0x18) & 0x3f];
  uVar3 = *(uint *)(&DAT_0211e998 + (ulong)((uVar33 >> 8 ^ uVar2 >> 0x10) & 0x3f) * 4);
  uVar4 = *(uint *)(&DAT_0211ea98 + (ulong)((uVar33 >> 4 ^ uVar2 >> 8) & 0x3f) * 4);
  CVar24 = param_1[0x2b1];
  uVar34 = (ulong)(byte)CVar24;
  uVar2 = *(uint *)(&DAT_0211eb98 + (ulong)((uVar33 ^ uVar2) & 0x3f) * 4);
  uVar5 = *(uint *)(&DAT_0211ec98 + (ulong)((uVar1 >> 0x18 ^ uVar32 >> 0xb) & 0x3f) * 4);
  uVar6 = *(uint *)(&DAT_0211ed98 + (ulong)((uVar1 >> 0x10 ^ uVar32 >> 7) & 0x3f) * 4);
  uVar7 = *(uint *)(&DAT_0211ee98 + (ulong)((uVar1 >> 8 ^ uVar32 >> 3) & 0x3f) * 4);
  uVar1 = *(uint *)(&DAT_0211ef98 + (ulong)((uVar1 ^ uVar33 >> 0x10) & 0x3f) * 4);
  param_1[0x2b1] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar24;
  CVar25 = param_1[0x2b2];
  uVar35 = uVar34 + (byte)CVar25 & 0xff;
  iVar9 = *(int *)(s_wL_I8 + ((ulong)bVar16 & 0x55) * 4);
  uVar33 = *(uint *)(s_wL_I8 + ((ulong)bVar18 & 0x55) * 4);
  CVar26 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar24) + 0x2b0];
  iVar10 = *(int *)(s_wL_I8 + ((ulong)bVar19 & 0x55) * 4);
  param_1[0x2b2] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar25;
  CVar24 = param_1[0x2b3];
  uVar34 = uVar34 + (byte)CVar25 + (ulong)(byte)CVar24;
  uVar35 = uVar34 & 0xff;
  CVar27 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar25) + 0x2b0];
  param_1[0x2b3] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar24;
  CVar25 = param_1[0x2b4];
  uVar34 = (ulong)((int)uVar34 + (uint)(byte)CVar25) & 0xff;
  CVar28 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar24) + 0x2b0];
  param_1[0x2b4] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar25;
  CVar24 = param_1[0x2b1];
  uVar34 = (ulong)(byte)CVar24;
  CVar29 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar25) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar24;
  CVar25 = param_1[0x2b2];
  uVar35 = uVar34 + (byte)CVar25 & 0xff;
  CVar30 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar24) + 0x2b0];
  param_1[0x2b2] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar25;
  CVar24 = param_1[0x2b3];
  iVar11 = *(int *)(s_wL_I8 + ((ulong)bVar17 & 0x55) * 4);
  uVar34 = uVar34 + (byte)CVar25 + (ulong)(byte)CVar24;
  uVar12 = *(uint *)(s_wL_I8 + ((ulong)bVar23 & 0x55) * 4);
  uVar35 = uVar34 & 0xff;
  uVar13 = *(uint *)(s_wL_I8 + ((ulong)bVar20 & 0x55) * 4);
  iVar14 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0x55) * 4);
  CVar31 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar25) + 0x2b0];
  param_1[0x2b3] = param_1[uVar35 + 0x2b0];
  param_1[uVar35 + 0x2b0] = CVar24;
  uVar15 = *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0x55) * 4);
  CVar25 = param_1[0x2b4];
  uVar34 = (ulong)((int)uVar34 + (uint)(byte)CVar25) & 0xff;
  CVar24 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar24) + 0x2b0];
  param_1[0x2b4] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar25;
  uVar1 = (uVar3 | uVar8 | uVar4 | uVar2) ^
          (uVar12 | (iVar14 << 1 |
                     (iVar10 << 1 | (iVar9 << 1 | iVar11 << 2 | uVar33) << 2 | uVar13) << 2 | uVar15
                    ) << 1) ^ (uVar6 | uVar5 | uVar7 | uVar1) ^
          ((uint)(byte)CVar28 << 0x10 | (uint)(byte)CVar29 << 0x18 | (uint)(byte)CVar27 << 8 |
          (uint)(byte)CVar26);
  uVar32 = ((uint)(byte)CVar24 << 0x10 |
            (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar25) & 0xff) +
                                0x2b0] << 0x18 | (uint)(byte)CVar31 << 8 | (uint)(byte)CVar30) ^
           uVar32;
  uVar2 = *(uint *)(s_wO_L4 + (ulong)(uVar1 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar32 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x18 & 0xf) * 4) << 6;
  uVar1 = *(uint *)(s_wO_L4 + (ulong)(uVar1 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar32 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar1 >> 0x1c) * 4) << 6;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  param_2[3] = (uchar)uVar2;
  *(uint *)(param_2 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = (uchar)(uVar2 >> 8);
  param_2[1] = (uchar)(uVar2 >> 0x10);
  *param_2 = (uchar)(uVar2 >> 0x18);
  return;
}


