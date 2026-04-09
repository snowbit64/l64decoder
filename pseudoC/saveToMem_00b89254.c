// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToMem
// Entry Point: 00b89254
// Size: 684 bytes
// Signature: undefined __thiscall saveToMem(ChunkedBitSquare * this, uint * param_1, bool param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChunkedBitSquare::saveToMem(unsigned int&, bool) */

undefined4 * __thiscall
ChunkedBitSquare::saveToMem(ChunkedBitSquare *this,uint *param_1,bool param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *__dest;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  
  if (param_2) {
    uVar12 = *(uint *)(this + 0xc);
    if (uVar12 != 0) {
      uVar20 = 0;
      uVar11 = *(uint *)(this + 0x34);
      do {
        if (uVar11 != 0) {
          uVar12 = 0;
          do {
            uVar9 = ChunkedBitSquareChunk::reduceChunkBpp();
            uVar11 = *(uint *)(this + 0x34);
            uVar13 = uVar12 + uVar20 * uVar11;
            uVar12 = uVar12 + 1;
            *(undefined8 *)(*(long *)(this + 0x28) + (ulong)uVar13 * 8) = uVar9;
          } while (uVar12 < uVar11);
          uVar12 = *(uint *)(this + 0xc);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar12);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  uVar12 = *(int *)(this + 0x34) + 8;
  *param_1 = uVar12;
  uVar20 = *(uint *)(this + 0xc);
  uVar11 = *(uint *)(this + 0x34);
  if (uVar20 != 0) {
    uVar13 = 0;
    uVar15 = uVar11;
    do {
      if (uVar15 != 0) {
        uVar20 = 0;
        lVar19 = *(long *)(this + 0x28);
        uVar11 = uVar15;
        do {
          uVar11 = uVar20 + uVar13 * uVar11;
          uVar20 = uVar20 + 1;
          lVar16 = *(long *)(lVar19 + (ulong)uVar11 * 8);
          uVar12 = uVar12 + (uint)*(byte *)(lVar16 + 0x12) * 2 +
                   (uint)*(byte *)(lVar16 + 0x10) * 0x80 + 2;
          *param_1 = uVar12;
          uVar11 = *(uint *)(this + 0x34);
        } while (uVar20 < uVar11);
        uVar20 = *(uint *)(this + 0xc);
        uVar15 = uVar11;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar20);
  }
  puVar10 = (undefined4 *)operator_new__((ulong)uVar12);
  uVar2 = *(undefined4 *)this;
  uVar3 = *(undefined4 *)(this + 0x20);
  __dest = (undefined *)((long)puVar10 + 9);
  *puVar10 = 0x46444d21;
  *(char *)(puVar10 + 1) = (char)uVar2;
  *(undefined2 *)((long)puVar10 + 5) = 0x205;
  *(char *)((long)puVar10 + 7) = (char)uVar3;
  *(char *)(puVar10 + 2) = (char)uVar11;
  auVar8 = _DAT_004c3bd0;
  if (1 < uVar11) {
    uVar14 = (ulong)uVar11 - 1;
    if (uVar14 < 0x21) {
      lVar19 = 1;
    }
    else {
      uVar1 = 0x20;
      if ((uVar14 & 0x1f) != 0) {
        uVar1 = uVar14 & 0x1f;
      }
      puVar18 = (undefined8 *)((long)puVar10 + 0x19);
      lVar16 = uVar14 - uVar1;
      lVar19 = lVar16 + 1;
      __dest = __dest + lVar16;
      puVar17 = (undefined4 *)(this + 0xc0);
      do {
        lVar16 = lVar16 + -0x20;
        auVar22._0_4_ = puVar17[-0x20];
        auVar22._4_4_ = puVar17[-0x1e];
        auVar22._8_4_ = puVar17[-0x1c];
        auVar22._12_4_ = puVar17[-0x1a];
        auVar24._0_4_ = puVar17[-0x18];
        auVar24._4_4_ = puVar17[-0x16];
        auVar24._8_4_ = puVar17[-0x14];
        auVar24._12_4_ = puVar17[-0x12];
        auVar23._4_4_ = puVar17[-0xe];
        auVar23._0_4_ = puVar17[-0x10];
        auVar23._8_4_ = puVar17[-0xc];
        auVar23._12_4_ = puVar17[-10];
        auVar25._4_4_ = puVar17[-6];
        auVar25._0_4_ = puVar17[-8];
        auVar25._8_4_ = puVar17[-4];
        auVar25._12_4_ = puVar17[-2];
        auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar24,auVar23,auVar25,auVar8);
        auVar4._4_4_ = puVar17[2];
        auVar4._0_4_ = *puVar17;
        auVar4._8_4_ = puVar17[4];
        auVar4._12_4_ = puVar17[6];
        auVar5._4_4_ = puVar17[10];
        auVar5._0_4_ = puVar17[8];
        auVar5._8_4_ = puVar17[0xc];
        auVar5._12_4_ = puVar17[0xe];
        auVar6._4_4_ = puVar17[0x12];
        auVar6._0_4_ = puVar17[0x10];
        auVar6._8_4_ = puVar17[0x14];
        auVar6._12_4_ = puVar17[0x16];
        auVar7._4_4_ = puVar17[0x1a];
        auVar7._0_4_ = puVar17[0x18];
        auVar7._8_4_ = puVar17[0x1c];
        auVar7._12_4_ = puVar17[0x1e];
        auVar25 = a64_TBL(ZEXT816(0),auVar4,auVar5,auVar6,auVar7,auVar8);
        puVar18[-1] = auVar23._8_8_;
        puVar18[-2] = auVar23._0_8_;
        puVar18[1] = auVar25._8_8_;
        *puVar18 = auVar25._0_8_;
        puVar18 = puVar18 + 4;
        puVar17 = puVar17 + 0x40;
      } while (lVar16 != 0);
    }
    lVar16 = (ulong)uVar11 - lVar19;
    puVar17 = (undefined4 *)(this + lVar19 * 8 + 0x38);
    puVar21 = __dest;
    do {
      lVar16 = lVar16 + -1;
      __dest = puVar21 + 1;
      *puVar21 = (char)*puVar17;
      puVar17 = puVar17 + 2;
      puVar21 = __dest;
    } while (lVar16 != 0);
  }
  if (uVar20 != 0) {
    uVar12 = 0;
    do {
      if (uVar11 != 0) {
        uVar20 = 0;
        do {
          lVar19 = *(long *)(*(long *)(this + 0x28) + (ulong)(uVar20 + uVar12 * uVar11) * 8);
          *__dest = *(undefined *)(lVar19 + 0x10);
          __dest[1] = *(undefined *)(lVar19 + 0x12);
          __dest = __dest + 2;
          if ((ulong)*(byte *)(lVar19 + 0x12) != 0) {
            memcpy(__dest,(void *)(lVar19 + 0x14),(ulong)*(byte *)(lVar19 + 0x12) << 1);
            __dest = __dest + (ulong)*(byte *)(lVar19 + 0x12) * 2;
          }
          if ((ulong)*(byte *)(lVar19 + 0x10) != 0) {
            memcpy(__dest,(void *)(lVar19 + 0x1c),(ulong)*(byte *)(lVar19 + 0x10) << 7);
            __dest = __dest + (ulong)*(byte *)(lVar19 + 0x10) * 0x80;
          }
          uVar11 = *(uint *)(this + 0x34);
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar11);
        uVar20 = *(uint *)(this + 0xc);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar20);
  }
  return puVar10;
}


