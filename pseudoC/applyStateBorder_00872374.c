// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyStateBorder
// Entry Point: 00872374
// Size: 856 bytes
// Signature: undefined __thiscall applyStateBorder(DensityMapVisualizationOverlay * this, int param_1, int param_2, int param_3, int param_4, DensityMapModifier * param_5, uint param_6, uint * param_7)


/* DensityMapVisualizationOverlay::applyStateBorder(int, int, int, int, DensityMapModifier&,
   unsigned int, unsigned int*) */

void __thiscall
DensityMapVisualizationOverlay::applyStateBorder
          (DensityMapVisualizationOverlay *this,int param_1,int param_2,int param_3,int param_4,
          DensityMapModifier *param_5,uint param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_8c;
  
  iVar7 = (**(code **)(**(long **)(param_5 + 8) + 0x48))();
  iVar8 = (**(code **)(**(long **)(param_5 + 8) + 0x50))();
  iVar5 = param_3;
  if (param_3 < 0) {
    iVar5 = param_3 + 1;
  }
  uVar2 = param_1 + (iVar5 >> 1);
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  iVar6 = *(int *)(this + 0x293b0);
  uVar3 = param_2 + (param_4 >> 1);
  iVar5 = uVar2 - iVar6;
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  iVar4 = iVar6 + uVar2;
  if ((param_3 & 1U) == 0) {
    local_8c = iVar7 + -1;
    if (iVar4 <= iVar7 + -1) {
      local_8c = iVar4;
    }
    uVar16 = uVar3 - iVar6;
    if ((int)uVar16 < 0) {
      uVar16 = 0xffffffff;
    }
    fVar20 = (float)uVar2 + 0.5;
    fVar21 = (float)uVar3 + 0.5;
    uVar11 = iVar8 - 1U;
    if ((int)(iVar6 + uVar3) <= (int)(iVar8 - 1U)) {
      uVar11 = iVar6 + uVar3;
    }
  }
  else {
    uVar16 = uVar3 - iVar6;
    local_8c = iVar7 + -1;
    if (iVar4 + -1 <= iVar7 + -1) {
      local_8c = iVar4 + -1;
    }
    uVar9 = (iVar6 + uVar3) - 1;
    if ((int)uVar16 < 0) {
      uVar16 = 0xffffffff;
    }
    fVar20 = (float)uVar2;
    fVar21 = (float)uVar3;
    uVar11 = iVar8 - 1U;
    if ((int)uVar9 <= (int)(iVar8 - 1U)) {
      uVar11 = uVar9;
    }
  }
  uVar9 = *(uint *)(this + 0x293a0);
  if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
    lVar15 = **(long **)(param_5 + 0x18);
    uVar9 = uVar9 + (uVar2 + *(int *)(param_5 + 0x24) * uVar3) * *(int *)(param_5 + 0x2c);
    uVar14 = (ulong)(uVar9 >> 3) & 0xffff;
    lVar13 = *(long *)(lVar15 + (ulong)(uVar9 >> 0x13) * 8);
    if ((uint)uVar14 < 0xfffd) {
      uVar18 = *(uint *)(lVar13 + uVar14);
    }
    else {
      uVar18 = (uVar9 >> 3) + 1;
      uVar17 = (uVar9 >> 3) + 2;
      uVar18 = (uint)CONCAT12(*(undefined *)
                               (*(long *)(lVar15 + (ulong)(uVar17 >> 0x10) * 8) +
                               ((ulong)uVar17 & 0xffff)),
                              CONCAT11(*(undefined *)
                                        (*(long *)(lVar15 + (ulong)(uVar18 >> 0x10) * 8) +
                                        ((ulong)uVar18 & 0xffff)),*(undefined *)(lVar13 + uVar14)));
    }
    uVar9 = uVar18 >> (ulong)(uVar9 & 7) &
            (-1 << (ulong)(*(uint *)(this + 0x293a4) & 0x1f) ^ 0xffffffffU) & 0xffff;
  }
  else {
    uVar9 = ChunkedBitSquare::readBits
                      (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar3,uVar9,
                       *(uint *)(this + 0x293a4));
  }
  if ((int)uVar16 < (int)uVar11) {
    fVar22 = *(float *)(this + 0x293b4);
    uVar18 = uVar16;
    do {
      uVar18 = uVar18 + 1;
      uVar16 = uVar16 + 1;
      if (iVar5 < local_8c) {
        uVar17 = iVar5 + 1;
        do {
          if ((uVar2 != uVar17) || (uVar16 != uVar3)) {
            uVar10 = *(uint *)(this + 0x293a0);
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar15 = **(long **)(param_5 + 0x18);
              uVar10 = uVar10 + (uVar17 + uVar18 * *(int *)(param_5 + 0x24)) *
                                *(int *)(param_5 + 0x2c);
              uVar14 = (ulong)(uVar10 >> 3) & 0xffff;
              lVar13 = *(long *)(lVar15 + (ulong)(uVar10 >> 0x13) * 8);
              if ((uint)uVar14 < 0xfffd) {
                uVar12 = *(uint *)(lVar13 + uVar14);
              }
              else {
                uVar12 = (uVar10 >> 3) + 1;
                uVar1 = (uVar10 >> 3) + 2;
                uVar12 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar15 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar15 + (ulong)(uVar12 >> 0x10) * 8) +
                                                  ((ulong)uVar12 & 0xffff)),
                                                 *(undefined *)(lVar13 + uVar14)));
              }
              uVar10 = uVar12 >> (ulong)(uVar10 & 7) &
                       (-1 << (ulong)(*(uint *)(this + 0x293a4) & 0x1f) ^ 0xffffffffU) & 0xffff;
            }
            else {
              uVar10 = ChunkedBitSquare::readBits
                                 (*(ChunkedBitSquare **)(param_5 + 0x10),uVar17,uVar16,uVar10,
                                  *(uint *)(this + 0x293a4));
            }
            if ((uVar9 != uVar10) &&
               (fVar19 = (float)NEON_fmadd((float)uVar17 - fVar20,(float)uVar17 - fVar20,
                                           ((float)uVar16 - fVar21) * ((float)uVar16 - fVar21)),
               fVar19 < fVar22)) {
              *param_7 = *(uint *)(this + 0x293b8);
              return;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 - local_8c != 1);
      }
    } while (uVar16 != uVar11);
  }
  return;
}


