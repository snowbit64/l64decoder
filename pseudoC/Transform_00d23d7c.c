// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Transform
// Entry Point: 00d23d7c
// Size: 4 bytes
// Signature: undefined __cdecl Transform(uint * param_1, uint * param_2)


/* CryptoPP::SHA1::Transform(unsigned int*, unsigned int const*) */

void CryptoPP::SHA1::Transform(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  uVar5 = *param_1;
  uVar10 = param_1[1];
  uVar6 = param_1[2];
  uVar11 = param_1[3];
  uVar17 = uVar10 >> 2 | uVar10 << 0x1e;
  uVar1 = (uVar5 >> 0x1b | uVar5 << 5) + param_1[4] + *param_2 +
          (uVar6 & uVar10 | uVar11 & (uVar10 ^ 0xffffffff)) + 0x5a827999;
  uVar7 = param_2[2];
  uVar12 = param_2[3];
  uVar8 = param_2[6];
  uVar13 = param_2[7];
  uVar18 = uVar5 >> 2 | uVar5 << 0x1e;
  uVar2 = uVar11 + (uVar17 & uVar5 | uVar6 & (uVar5 ^ 0xffffffff)) + param_2[1] +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar6 + uVar7 + (uVar18 & uVar1 | uVar17 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar17 + uVar12 + (uVar19 & uVar2 | uVar18 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar9 = param_2[4];
  uVar14 = param_2[5];
  uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar18 + uVar9 + (uVar20 & uVar1 | uVar19 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar14 + uVar19 + (uVar17 & uVar2 | uVar20 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar8 + uVar20 + (uVar21 & uVar1 | uVar17 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar24 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar13 + uVar17 + (uVar22 & uVar2 | uVar21 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar18 = param_2[8];
  uVar15 = param_2[9];
  uVar1 = uVar18 + uVar21 + (uVar23 & uVar1 | uVar22 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar19 = param_2[10];
  uVar16 = param_2[0xb];
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar15 + uVar22 + (uVar24 & uVar2 | uVar23 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar21 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar19 + uVar23 + (uVar17 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar20 = param_2[0xc];
  uVar22 = param_2[0xd];
  uVar25 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar16 + uVar24 + (uVar21 & uVar2 | uVar17 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar24 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar20 + uVar17 + (uVar25 & uVar1 | uVar21 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar26 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar22 + uVar21 + (uVar24 & uVar2 | uVar25 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar21 = param_2[0xe];
  uVar23 = param_2[0xf];
  uVar1 = uVar21 + uVar25 + (uVar26 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar17 = uVar7 ^ *param_2 ^ uVar18 ^ uVar22;
  uVar25 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar23 + uVar24 + (uVar27 & uVar2 | uVar26 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar24 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar12 ^ param_2[1] ^ uVar15 ^ uVar21;
  uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar24 + uVar26 + (uVar25 & uVar1 | uVar27 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar26 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar9 ^ uVar7 ^ uVar19 ^ uVar23;
  uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar26 + uVar27 + (uVar28 & uVar2 | uVar25 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar27 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar14 ^ uVar12 ^ uVar16 ^ uVar24;
  uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar7 = uVar8 ^ uVar9 ^ uVar20 ^ uVar26;
  uVar1 = uVar27 + uVar25 + (uVar29 & uVar1 | uVar28 & (uVar1 ^ 0xffffffff)) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0x5a827999;
  uVar9 = uVar17 >> 0x1f | uVar17 << 1;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar31 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar9 + uVar28 + (uVar12 & uVar2 | uVar29 & (uVar2 ^ 0xffffffff)) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0x5a827999;
  uVar17 = uVar13 ^ uVar14 ^ uVar22 ^ uVar27;
  uVar14 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = uVar25 + uVar29 + (uVar31 ^ uVar12 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar18 ^ uVar8 ^ uVar21 ^ uVar9;
  uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar29 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = uVar14 + uVar12 + (uVar30 ^ uVar31 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar15 ^ uVar13 ^ uVar23 ^ uVar25;
  uVar12 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar19 ^ uVar18 ^ uVar24 ^ uVar14;
  uVar7 = uVar16 ^ uVar15 ^ uVar26 ^ uVar29;
  uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar29 + uVar31 + (uVar28 ^ uVar30 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar13 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar20 ^ uVar19 ^ uVar27 ^ uVar12;
  uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar8 = uVar22 ^ uVar16 ^ uVar9 ^ uVar13;
  uVar2 = uVar12 + uVar30 + (uVar18 ^ uVar28 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar16 = uVar7 >> 0x1f | uVar7 << 1;
  uVar1 = uVar13 + uVar28 + (uVar19 ^ uVar18 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar16 + uVar18 + (uVar15 ^ uVar19 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar18 = uVar17 >> 0x1f | uVar17 << 1;
  uVar30 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar17 = uVar23 ^ uVar22 ^ uVar14 ^ uVar18;
  uVar1 = uVar18 + uVar19 + (uVar28 ^ uVar15 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar7 = uVar21 ^ uVar20 ^ uVar25 ^ uVar16;
  uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar20 = uVar7 >> 0x1f | uVar7 << 1;
  uVar2 = uVar8 + uVar15 + (uVar30 ^ uVar28 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar7 = uVar26 ^ uVar23 ^ uVar12 ^ uVar20;
  uVar1 = uVar20 + uVar28 + (uVar19 ^ uVar30 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar22 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar24 ^ uVar21 ^ uVar29 ^ uVar8;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar23 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = uVar22 + uVar30 + (uVar15 ^ uVar19 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar23 + uVar19 + (uVar21 ^ uVar15 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar19 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar27 ^ uVar24 ^ uVar13 ^ uVar22;
  uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar24 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = uVar19 + uVar15 + (uVar28 ^ uVar21 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar9 ^ uVar26 ^ uVar16 ^ uVar23;
  uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar26 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar25 ^ uVar27 ^ uVar18 ^ uVar19;
  uVar1 = uVar24 + uVar21 + (uVar7 ^ uVar28 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar27 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = uVar26 + uVar28 + (uVar15 ^ uVar7 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar14 ^ uVar9 ^ uVar8 ^ uVar24;
  uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar28 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = uVar27 + uVar7 + (uVar21 ^ uVar15 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar29 ^ uVar25 ^ uVar20 ^ uVar26;
  uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar25 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = uVar28 + uVar15 + (uVar9 ^ uVar21 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar12 ^ uVar14 ^ uVar22 ^ uVar27;
  uVar14 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar25 + uVar21 + (uVar7 ^ uVar9 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar21 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar13 ^ uVar29 ^ uVar23 ^ uVar28;
  uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = uVar21 + uVar9 + (uVar14 ^ uVar7 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar9 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar16 ^ uVar12 ^ uVar19 ^ uVar25;
  uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar29 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = uVar9 + uVar7 + (uVar15 ^ uVar14 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0x6ed9eba1;
  uVar17 = uVar18 ^ uVar13 ^ uVar24 ^ uVar21;
  uVar13 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar7 = uVar8 ^ uVar16 ^ uVar26 ^ uVar9;
  uVar2 = uVar29 + uVar14 + (uVar12 ^ uVar15 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0x6ed9eba1;
  uVar14 = uVar17 >> 0x1f | uVar17 << 1;
  uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
  iVar3 = uVar14 + uVar15 + ((uVar1 | uVar13) & uVar12 | uVar1 & uVar13) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar20 ^ uVar18 ^ uVar27 ^ uVar29;
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  iVar4 = uVar7 + uVar12 + ((uVar2 | uVar16) & uVar13 | uVar2 & uVar16) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar12 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar22 ^ uVar8 ^ uVar28 ^ uVar14;
  uVar8 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar12 + uVar13 + ((uVar1 | uVar18) & uVar16 | uVar1 & uVar18) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar13 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar23 ^ uVar20 ^ uVar25 ^ uVar7;
  uVar20 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar13 + uVar16 + ((uVar2 | uVar8) & uVar18 | uVar2 & uVar8) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar15 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar19 ^ uVar22 ^ uVar21 ^ uVar12;
  uVar16 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar15 + uVar18 + ((uVar1 | uVar20) & uVar8 | uVar1 & uVar20) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar18 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar24 ^ uVar23 ^ uVar9 ^ uVar13;
  uVar22 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar18 + uVar8 + ((uVar2 | uVar16) & uVar20 | uVar2 & uVar16) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar8 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar26 ^ uVar19 ^ uVar29 ^ uVar15;
  uVar19 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar8 + uVar20 + ((uVar1 | uVar22) & uVar16 | uVar1 & uVar22) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar27 ^ uVar24 ^ uVar14 ^ uVar18;
  uVar23 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar20 + uVar16 + ((uVar2 | uVar19) & uVar22 | uVar2 & uVar19) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar16 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar28 ^ uVar26 ^ uVar7 ^ uVar8;
  uVar24 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar16 + uVar22 + ((uVar1 | uVar23) & uVar19 | uVar1 & uVar23) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar25 ^ uVar27 ^ uVar12 ^ uVar20;
  uVar26 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar22 + uVar19 + ((uVar2 | uVar24) & uVar23 | uVar2 & uVar24) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar19 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar21 ^ uVar28 ^ uVar13 ^ uVar16;
  uVar27 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar19 + uVar23 + ((uVar1 | uVar26) & uVar24 | uVar1 & uVar26) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar23 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar9 ^ uVar25 ^ uVar15 ^ uVar22;
  uVar25 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar23 + uVar24 + ((uVar2 | uVar27) & uVar26 | uVar2 & uVar27) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar24 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar29 ^ uVar21 ^ uVar18 ^ uVar19;
  uVar21 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar24 + uVar26 + ((uVar1 | uVar25) & uVar27 | uVar1 & uVar25) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar26 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar14 ^ uVar9 ^ uVar8 ^ uVar23;
  uVar9 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar26 + uVar27 + ((uVar2 | uVar21) & uVar25 | uVar2 & uVar21) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar27 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar7 ^ uVar29 ^ uVar20 ^ uVar24;
  uVar28 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar27 + uVar25 + ((uVar1 | uVar9) & uVar21 | uVar1 & uVar9) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar25 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar12 ^ uVar14 ^ uVar16 ^ uVar26;
  uVar14 = uVar2 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar25 + uVar21 + ((uVar2 | uVar28) & uVar9 | uVar2 & uVar28) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar21 = uVar17 >> 0x1f | uVar17 << 1;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar17 = uVar13 ^ uVar7 ^ uVar22 ^ uVar27;
  uVar29 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar3 = uVar21 + uVar9 + ((uVar1 | uVar14) & uVar28 | uVar1 & uVar14) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar9 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar15 ^ uVar12 ^ uVar19 ^ uVar25;
  uVar12 = uVar2 >> 2 | iVar4 * 0x40000000;
  uVar7 = uVar18 ^ uVar13 ^ uVar23 ^ uVar21;
  iVar4 = uVar9 + uVar28 + ((uVar2 | uVar29) & uVar14 | uVar2 & uVar29) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar13 = uVar17 >> 0x1f | uVar17 << 1;
  uVar28 = uVar1 >> 2 | iVar3 * 0x40000000;
  uVar30 = uVar7 >> 0x1f | uVar7 << 1;
  iVar3 = uVar13 + uVar14 + ((uVar1 | uVar12) & uVar29 | uVar1 & uVar12) +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar8 ^ uVar15 ^ uVar24 ^ uVar9;
  uVar14 = uVar2 >> 2 | iVar4 * 0x40000000;
  uVar15 = uVar17 >> 0x1f | uVar17 << 1;
  iVar4 = uVar30 + uVar29 + ((uVar2 | uVar28) & uVar12 | uVar2 & uVar28) +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar17 = uVar16 ^ uVar8 ^ uVar27 ^ uVar30;
  uVar2 = iVar4 + 0x8f1bbcdc;
  uVar7 = uVar20 ^ uVar18 ^ uVar26 ^ uVar13;
  uVar8 = uVar1 >> 2 | iVar3 * 0x40000000;
  uVar18 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = uVar15 + uVar12 + (uVar14 ^ uVar28 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar12 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar2 >> 2 | iVar4 * 0x40000000;
  uVar17 = uVar22 ^ uVar20 ^ uVar25 ^ uVar15;
  uVar2 = uVar12 + uVar28 + (uVar8 ^ uVar14 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar20 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar28 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar19 ^ uVar16 ^ uVar21 ^ uVar12;
  uVar1 = uVar18 + uVar14 + (uVar7 ^ uVar8 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar16 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar23 ^ uVar22 ^ uVar9 ^ uVar18;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar28 + uVar8 + (uVar20 ^ uVar7 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar29 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar24 ^ uVar19 ^ uVar13 ^ uVar28;
  uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar19 = uVar17 >> 0x1f | uVar17 << 1;
  uVar1 = uVar16 + uVar7 + (uVar14 ^ uVar20 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar17 = uVar26 ^ uVar23 ^ uVar30 ^ uVar16;
  uVar23 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar31 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar27 ^ uVar24 ^ uVar15 ^ uVar29;
  uVar2 = uVar29 + uVar20 + (uVar22 ^ uVar14 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar24 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar25 ^ uVar26 ^ uVar12 ^ uVar19;
  uVar1 = uVar19 + uVar14 + (uVar8 ^ uVar22 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar14 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar26 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar21 ^ uVar27 ^ uVar18 ^ uVar31;
  uVar7 = uVar9 ^ uVar25 ^ uVar28 ^ uVar24;
  uVar2 = uVar31 + uVar22 + (uVar23 ^ uVar8 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar22 = uVar17 >> 0x1f | uVar17 << 1;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar27 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar24 + uVar8 + (uVar20 ^ uVar23 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar17 = uVar13 ^ uVar21 ^ uVar16 ^ uVar26;
  uVar21 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar32 = uVar17 >> 0x1f | uVar17 << 1;
  uVar17 = uVar30 ^ uVar9 ^ uVar29 ^ uVar22;
  uVar2 = uVar26 + uVar23 + (uVar14 ^ uVar20 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar9 = uVar17 >> 0x1f | uVar17 << 1;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar17 = uVar15 ^ uVar13 ^ uVar19 ^ uVar25;
  uVar7 = uVar12 ^ uVar30 ^ uVar31 ^ uVar32;
  uVar1 = uVar22 + uVar20 + (uVar27 ^ uVar14 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar8 = uVar17 >> 0x1f | uVar17 << 1;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar25 + uVar14 + (uVar21 ^ uVar27 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar32 + uVar27 + (uVar23 ^ uVar21 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar13 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar17 = uVar18 ^ uVar15 ^ uVar24 ^ uVar9;
  uVar2 = uVar9 + uVar21 + (uVar19 ^ uVar23 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar9 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar8 + uVar23 + (uVar20 ^ uVar19 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar2 = uVar7 + uVar19 + (uVar13 ^ uVar20 ^ uVar2) + (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar8 = uVar28 ^ uVar12 ^ uVar26 ^ uVar8;
  uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uVar17 + uVar20 + (uVar9 ^ uVar13 ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  uVar7 = uVar16 ^ uVar18 ^ uVar22 ^ uVar7;
  uVar17 = uVar29 ^ uVar28 ^ uVar25 ^ uVar17;
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = (uVar8 >> 0x1f | uVar8 << 1) + uVar13 + (uVar19 ^ uVar9 ^ uVar2) +
          (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  uVar8 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = (uVar7 >> 0x1f | uVar7 << 1) + uVar9 + (uVar18 ^ uVar19 ^ uVar1) +
          (uVar2 >> 0x1b | uVar2 * 0x20) + 0xca62c1d6;
  param_1[2] = (uVar2 >> 2 | uVar2 * 0x40000000) + uVar6;
  param_1[3] = uVar8 + uVar11;
  *param_1 = uVar5 + (uVar17 >> 0x1f | uVar17 << 1) + uVar19 + (uVar8 ^ uVar18 ^ uVar2) +
             (uVar1 >> 0x1b | uVar1 * 0x20) + 0xca62c1d6;
  param_1[1] = uVar1 + uVar10;
  param_1[4] = uVar18 + param_1[4];
  return;
}


