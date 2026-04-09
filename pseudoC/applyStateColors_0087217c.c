// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyStateColors
// Entry Point: 0087217c
// Size: 504 bytes
// Signature: undefined __thiscall applyStateColors(DensityMapVisualizationOverlay * this, int param_1, int param_2, int param_3, int param_4, DensityMapModifier * param_5, DensityMapModifier * param_6, uint param_7, uint param_8, uint * param_9)


/* DensityMapVisualizationOverlay::applyStateColors(int, int, int, int, DensityMapModifier&,
   DensityMapModifier*, unsigned int, unsigned int, unsigned int*) */

void __thiscall
DensityMapVisualizationOverlay::applyStateColors
          (DensityMapVisualizationOverlay *this,int param_1,int param_2,int param_3,int param_4,
          DensityMapModifier *param_5,DensityMapModifier *param_6,uint param_7,uint param_8,
          uint *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  DensityMapVisualizationOverlay *pDVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  if (0 < param_4) {
    iVar2 = param_4 + param_2;
    uVar3 = *(uint *)(this + (ulong)param_8 * 0x40d8 + 0xcda0);
    do {
      uVar10 = param_1;
      if (0 < param_3) {
        do {
          if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
            lVar9 = **(long **)(param_5 + 0x18);
            uVar4 = (uVar10 + *(int *)(param_5 + 0x24) * param_2) * *(int *)(param_5 + 0x2c);
            uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
            lVar7 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
            if ((uint)uVar8 < 0xfffd) {
              uVar5 = *(uint *)(lVar7 + uVar8);
            }
            else {
              uVar5 = (uVar4 >> 3) + 1;
              uVar1 = (uVar4 >> 3) + 2;
              uVar5 = (uint)CONCAT12(*(undefined *)
                                      (*(long *)(lVar9 + (ulong)(uVar1 >> 0x10) * 8) +
                                      ((ulong)uVar1 & 0xffff)),
                                     CONCAT11(*(undefined *)
                                               (*(long *)(lVar9 + (ulong)(uVar5 >> 0x10) * 8) +
                                               ((ulong)uVar5 & 0xffff)),
                                              *(undefined *)(lVar7 + uVar8)));
            }
            uVar4 = uVar5 >> (ulong)(uVar4 & 7) & ~(-1 << (ulong)(param_7 & 0x1f)) & 0xffffU;
          }
          else {
            uVar4 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(param_5 + 0x10),uVar10,param_2,0,param_7);
          }
          uVar5 = uVar4;
          if (param_6 != (DensityMapModifier *)0x0) {
            uVar5 = DensityMapModifier::readValue(param_6,uVar10,param_2);
          }
          pDVar6 = this + (ulong)param_8 * 0x40d8 + 0x8cec;
          uVar8 = (ulong)uVar3;
          if (uVar3 != 0) {
            do {
              if ((((*(uint *)(pDVar6 + -0xc) == 0) || ((*(uint *)(pDVar6 + -0xc) & uVar5) != 0)) &&
                  (uVar1 = uVar4 >> ((ulong)*(uint *)(pDVar6 + -8) & 0x3f) & *(uint *)(pDVar6 + -4),
                  uVar1 < 0x100)) && (*(uint *)(pDVar6 + (ulong)uVar1 * 4) != 0)) {
                *param_9 = *(uint *)(pDVar6 + (ulong)uVar1 * 4);
                return;
              }
              uVar8 = uVar8 - 1;
              pDVar6 = pDVar6 + 0x40c;
            } while (uVar8 != 0);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < param_3 + param_1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar2);
  }
  return;
}


