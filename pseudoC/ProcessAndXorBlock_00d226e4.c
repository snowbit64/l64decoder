// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessAndXorBlock
// Entry Point: 00d226e4
// Size: 1380 bytes
// Signature: undefined __thiscall ProcessAndXorBlock(Enc * this, uchar * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::Rijndael::Enc::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
CryptoPP::Rijndael::Enc::ProcessAndXorBlock(Enc *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  byte bVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  puVar18 = *(uint **)(this + 0x30);
  uVar23 = *puVar18 ^ *(uint *)param_1;
  uVar1 = puVar18[3] ^ *(uint *)(param_1 + 0xc);
  uVar2 = puVar18[2] ^ *(uint *)(param_1 + 8);
  uVar3 = puVar18[1] ^ *(uint *)(param_1 + 4);
  uVar21 = puVar18[4] ^
           ((uint)(&DAT_02120a30)[uVar1 >> 0x18] >> 0x18 | (&DAT_02120a30)[uVar1 >> 0x18] << 8) ^
           ((uint)(&DAT_02120a30)[uVar2 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02120a30)[uVar2 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02120a30)[uVar3 >> 8 & 0xff] >> 8 |
           (&DAT_02120a30)[uVar3 >> 8 & 0xff] << 0x18) ^ (&DAT_02120a30)[uVar23 & 0xff];
  uVar24 = puVar18[6] ^
           ((uint)(&DAT_02120a30)[uVar1 >> 8 & 0xff] >> 8 |
           (&DAT_02120a30)[uVar1 >> 8 & 0xff] << 0x18) ^ (&DAT_02120a30)[uVar2 & 0xff] ^
           ((uint)(&DAT_02120a30)[uVar3 >> 0x18] >> 0x18 | (&DAT_02120a30)[uVar3 >> 0x18] << 8) ^
           ((uint)(&DAT_02120a30)[uVar23 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02120a30)[uVar23 >> 0x10 & 0xff] << 0x10);
  uVar22 = (&DAT_02120a30)[(ulong)uVar1 & 0xff] ^ puVar18[7] ^
           ((uint)(&DAT_02120a30)[uVar2 >> 0x18] >> 0x18 | (&DAT_02120a30)[uVar2 >> 0x18] << 8) ^
           ((uint)(&DAT_02120a30)[uVar3 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02120a30)[uVar3 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02120a30)[uVar23 >> 8 & 0xff] >> 8 |
           (&DAT_02120a30)[uVar23 >> 8 & 0xff] << 0x18);
  lVar20 = (ulong)((*(uint *)(this + 0x10) >> 1) - 2) * 8;
  uVar23 = puVar18[5] ^
           ((uint)(&DAT_02120a30)[uVar1 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02120a30)[uVar1 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02120a30)[uVar2 >> 8 & 0xff] >> 8 |
           (&DAT_02120a30)[uVar2 >> 8 & 0xff] << 0x18) ^ (&DAT_02120a30)[uVar3 & 0xff] ^
           ((uint)(&DAT_02120a30)[uVar23 >> 0x18] >> 0x18 | (&DAT_02120a30)[uVar23 >> 0x18] << 8);
  iVar19 = (*(uint *)(this + 0x10) >> 1) - 1;
  puVar16 = puVar18 + 0xf;
  do {
    uVar1 = (&DAT_02120a30)[uVar22 >> 0x18] ^ puVar16[-4] ^ (&DAT_02120a30)[uVar24 & 0xff | 0x300] ^
            (&DAT_02120a30)[uVar23 >> 8 & 0xff | 0x200] ^
            (&DAT_02120a30)[uVar21 >> 0x10 & 0xff | 0x100];
    uVar2 = (&DAT_02120a30)[uVar22 >> 0x10 & 0xff | 0x100] ^ puVar16[-5] ^
            (&DAT_02120a30)[uVar24 >> 0x18] ^ (&DAT_02120a30)[uVar23 & 0xff | 0x300] ^
            (&DAT_02120a30)[uVar21 >> 8 & 0xff | 0x200];
    uVar3 = (&DAT_02120a30)[uVar22 >> 8 & 0xff | 0x200] ^ puVar16[-6] ^
            (&DAT_02120a30)[uVar24 >> 0x10 & 0xff | 0x100] ^ (&DAT_02120a30)[uVar23 >> 0x18] ^
            (&DAT_02120a30)[uVar21 & 0xff | 0x300];
    uVar21 = (&DAT_02120a30)[uVar22 & 0xff | 0x300] ^ puVar16[-7] ^
             (&DAT_02120a30)[uVar24 >> 8 & 0xff | 0x200] ^
             (&DAT_02120a30)[uVar23 >> 0x10 & 0xff | 0x100] ^ (&DAT_02120a30)[uVar21 >> 0x18];
    uVar23 = (&DAT_02120a30)[uVar1 >> 8 & 0xff | 0x200] ^ puVar16[-2] ^
             (&DAT_02120a30)[uVar2 >> 0x10 & 0xff | 0x100] ^ (&DAT_02120a30)[uVar3 >> 0x18] ^
             (&DAT_02120a30)[uVar21 & 0xff | 0x300];
    uVar24 = (&DAT_02120a30)[uVar1 >> 0x10 & 0xff | 0x100] ^ puVar16[-1] ^
             (&DAT_02120a30)[uVar2 >> 0x18] ^ (&DAT_02120a30)[uVar3 & 0xff | 0x300] ^
             (&DAT_02120a30)[uVar21 >> 8 & 0xff | 0x200];
    uVar22 = (&DAT_02120a30)[uVar1 >> 0x18] ^ *puVar16 ^ (&DAT_02120a30)[uVar2 & 0xff | 0x300] ^
             (&DAT_02120a30)[uVar3 >> 8 & 0xff | 0x200] ^
             (&DAT_02120a30)[uVar21 >> 0x10 & 0xff | 0x100];
    iVar19 = iVar19 + -1;
    uVar21 = (&DAT_02120a30)[uVar1 & 0xff | 0x300] ^ puVar16[-3] ^
             (&DAT_02120a30)[uVar2 >> 8 & 0xff | 0x200] ^
             (&DAT_02120a30)[uVar3 >> 0x10 & 0xff | 0x100] ^ (&DAT_02120a30)[uVar21 >> 0x18];
    puVar16 = puVar16 + 8;
  } while (iVar19 != 0);
  bVar4 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar24 & 0xff) * 4 + 1);
  uVar5 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar24 >> 0x18) * 4 + 1);
  bVar6 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar23 & 0xff) * 4 + 1);
  bVar7 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar21 >> 8 & 0xff) * 4 + 1);
  bVar8 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar21 >> 0x10 & 0xff) * 4 + 1);
  bVar9 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar23 >> 8 & 0xff) * 4 + 1);
  uVar10 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar24 >> 0x10 & 0xff) * 4 + 1);
  uVar11 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar23 >> 0x18) * 4 + 1);
  uVar23 = ((uint)*(byte *)((long)&DAT_02120a30 + (ulong)(uVar24 >> 8 & 0xff) * 4 + 1) << 0x10 |
            (uint)*(byte *)((long)&DAT_02120a30 + (ulong)(uVar23 >> 0x10 & 0xff) * 4 + 1) << 8 |
            (uint)*(byte *)((long)&DAT_02120a30 + (ulong)(uVar21 >> 0x18) * 4 + 1) |
           (uint)*(byte *)((long)&DAT_02120a30 + (ulong)(uVar22 & 0xff) * 4 + 1) << 0x18) ^
           puVar18[lVar20 + 0x10];
  uVar12 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar21 & 0xff) * 4 + 1);
  uVar13 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar22 >> 8 & 0xff) * 4 + 1);
  uVar14 = *(undefined *)((long)&DAT_02120a30 + (ulong)(uVar22 >> 0x10 & 0xff) * 4 + 1);
  bVar15 = *(byte *)((long)&DAT_02120a30 + (ulong)(uVar22 >> 0x18) * 4 + 1);
  if (param_2 == (uchar *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = (uint *)(param_2 + 4);
    uVar23 = *(uint *)param_2 ^ uVar23;
  }
  *(uint *)param_3 = uVar23;
  uVar23 = puVar18[lVar20 + 0x11] ^ CONCAT13(uVar12,CONCAT12(uVar13,CONCAT11(uVar10,uVar11)));
  if (puVar16 == (uint *)0x0) {
    puVar17 = (uint *)0x0;
  }
  else {
    puVar17 = puVar16 + 1;
    uVar23 = *puVar16 ^ uVar23;
  }
  *(uint *)(param_3 + 4) = uVar23;
  uVar1 = (uint)bVar4 << 0x18 | (uint)bVar9 << 0x10 | (uint)bVar8 << 8 | (uint)bVar15;
  uVar23 = puVar18[lVar20 + 0x12] ^
           ((uint)bVar6 << 0x18 | (uint)bVar7 << 0x10 | (uint)CONCAT11(uVar14,uVar5));
  if (puVar17 != (uint *)0x0) {
    *(uint *)(param_3 + 8) = *puVar17 ^ uVar23;
    *(uint *)(param_3 + 0xc) = puVar17[1] ^ puVar18[lVar20 + 0x13] ^ uVar1;
    return;
  }
  *(uint *)(param_3 + 8) = uVar23;
  *(uint *)(param_3 + 0xc) = puVar18[lVar20 + 0x13] ^ uVar1;
  return;
}


