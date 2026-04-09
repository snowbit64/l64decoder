// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CustomCipher
// Entry Point: 00bc07d0
// Size: 1604 bytes
// Signature: undefined __thiscall CustomCipher(CustomCipher * this, ulonglong param_1, ulonglong param_2)


/* CustomCipher::CustomCipher(unsigned long long, unsigned long long) */

void __thiscall CustomCipher::CustomCipher(CustomCipher *this,ulonglong param_1,ulonglong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  
  if (s_tablesInit == '\0') {
    initTables();
    s_tablesInit = '\x01';
  }
  uVar20 = param_1 >> 4 & 0xf;
  uVar21 = param_1 >> 1 & 7;
  lVar24 = (param_1 >> 0xc & 0xf) * 4;
  lVar6 = (param_1 >> 9 & 7) * 4;
  lVar18 = 0;
  lVar12 = (param_1 >> 0x11 & 7) * 4;
  lVar7 = (param_1 >> 0x14 & 0xf) * 4;
  lVar10 = (param_1 >> 0x1c & 0xf) * 4;
  lVar13 = (param_1 >> 0x19 & 7) * 4;
  lVar16 = (param_1 >> 0x24 & 0xf) * 4;
  lVar17 = (param_1 >> 0x21 & 7) * 4;
  lVar25 = (param_1 >> 0x2c & 0xf) * 4;
  lVar8 = (param_1 >> 0x29 & 7) * 4;
  lVar14 = (param_1 >> 0x31 & 7) * 4;
  lVar9 = (param_1 >> 0x34 & 0xf) * 4;
  uVar11 = param_1 >> 0x3a & 0x3c;
  lVar15 = (param_1 >> 0x39 & 7) * 4;
  uVar23 = *(uint *)(&DAT_0211df40 + uVar11) |
           *(uint *)(&DAT_0211df00 + lVar9) |
           *(uint *)(&DAT_0211dec0 + lVar25) |
           *(uint *)(&DAT_0211de80 + lVar16) |
           *(uint *)(&DAT_0211de40 + lVar10) |
           *(uint *)(&DAT_0211de00 + lVar7) |
           *(uint *)(&DAT_0211ddc0 + lVar24) | (&s_wC_K4)[uVar20] | (&s_wC_K3)[uVar21] |
           *(uint *)(&DAT_0211dfa0 + lVar6) | *(uint *)(&DAT_0211dfc0 + lVar12) |
           *(uint *)(&DAT_0211dfe0 + lVar13) | *(uint *)(&DAT_0211e000 + lVar17) |
           *(uint *)(&DAT_0211e020 + lVar8) | *(uint *)(&DAT_0211e040 + lVar14) |
           *(uint *)(&DAT_0211e060 + lVar15);
  uVar22 = *(uint *)(&DAT_0211e240 + uVar11) |
           *(uint *)(&DAT_0211e200 + lVar9) |
           *(uint *)(&DAT_0211e1c0 + lVar25) |
           *(uint *)(&DAT_0211e180 + lVar16) |
           *(uint *)(&DAT_0211e140 + lVar10) |
           *(uint *)(&DAT_0211e100 + lVar7) |
           *(uint *)(&DAT_0211e0c0 + lVar24) | (&s_wD_K4)[uVar20] | (&s_wD_K3)[uVar21] |
           *(uint *)(&DAT_0211e2a0 + lVar6) | *(uint *)(&DAT_0211e2c0 + lVar12) |
           *(uint *)(&DAT_0211e2e0 + lVar13) | *(uint *)(&DAT_0211e300 + lVar17) |
           *(uint *)(&DAT_0211e320 + lVar8) | *(uint *)(&DAT_0211e340 + lVar14) |
           *(uint *)(&DAT_0211e360 + lVar15);
  puVar19 = (uint *)(this + 0x224);
  do {
    pbVar1 = &s_preshift + lVar18;
    lVar18 = lVar18 + 1;
    uVar2 = uVar23 << (ulong)(*pbVar1 & 0x1f);
    uVar3 = uVar22 << (ulong)(*pbVar1 & 0x1f);
    uVar4 = uVar2 >> 0x1c & 3;
    uVar23 = uVar4 | uVar2 & 0xfffffff;
    uVar5 = uVar3 >> 0x1c & 3;
    uVar22 = uVar5 | uVar3 & 0xfffffff;
    puVar19[-1] = *(uint *)(&DAT_0211e4c0 + (ulong)(uVar2 >> 4 & 0xf) * 4) |
                  *(uint *)(&DAT_0211e500 + (ulong)(uVar4 | uVar2 & 0xf) * 4) |
                  *(uint *)(&DAT_0211e480 + (ulong)(uVar2 >> 8 & 0xf) * 4) |
                  *(uint *)(&DAT_0211e440 + (ulong)(uVar2 >> 0xc & 0xf) * 4) |
                  *(uint *)(&DAT_0211e400 + (ulong)(uVar2 >> 0x10 & 0xf) * 4) |
                  *(uint *)(&DAT_0211e3c0 + (ulong)(uVar2 >> 0x14 & 0xf) * 4) |
                  (&s_hKS_C4)[uVar2 >> 0x18 & 0xf];
    *puVar19 = *(uint *)(&DAT_0211e680 + (ulong)(uVar3 >> 4 & 0xf) * 4) |
               *(uint *)(&DAT_0211e6c0 + (ulong)(uVar5 | uVar3 & 0xf) * 4) |
               *(uint *)(&DAT_0211e640 + (ulong)(uVar3 >> 8 & 0xf) * 4) |
               *(uint *)(&DAT_0211e600 + (ulong)(uVar3 >> 0xc & 0xf) * 4) |
               *(uint *)(&DAT_0211e5c0 + (ulong)(uVar3 >> 0x10 & 0xf) * 4) |
               *(uint *)(&DAT_0211e580 + (ulong)(uVar3 >> 0x14 & 0xf) * 4) |
               (&s_lKS_D4)[uVar3 >> 0x18 & 0xf];
    puVar19 = puVar19 + 2;
  } while (lVar18 != 0x10);
  *(ulonglong *)(this + 0x2a0) = param_2;
  *(ulonglong *)(this + 0x2a8) = param_1;
  *(code **)this = processBlock_0_0_0;
  *(code **)(this + 8) = processBlock_1_0_0;
  *(code **)(this + 0x10) = processBlock_0_1_0;
  *(code **)(this + 0x18) = processBlock_1_1_0;
  *(code **)(this + 0x20) = processBlock_0_0_1;
  *(code **)(this + 0x28) = processBlock_1_0_1;
  *(code **)(this + 0x30) = processBlock_0_1_1;
  *(code **)(this + 0x38) = processBlock_1_1_1;
  *(code **)(this + 0x40) = processBlock_0_0_2;
  *(code **)(this + 0x48) = processBlock_1_0_2;
  *(code **)(this + 0x50) = processBlock_0_1_2;
  *(code **)(this + 0x58) = processBlock_1_1_2;
  *(code **)(this + 0x60) = processBlock_0_0_3;
  *(code **)(this + 0x68) = processBlock_1_0_3;
  *(code **)(this + 0x70) = processBlock_0_1_3;
  *(code **)(this + 0x78) = processBlock_1_1_3;
  *(code **)(this + 0x80) = processBlock_0_0_4;
  *(code **)(this + 0x88) = processBlock_1_0_4;
  *(code **)(this + 0x90) = processBlock_0_1_4;
  *(code **)(this + 0x98) = processBlock_1_1_4;
  *(code **)(this + 0xa0) = processBlock_0_0_5;
  *(code **)(this + 0xa8) = processBlock_1_0_5;
  *(code **)(this + 0xb0) = processBlock_0_1_5;
  *(code **)(this + 0xb8) = processBlock_1_1_5;
  *(code **)(this + 0xc0) = processBlock_0_0_6;
  *(code **)(this + 200) = processBlock_1_0_6;
  *(code **)(this + 0xd0) = processBlock_0_1_6;
  *(code **)(this + 0xd8) = processBlock_1_1_6;
  *(code **)(this + 0xe0) = processBlock_0_0_7;
  *(code **)(this + 0xe8) = processBlock_1_0_7;
  *(code **)(this + 0xf0) = processBlock_0_1_7;
  *(code **)(this + 0xf8) = processBlock_1_1_7;
  *(code **)(this + 0x100) = processBlock_0_0_8;
  *(code **)(this + 0x108) = processBlock_1_0_8;
  *(code **)(this + 0x110) = processBlock_0_1_8;
  *(code **)(this + 0x118) = processBlock_1_1_8;
  *(code **)(this + 0x120) = processBlock_0_0_9;
  *(code **)(this + 0x128) = processBlock_1_0_9;
  *(code **)(this + 0x130) = processBlock_0_1_9;
  *(code **)(this + 0x138) = processBlock_1_1_9;
  *(code **)(this + 0x140) = processBlock_0_0_10;
  *(code **)(this + 0x148) = processBlock_1_0_10;
  *(code **)(this + 0x150) = processBlock_0_1_10;
  *(code **)(this + 0x158) = processBlock_1_1_10;
  *(code **)(this + 0x160) = processBlock_0_0_11;
  *(code **)(this + 0x168) = processBlock_1_0_11;
  *(code **)(this + 0x170) = processBlock_0_1_11;
  *(code **)(this + 0x178) = processBlock_1_1_11;
  *(code **)(this + 0x180) = processBlock_0_0_12;
  *(code **)(this + 0x188) = processBlock_1_0_12;
  *(code **)(this + 400) = processBlock_0_1_12;
  *(code **)(this + 0x198) = processBlock_1_1_12;
  *(code **)(this + 0x1a0) = processBlock_0_0_13;
  *(code **)(this + 0x1a8) = processBlock_1_0_13;
  *(code **)(this + 0x1b0) = processBlock_0_1_13;
  *(code **)(this + 0x1b8) = processBlock_1_1_13;
  *(code **)(this + 0x1c0) = processBlock_0_0_14;
  *(code **)(this + 0x1c8) = processBlock_1_0_14;
  *(code **)(this + 0x1d0) = processBlock_0_1_14;
  *(code **)(this + 0x1d8) = processBlock_1_1_14;
  *(code **)(this + 0x1e0) = processBlock_0_0_15;
  *(code **)(this + 0x1e8) = processBlock_1_0_15;
  *(code **)(this + 0x1f0) = processBlock_0_1_15;
  *(code **)(this + 0x1f8) = processBlock_1_1_15;
  *(code **)(this + 0x200) = processBlock_0_0_16;
  *(code **)(this + 0x208) = processBlock_1_0_16;
  *(code **)(this + 0x210) = processBlock_0_1_16;
  *(code **)(this + 0x218) = processBlock_1_1_16;
  return;
}


