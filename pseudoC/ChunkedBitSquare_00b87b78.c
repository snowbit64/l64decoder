// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChunkedBitSquare
// Entry Point: 00b87b78
// Size: 384 bytes
// Signature: undefined __thiscall ChunkedBitSquare(ChunkedBitSquare * this, uint param_1, uint param_2, uint * param_3)


/* ChunkedBitSquare::ChunkedBitSquare(unsigned int, unsigned int, unsigned int const*) */

void __thiscall
ChunkedBitSquare::ChunkedBitSquare(ChunkedBitSquare *this,uint param_1,uint param_2,uint *param_3)

{
  undefined (*pauVar1) [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [12];
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined (*pauVar15) [12];
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  *(uint *)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(uint *)(this + 0x34) = param_2;
  *(undefined4 *)(this + 0x38) = 0;
  if (1 < param_2) {
    uVar7 = (ulong)param_2;
    uVar10 = uVar7 - 1;
    if ((uVar10 < 8) ||
       ((this + 0x3c < param_3 + (uVar7 - 1) && (param_3 < this + uVar7 * 8 + 0x34)))) {
      uVar20 = 0;
      uVar9 = 1;
    }
    else {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      puVar14 = (undefined4 *)(this + 0x5c);
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      uVar20 = 0;
      uVar9 = uVar12 | 1;
      pauVar15 = (undefined (*) [12])(param_3 + 4);
      uVar16 = uVar12;
      do {
        auVar25._12_4_ = uVar20;
        auVar25._8_4_ = iVar19;
        auVar25._4_4_ = iVar18;
        auVar25._0_4_ = iVar17;
        pauVar1 = (undefined (*) [12])(pauVar15[-2] + 8);
        iVar23 = (int)*(undefined8 *)(pauVar15[-1] + 4);
        iVar24 = (int)((ulong)*(undefined8 *)(pauVar15[-1] + 4) >> 0x20);
        iVar21 = (int)*(undefined8 *)*pauVar1;
        iVar22 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        iVar19 = (int)*(undefined8 *)(*pauVar15 + 8);
        uVar20 = (uint)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
        auVar6 = *pauVar15;
        iVar17 = (int)*(undefined8 *)*pauVar15;
        iVar18 = (int)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
        pauVar15 = (undefined (*) [12])(pauVar15[2] + 8);
        uVar16 = uVar16 - 8;
        auVar4._12_4_ = iVar24;
        auVar4._0_12_ = *pauVar1;
        auVar26 = NEON_ext(auVar25,auVar4,0xc,1);
        auVar28._12_4_ = uVar20;
        auVar28._0_12_ = auVar6;
        auVar5._12_4_ = iVar24;
        auVar5._0_12_ = *pauVar1;
        auVar28 = NEON_ext(auVar5,auVar28,0xc,1);
        auVar27._0_4_ = iVar21 - auVar26._0_4_;
        auVar27._4_4_ = iVar22 - auVar26._4_4_;
        auVar27._8_4_ = iVar23 - auVar26._8_4_;
        auVar27._12_4_ = iVar24 - auVar26._12_4_;
        auVar29._0_4_ = iVar17 - auVar28._0_4_;
        auVar29._4_4_ = iVar18 - auVar28._4_4_;
        auVar29._8_4_ = iVar19 - auVar28._8_4_;
        auVar29._12_4_ = uVar20 - auVar28._12_4_;
        auVar26._8_8_ = 0xffffffffffffffff;
        auVar26._0_8_ = 0xffffffffffffffff;
        auVar28 = NEON_ushl(auVar26,auVar27,4);
        auVar3._8_8_ = 0xffffffffffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar26 = NEON_ushl(auVar3,auVar29,4);
        puVar14[-8] = CONCAT13(~auVar28[3],CONCAT12(~auVar28[2],CONCAT11(~auVar28[1],~auVar28[0])));
        puVar14[-7] = iVar21;
        puVar14[-6] = CONCAT13(~auVar28[7],CONCAT12(~auVar28[6],CONCAT11(~auVar28[5],~auVar28[4])));
        puVar14[-5] = iVar22;
        puVar14[-4] = CONCAT13(~auVar28[11],CONCAT12(~auVar28[10],CONCAT11(~auVar28[9],~auVar28[8]))
                              );
        puVar14[-3] = iVar23;
        puVar14[-2] = CONCAT13(~auVar28[15],
                               CONCAT12(~auVar28[14],CONCAT11(~auVar28[13],~auVar28[12])));
        puVar14[-1] = iVar24;
        *puVar14 = CONCAT13(~auVar26[3],CONCAT12(~auVar26[2],CONCAT11(~auVar26[1],~auVar26[0])));
        puVar14[1] = iVar17;
        puVar14[2] = CONCAT13(~auVar26[7],CONCAT12(~auVar26[6],CONCAT11(~auVar26[5],~auVar26[4])));
        puVar14[3] = iVar18;
        puVar14[4] = CONCAT13(~auVar26[11],CONCAT12(~auVar26[10],CONCAT11(~auVar26[9],~auVar26[8])))
        ;
        puVar14[5] = iVar19;
        puVar14[6] = CONCAT13(~auVar26[15],
                              CONCAT12(~auVar26[14],CONCAT11(~auVar26[13],~auVar26[12])));
        puVar14[7] = uVar20;
        puVar14 = puVar14 + 0x10;
      } while (uVar16 != 0);
      if (uVar10 == uVar12) goto LAB_00b87c04;
    }
    puVar11 = (uint *)(this + uVar9 * 8 + 0x38);
    lVar8 = uVar7 - uVar9;
    puVar13 = param_3 + (uVar9 - 1);
    do {
      uVar2 = *puVar13;
      lVar8 = lVar8 + -1;
      puVar11[-1] = ~(-1 << (ulong)(uVar2 - uVar20 & 0x1f));
      *puVar11 = uVar2;
      puVar11 = puVar11 + 2;
      puVar13 = puVar13 + 1;
      uVar20 = uVar2;
    } while (lVar8 != 0);
  }
LAB_00b87c04:
  *(int *)(this + (ulong)(param_2 - 1) * 8 + 0x3c) =
       ~(-1 << (ulong)(param_1 - *(int *)(this + (ulong)(param_2 - 1) * 8 + 0x38) & 0x1f));
  if (param_1 != 0) {
    uVar7 = 0;
    do {
      if (param_2 != 0) {
        uVar10 = 0;
        puVar11 = (uint *)(this + 0x38);
        do {
          if (*puVar11 <= uVar7) {
            *(int *)(this + uVar7 * 4 + 0x68) = (int)uVar10;
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 2;
        } while (param_2 != uVar10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_1);
  }
  return;
}


