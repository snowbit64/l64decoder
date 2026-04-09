// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessAndXorBlock
// Entry Point: 00d22c50
// Size: 1396 bytes
// Signature: undefined __thiscall ProcessAndXorBlock(Dec * this, uchar * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::Rijndael::Dec::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
CryptoPP::Rijndael::Dec::ProcessAndXorBlock(Dec *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  byte bVar11;
  undefined uVar12;
  undefined uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  
  puVar17 = *(uint **)(this + 0x30);
  uVar22 = *puVar17 ^ *(uint *)param_1;
  uVar16 = puVar17[3] ^ *(uint *)(param_1 + 0xc);
  uVar1 = puVar17[1] ^ *(uint *)(param_1 + 4);
  uVar2 = puVar17[2] ^ *(uint *)(param_1 + 8);
  uVar18 = puVar17[4] ^
           ((uint)(&DAT_02121a30)[uVar16 >> 8 & 0xff] >> 8 |
           (&DAT_02121a30)[uVar16 >> 8 & 0xff] << 0x18) ^
           ((uint)(&DAT_02121a30)[uVar2 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02121a30)[uVar2 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02121a30)[uVar1 >> 0x18] >> 0x18 | (&DAT_02121a30)[uVar1 >> 0x18] << 8) ^
           (&DAT_02121a30)[uVar22 & 0xff];
  uVar21 = puVar17[5] ^
           ((uint)(&DAT_02121a30)[uVar16 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02121a30)[uVar16 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02121a30)[uVar2 >> 0x18] >> 0x18 | (&DAT_02121a30)[uVar2 >> 0x18] << 8) ^
           (&DAT_02121a30)[uVar1 & 0xff] ^
           ((uint)(&DAT_02121a30)[uVar22 >> 8 & 0xff] >> 8 |
           (&DAT_02121a30)[uVar22 >> 8 & 0xff] << 0x18);
  lVar20 = (ulong)((*(uint *)(this + 0x10) >> 1) - 2) * 8;
  uVar3 = puVar17[6] ^
          ((uint)(&DAT_02121a30)[uVar16 >> 0x18] >> 0x18 | (&DAT_02121a30)[uVar16 >> 0x18] << 8) ^
          (&DAT_02121a30)[uVar2 & 0xff] ^
          ((uint)(&DAT_02121a30)[uVar1 >> 8 & 0xff] >> 8 |
          (&DAT_02121a30)[uVar1 >> 8 & 0xff] << 0x18) ^
          ((uint)(&DAT_02121a30)[uVar22 >> 0x10 & 0xff] >> 0x10 |
          (&DAT_02121a30)[uVar22 >> 0x10 & 0xff] << 0x10);
  uVar22 = (&DAT_02121a30)[(ulong)uVar16 & 0xff] ^ puVar17[7] ^
           ((uint)(&DAT_02121a30)[uVar2 >> 8 & 0xff] >> 8 |
           (&DAT_02121a30)[uVar2 >> 8 & 0xff] << 0x18) ^
           ((uint)(&DAT_02121a30)[uVar1 >> 0x10 & 0xff] >> 0x10 |
           (&DAT_02121a30)[uVar1 >> 0x10 & 0xff] << 0x10) ^
           ((uint)(&DAT_02121a30)[uVar22 >> 0x18] >> 0x18 | (&DAT_02121a30)[uVar22 >> 0x18] << 8);
  iVar19 = (*(uint *)(this + 0x10) >> 1) - 1;
  puVar14 = puVar17 + 0xf;
  do {
    uVar16 = (&DAT_02121a30)[uVar22 >> 0x18] ^ puVar14[-4] ^
             (&DAT_02121a30)[uVar3 >> 0x10 & 0xff | 0x100] ^
             (&DAT_02121a30)[uVar21 >> 8 & 0xff | 0x200] ^ (&DAT_02121a30)[uVar18 & 0xff | 0x300];
    uVar1 = (&DAT_02121a30)[uVar22 & 0xff | 0x300] ^ puVar14[-5] ^ (&DAT_02121a30)[uVar3 >> 0x18] ^
            (&DAT_02121a30)[uVar21 >> 0x10 & 0xff | 0x100] ^
            (&DAT_02121a30)[uVar18 >> 8 & 0xff | 0x200];
    uVar2 = (&DAT_02121a30)[uVar22 >> 8 & 0xff | 0x200] ^ puVar14[-6] ^
            (&DAT_02121a30)[uVar3 & 0xff | 0x300] ^ (&DAT_02121a30)[uVar21 >> 0x18] ^
            (&DAT_02121a30)[uVar18 >> 0x10 & 0xff | 0x100];
    uVar18 = (&DAT_02121a30)[uVar22 >> 0x10 & 0xff | 0x100] ^ puVar14[-7] ^
             (&DAT_02121a30)[uVar3 >> 8 & 0xff | 0x200] ^ (&DAT_02121a30)[uVar21 & 0xff | 0x300] ^
             (&DAT_02121a30)[uVar18 >> 0x18];
    uVar22 = (&DAT_02121a30)[uVar16 >> 0x18] ^ *puVar14 ^
             (&DAT_02121a30)[uVar1 >> 0x10 & 0xff | 0x100] ^
             (&DAT_02121a30)[uVar2 >> 8 & 0xff | 0x200] ^ (&DAT_02121a30)[uVar18 & 0xff | 0x300];
    uVar3 = (&DAT_02121a30)[uVar16 & 0xff | 0x300] ^ puVar14[-1] ^ (&DAT_02121a30)[uVar1 >> 0x18] ^
            (&DAT_02121a30)[uVar2 >> 0x10 & 0xff | 0x100] ^
            (&DAT_02121a30)[uVar18 >> 8 & 0xff | 0x200];
    uVar21 = (&DAT_02121a30)[uVar16 >> 8 & 0xff | 0x200] ^ puVar14[-2] ^
             (&DAT_02121a30)[uVar1 & 0xff | 0x300] ^ (&DAT_02121a30)[uVar2 >> 0x18] ^
             (&DAT_02121a30)[uVar18 >> 0x10 & 0xff | 0x100];
    iVar19 = iVar19 + -1;
    uVar18 = (&DAT_02121a30)[uVar16 >> 0x10 & 0xff | 0x100] ^ puVar14[-3] ^
             (&DAT_02121a30)[uVar1 >> 8 & 0xff | 0x200] ^ (&DAT_02121a30)[uVar2 & 0xff | 0x300] ^
             (&DAT_02121a30)[uVar18 >> 0x18];
    puVar14 = puVar14 + 8;
  } while (iVar19 != 0);
  uVar4 = *(undefined *)((long)&Base::Sd + (ulong)(uVar21 >> 0x18));
  bVar5 = *(byte *)((long)&Base::Sd + ((ulong)(uVar3 >> 0x10) & 0xff));
  bVar6 = *(byte *)((long)&Base::Sd + ((ulong)(uVar21 >> 8) & 0xff));
  bVar7 = *(byte *)((long)&Base::Sd + ((ulong)uVar18 & 0xff));
  uVar8 = *(undefined *)((long)&Base::Sd + ((ulong)uVar3 & 0xff));
  uVar9 = *(undefined *)((long)&Base::Sd + ((ulong)(uVar18 >> 0x10) & 0xff));
  uVar10 = *(undefined *)((long)&Base::Sd + ((ulong)(uVar22 >> 8) & 0xff));
  uVar16 = ((uint)*(byte *)((long)&Base::Sd + ((ulong)(uVar3 >> 8) & 0xff)) << 0x10 |
            (uint)*(byte *)((long)&Base::Sd + ((ulong)uVar21 & 0xff)) << 0x18 |
           (uint)CONCAT11(*(undefined *)((long)&Base::Sd + ((ulong)(uVar22 >> 0x10) & 0xff)),
                          *(undefined *)((long)&Base::Sd + (ulong)(uVar18 >> 0x18)))) ^
           puVar17[lVar20 + 0x10];
  if (param_2 == (uchar *)0x0) {
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = (uint *)(param_2 + 4);
    uVar16 = *(uint *)param_2 ^ uVar16;
  }
  *(uint *)param_3 = uVar16;
  bVar11 = *(byte *)((long)&Base::Sd + (ulong)(uVar22 >> 0x18));
  uVar12 = *(undefined *)((long)&Base::Sd + (ulong)(uVar3 >> 0x18));
  uVar13 = *(undefined *)((long)&Base::Sd + ((ulong)(uVar21 >> 0x10) & 0xff));
  uVar16 = puVar17[lVar20 + 0x11] ^ CONCAT13(uVar8,CONCAT12(uVar10,CONCAT11(uVar9,uVar4)));
  uVar4 = *(undefined *)((long)&Base::Sd + ((ulong)(uVar18 >> 8) & 0xff));
  uVar8 = *(undefined *)((long)&Base::Sd + ((ulong)uVar22 & 0xff));
  if (puVar14 == (uint *)0x0) {
    puVar15 = (uint *)0x0;
  }
  else {
    puVar15 = puVar14 + 1;
    uVar16 = *puVar14 ^ uVar16;
  }
  *(uint *)(param_3 + 4) = uVar16;
  uVar16 = (uint)bVar5 << 8 | (uint)bVar6 << 0x10 | (uint)bVar7 << 0x18 | (uint)bVar11;
  uVar22 = puVar17[lVar20 + 0x12] ^ CONCAT13(uVar8,CONCAT12(uVar4,CONCAT11(uVar13,uVar12)));
  if (puVar15 != (uint *)0x0) {
    *(uint *)(param_3 + 8) = *puVar15 ^ uVar22;
    *(uint *)(param_3 + 0xc) = puVar15[1] ^ puVar17[lVar20 + 0x13] ^ uVar16;
    return;
  }
  *(uint *)(param_3 + 8) = uVar22;
  *(uint *)(param_3 + 0xc) = puVar17[lVar20 + 0x13] ^ uVar16;
  return;
}


