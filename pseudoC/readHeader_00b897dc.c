// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHeader
// Entry Point: 00b897dc
// Size: 748 bytes
// Signature: undefined __cdecl readHeader(File * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChunkedBitSquare::readHeader(File*, unsigned int&, unsigned int&, unsigned int&, unsigned int&,
   unsigned int&, unsigned int&, unsigned int*) */

void ChunkedBitSquare::readHeader
               (File *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  ulong *puVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  byte local_80;
  byte local_7f;
  byte local_7e;
  byte local_7d;
  byte local_7c;
  undefined4 local_74;
  ulong local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[1] = *(long *)(lVar3 + 0x28);
  iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_74,4);
  if (iVar7 == 4) {
    if (local_74 == 0x204d4446) {
      iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_80,4);
      bVar6 = iVar7 == 4;
      if (bVar6) {
        uVar2 = 1 << (ulong)((uint)local_7f + (uint)local_80 & 0x1f);
        *param_2 = uVar2;
        *param_3 = uVar2;
        *param_4 = (uint)local_7d;
        *param_5 = (uint)local_7e;
        *param_6 = 1 << (ulong)(local_7f & 0x1f);
        *param_7 = 1;
      }
      goto LAB_00b89898;
    }
    if (((local_74 == 0x46444d21) &&
        (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_80,5), iVar7 == 5)) &&
       (local_7c < 7)) {
      bVar6 = true;
      uVar8 = (uint)local_7c;
      uVar2 = 1 << (ulong)((uint)local_7f + (uint)local_80 & 0x1f);
      *param_2 = uVar2;
      *param_3 = uVar2;
      *param_4 = (uint)local_7d;
      *param_5 = (uint)local_7e;
      *param_6 = 1 << (ulong)(local_7f & 0x1f);
      *param_7 = uVar8;
      if (uVar8 < 2) goto LAB_00b89898;
      iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_70,uVar8 - 1);
      auVar21 = _DAT_004c4f40;
      auVar20 = _DAT_004c4d70;
      auVar5 = _DAT_004c4a50;
      auVar4 = _DAT_004c37b0;
      if (iVar7 == *param_7 - 1) {
        uVar9 = (ulong)local_7c;
        if (1 < uVar9) {
          uVar11 = uVar9 - 1;
          if (uVar11 < 8) {
            uVar15 = 1;
          }
          else {
            if (uVar11 < 0x20) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar11 & 0xffffffffffffffe0;
              pauVar17 = (undefined (*) [16])&stack0xffffffffffffffa0;
              puVar16 = (undefined8 *)(param_8 + 0x10);
              uVar15 = uVar14;
              do {
                pauVar1 = pauVar17 + -1;
                auVar22 = *pauVar17;
                pauVar17 = pauVar17 + 2;
                uVar15 = uVar15 - 0x20;
                auVar23 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar5);
                auVar24 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar4);
                auVar25 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar20);
                auVar26 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar21);
                auVar27 = a64_TBL(ZEXT816(0),auVar22,ZEXT816(0),auVar5);
                puVar16[-3] = auVar24._8_8_;
                puVar16[-4] = auVar24._0_8_;
                puVar16[-1] = auVar23._8_8_;
                puVar16[-2] = auVar23._0_8_;
                auVar23 = a64_TBL(ZEXT816(0),auVar22,ZEXT816(0),auVar4);
                auVar24 = a64_TBL(ZEXT816(0),auVar22,ZEXT816(0),auVar20);
                puVar16[-7] = auVar26._8_8_;
                puVar16[-8] = auVar26._0_8_;
                puVar16[-5] = auVar25._8_8_;
                puVar16[-6] = auVar25._0_8_;
                auVar22 = a64_TBL(ZEXT816(0),auVar22,ZEXT816(0),auVar21);
                puVar16[5] = auVar23._8_8_;
                puVar16[4] = auVar23._0_8_;
                puVar16[7] = auVar27._8_8_;
                puVar16[6] = auVar27._0_8_;
                puVar16[1] = auVar22._8_8_;
                *puVar16 = auVar22._0_8_;
                puVar16[3] = auVar24._8_8_;
                puVar16[2] = auVar24._0_8_;
                puVar16 = puVar16 + 0x10;
              } while (uVar15 != 0);
              if (uVar11 == uVar14) goto LAB_00b89abc;
              if ((uVar11 & 0x18) == 0) {
                uVar15 = uVar14 | 1;
                goto LAB_00b89a98;
              }
            }
            auVar5 = _DAT_004c4f40;
            auVar4 = _DAT_004c4d70;
            uVar18 = uVar11 & 0xfffffffffffffff8;
            uVar15 = uVar18 | 1;
            lVar10 = uVar14 - uVar18;
            puVar16 = (undefined8 *)(param_8 + uVar14);
            puVar19 = (ulong *)((long)local_70 + uVar14);
            do {
              lVar10 = lVar10 + 8;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = *puVar19;
              auVar20 = a64_TBL(ZEXT816(0),auVar20,ZEXT816(0),auVar4);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *puVar19;
              auVar21 = a64_TBL(ZEXT816(0),auVar21,ZEXT816(0),auVar5);
              puVar16[1] = auVar21._8_8_;
              *puVar16 = auVar21._0_8_;
              puVar16[3] = auVar20._8_8_;
              puVar16[2] = auVar20._0_8_;
              puVar16 = puVar16 + 4;
              puVar19 = puVar19 + 1;
            } while (lVar10 != 0);
            if (uVar11 == uVar18) goto LAB_00b89abc;
          }
LAB_00b89a98:
          lVar10 = uVar9 - uVar15;
          pbVar12 = (byte *)((long)local_70 + (uVar15 - 1));
          puVar13 = param_8 + (uVar15 - 1);
          do {
            lVar10 = lVar10 + -1;
            *puVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (lVar10 != 0);
        }
LAB_00b89abc:
        bVar6 = true;
        goto LAB_00b89898;
      }
    }
  }
  bVar6 = false;
LAB_00b89898:
  if (*(long *)(lVar3 + 0x28) != local_70[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
}


