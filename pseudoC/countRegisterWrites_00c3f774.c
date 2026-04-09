// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: countRegisterWrites
// Entry Point: 00c3f774
// Size: 204 bytes
// Signature: undefined __thiscall countRegisterWrites(IR_Section * this, uint param_1, uint param_2)


/* IR_Section::countRegisterWrites(unsigned int, unsigned int) const */

int __thiscall IR_Section::countRegisterWrites(IR_Section *this,uint param_1,uint param_2)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  undefined auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined (*pauVar11) [16];
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  
  uVar4 = (ulong)param_2;
  uVar5 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
  if (uVar4 < uVar5) {
    iVar13 = 0;
    do {
      lVar6 = *(long *)(*(long *)(this + 0x20) + uVar4 * 8);
      uVar2 = *(uint *)(lVar6 + 4);
      if (0xffff < uVar2) {
        uVar8 = (ulong)(uVar2 >> 0x10);
        if (uVar2 < 0x80000) {
          uVar10 = 0;
        }
        else {
          iVar15 = 0;
          iVar16 = 0;
          uVar10 = uVar8 & 0xfff8;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          pauVar11 = (undefined (*) [16])(lVar6 + 0x18);
          iVar14 = 0;
          uVar12 = uVar10;
          do {
            pauVar1 = pauVar11 + -1;
            auVar3 = *pauVar11;
            pauVar11 = pauVar11 + 2;
            uVar12 = uVar12 - 8;
            auVar21._4_4_ = param_1;
            auVar21._0_4_ = param_1;
            auVar21._8_4_ = param_1;
            auVar21._12_4_ = param_1;
            auVar21 = NEON_cmeq(*pauVar1,auVar21,4);
            auVar22._4_4_ = param_1;
            auVar22._0_4_ = param_1;
            auVar22._8_4_ = param_1;
            auVar22._12_4_ = param_1;
            auVar22 = NEON_cmeq(auVar3,auVar22,4);
            iVar13 = iVar13 - auVar21._0_4_;
            iVar14 = iVar14 - auVar21._4_4_;
            iVar15 = iVar15 - auVar21._8_4_;
            iVar16 = iVar16 - auVar21._12_4_;
            iVar17 = iVar17 - auVar22._0_4_;
            iVar18 = iVar18 - auVar22._4_4_;
            iVar19 = iVar19 - auVar22._8_4_;
            iVar20 = iVar20 - auVar22._12_4_;
          } while (uVar12 != 0);
          iVar13 = iVar17 + iVar13 + iVar18 + iVar14 + iVar19 + iVar15 + iVar20 + iVar16;
          if (uVar10 == uVar8) goto LAB_00c3f798;
        }
        lVar9 = uVar8 - uVar10;
        puVar7 = (uint *)(lVar6 + uVar10 * 4 + 8);
        do {
          if (*puVar7 == param_1) {
            iVar13 = iVar13 + 1;
          }
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar9 != 0);
      }
LAB_00c3f798:
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < uVar5);
  }
  else {
    iVar13 = 0;
  }
  return iVar13;
}


