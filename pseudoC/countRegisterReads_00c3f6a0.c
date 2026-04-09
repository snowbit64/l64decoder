// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: countRegisterReads
// Entry Point: 00c3f6a0
// Size: 212 bytes
// Signature: undefined __thiscall countRegisterReads(IR_Section * this, uint param_1, uint param_2)


/* IR_Section::countRegisterReads(unsigned int, unsigned int) const */

int __thiscall IR_Section::countRegisterReads(IR_Section *this,uint param_1,uint param_2)

{
  undefined (*pauVar1) [16];
  long lVar2;
  uint uVar3;
  undefined auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined (*pauVar12) [16];
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  uVar5 = (ulong)param_2;
  uVar6 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
  if (uVar5 < uVar6) {
    iVar14 = 0;
    do {
      lVar7 = *(long *)(*(long *)(this + 0x20) + uVar5 * 8);
      uVar3 = *(uint *)(lVar7 + 4);
      uVar9 = (ulong)uVar3 & 0xffff;
      if ((uint)uVar9 != 0) {
        lVar2 = (ulong)(uVar3 >> 0x10) + 2;
        if ((uint)uVar9 < 8) {
          uVar11 = 0;
        }
        else {
          iVar16 = 0;
          iVar17 = 0;
          uVar11 = (ulong)uVar3 & 0xfff8;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          pauVar12 = (undefined (*) [16])(lVar7 + lVar2 * 4 + 0x10);
          iVar15 = 0;
          uVar13 = uVar11;
          do {
            pauVar1 = pauVar12 + -1;
            auVar4 = *pauVar12;
            pauVar12 = pauVar12 + 2;
            uVar13 = uVar13 - 8;
            auVar22._4_4_ = param_1;
            auVar22._0_4_ = param_1;
            auVar22._8_4_ = param_1;
            auVar22._12_4_ = param_1;
            auVar22 = NEON_cmeq(*pauVar1,auVar22,4);
            auVar23._4_4_ = param_1;
            auVar23._0_4_ = param_1;
            auVar23._8_4_ = param_1;
            auVar23._12_4_ = param_1;
            auVar23 = NEON_cmeq(auVar4,auVar23,4);
            iVar14 = iVar14 - auVar22._0_4_;
            iVar15 = iVar15 - auVar22._4_4_;
            iVar16 = iVar16 - auVar22._8_4_;
            iVar17 = iVar17 - auVar22._12_4_;
            iVar18 = iVar18 - auVar23._0_4_;
            iVar19 = iVar19 - auVar23._4_4_;
            iVar20 = iVar20 - auVar23._8_4_;
            iVar21 = iVar21 - auVar23._12_4_;
          } while (uVar13 != 0);
          iVar14 = iVar18 + iVar14 + iVar19 + iVar15 + iVar20 + iVar16 + iVar21 + iVar17;
          if (uVar11 == uVar9) goto LAB_00c3f6c4;
        }
        lVar10 = uVar9 - uVar11;
        puVar8 = (uint *)(lVar7 + (lVar2 + uVar11) * 4);
        do {
          if (*puVar8 == param_1) {
            iVar14 = iVar14 + 1;
          }
          lVar10 = lVar10 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar10 != 0);
      }
LAB_00c3f6c4:
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < uVar6);
  }
  else {
    iVar14 = 0;
  }
  return iVar14;
}


