// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBlock_1_1_0
// Entry Point: 00bc15e0
// Size: 940 bytes
// Signature: undefined __cdecl processBlock_1_1_0(CustomCipher * param_1, uchar * param_2)


/* CustomCipher::processBlock_1_1_0(CustomCipher&, unsigned char*) */

void CustomCipher::processBlock_1_1_0(CustomCipher *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  CustomCipher CVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  CustomCipher CVar26;
  CustomCipher CVar27;
  CustomCipher CVar28;
  CustomCipher CVar29;
  CustomCipher CVar30;
  CustomCipher CVar31;
  CustomCipher CVar32;
  ulong uVar33;
  ulong uVar34;
  
  CVar17 = param_1[0x2b1];
  uVar34 = (ulong)(byte)CVar17;
  bVar18 = param_2[7];
  bVar19 = param_2[6];
  bVar20 = param_2[5];
  bVar21 = param_2[4];
  bVar22 = param_2[3];
  bVar23 = param_2[2];
  bVar24 = param_2[1];
  bVar25 = *param_2;
  param_1[0x2b1] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar17;
  CVar26 = param_1[0x2b2];
  uVar33 = uVar34 + (byte)CVar26 & 0xff;
  CVar27 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar17) + 0x2b0];
  param_1[0x2b2] = param_1[uVar33 + 0x2b0];
  param_1[uVar33 + 0x2b0] = CVar26;
  CVar17 = param_1[0x2b3];
  uVar33 = uVar34 + (byte)CVar26 + (ulong)(byte)CVar17;
  uVar34 = uVar33 & 0xff;
  CVar28 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar26) + 0x2b0];
  param_1[0x2b3] = param_1[uVar34 + 0x2b0];
  param_1[uVar34 + 0x2b0] = CVar17;
  CVar26 = param_1[0x2b4];
  uVar33 = (ulong)((int)uVar33 + (uint)(byte)CVar26) & 0xff;
  CVar29 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar17) + 0x2b0];
  param_1[0x2b4] = param_1[uVar33 + 0x2b0];
  param_1[uVar33 + 0x2b0] = CVar26;
  CVar17 = param_1[0x2b1];
  uVar33 = (ulong)(byte)CVar17;
  CVar30 = param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar26) & 0xff) + 0x2b0];
  param_1[0x2b1] = param_1[uVar33 + 0x2b0];
  iVar1 = *(int *)(s_wL_I8 + ((ulong)bVar18 & 0xaa) * 2);
  param_1[uVar33 + 0x2b0] = CVar17;
  CVar26 = param_1[0x2b2];
  uVar34 = uVar33 + (byte)CVar26 & 0xff;
  iVar2 = *(int *)(s_wL_I8 + ((ulong)bVar19 & 0x55) * 4);
  CVar31 = param_1[(ulong)(byte)((char)param_1[0x2b1] + (char)CVar17) + 0x2b0];
  iVar3 = *(int *)(s_wL_I8 + ((ulong)bVar19 & 0xaa) * 2);
  param_1[0x2b2] = param_1[uVar34 + 0x2b0];
  iVar4 = *(int *)(s_wL_I8 + ((ulong)bVar18 & 0x55) * 4);
  param_1[uVar34 + 0x2b0] = CVar26;
  uVar5 = *(uint *)(s_wL_I8 + ((ulong)bVar20 & 0x55) * 4);
  CVar17 = param_1[0x2b3];
  iVar6 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0x55) * 4);
  uVar33 = uVar33 + (byte)CVar26 + (ulong)(byte)CVar17;
  uVar7 = *(uint *)(s_wL_I8 + ((ulong)bVar20 & 0xaa) * 2);
  uVar34 = uVar33 & 0xff;
  uVar8 = *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0x55) * 4);
  iVar9 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0x55) * 4);
  CVar32 = param_1[(ulong)(byte)((char)param_1[0x2b2] + (char)CVar26) + 0x2b0];
  uVar10 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0x55) * 4);
  uVar11 = *(uint *)(s_wL_I8 + ((ulong)bVar25 & 0x55) * 4);
  param_1[0x2b3] = param_1[uVar34 + 0x2b0];
  iVar12 = *(int *)(s_wL_I8 + ((ulong)bVar21 & 0xaa) * 2);
  param_1[uVar34 + 0x2b0] = CVar17;
  uVar13 = *(uint *)(s_wL_I8 + ((ulong)bVar22 & 0xaa) * 2);
  iVar14 = *(int *)(s_wL_I8 + ((ulong)bVar23 & 0xaa) * 2);
  uVar15 = *(uint *)(s_wL_I8 + ((ulong)bVar24 & 0xaa) * 2);
  uVar16 = *(uint *)(s_wL_I8 + ((ulong)bVar25 & 0xaa) * 2);
  CVar26 = param_1[0x2b4];
  uVar33 = (ulong)((int)uVar33 + (uint)(byte)CVar26) & 0xff;
  CVar17 = param_1[(ulong)(byte)((char)param_1[0x2b3] + (char)CVar17) + 0x2b0];
  param_1[0x2b4] = param_1[uVar33 + 0x2b0];
  param_1[uVar33 + 0x2b0] = CVar26;
  uVar7 = ((uint)(byte)CVar29 << 0x10 | (uint)(byte)CVar30 << 0x18 | (uint)(byte)CVar28 << 8 |
          (uint)(byte)CVar27) ^
          (uVar16 | (iVar14 << 1 |
                     (iVar12 << 1 | (iVar3 << 1 | iVar1 << 2 | uVar7) << 2 | uVar13) << 2 | uVar15)
                    << 1);
  uVar5 = ((uint)(byte)CVar17 << 0x10 |
           (uint)(byte)param_1[((ulong)((uint)(byte)param_1[0x2b4] + (uint)(byte)CVar26) & 0xff) +
                               0x2b0] << 0x18 | (uint)(byte)CVar32 << 8 | (uint)(byte)CVar31) ^
          (uVar11 | (iVar9 << 1 | (iVar6 << 1 | (iVar2 << 1 | iVar4 << 2 | uVar5) << 2 | uVar8) << 2
                    | uVar10) << 1);
  uVar8 = *(uint *)(s_wO_L4 + (ulong)(uVar7 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar5 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 8 & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 8 & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 0x10 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 0x10 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 0x18 & 0xf) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 0x18 & 0xf) * 4) << 6;
  uVar7 = *(uint *)(s_wO_L4 + (ulong)(uVar7 >> 4 & 0xf) * 4) |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 4 & 0xf) * 4) << 1 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 0xc & 0xf) * 4) << 3 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 0xc & 0xf) * 4) << 2 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 0x14 & 0xf) * 4) << 5 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 0x14 & 0xf) * 4) << 4 |
          *(int *)(s_wO_L4 + (ulong)(uVar5 >> 0x1c) * 4) << 7 |
          *(int *)(s_wO_L4 + (ulong)(uVar7 >> 0x1c) * 4) << 6;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  param_2[3] = (uchar)uVar8;
  param_2[2] = (uchar)(uVar8 >> 8);
  *(uint *)(param_2 + 4) = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[1] = (uchar)(uVar8 >> 0x10);
  *param_2 = (uchar)(uVar8 >> 0x18);
  return;
}


