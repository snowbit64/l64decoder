// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypeColors
// Entry Point: 00871e24
// Size: 392 bytes
// Signature: undefined __thiscall applyTypeColors(DensityMapVisualizationOverlay * this, int param_1, int param_2, int param_3, int param_4, DensityMapModifier * param_5, uint param_6, uint param_7, uint param_8, uint * param_9)


/* DensityMapVisualizationOverlay::applyTypeColors(int, int, int, int, DensityMapModifier&, unsigned
   int, unsigned int, unsigned int, unsigned int*) */

void __thiscall
DensityMapVisualizationOverlay::applyTypeColors
          (DensityMapVisualizationOverlay *this,int param_1,int param_2,int param_3,int param_4,
          DensityMapModifier *param_5,uint param_6,uint param_7,uint param_8,uint *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  if (0 < param_4) {
    iVar2 = param_4 + param_2;
    do {
      uVar8 = param_1;
      if (0 < param_3) {
        do {
          if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
            lVar7 = **(long **)(param_5 + 0x18);
            uVar3 = (uVar8 + param_2 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
            uVar6 = (ulong)(uVar3 >> 3) & 0xffff;
            lVar5 = *(long *)(lVar7 + (ulong)(uVar3 >> 0x13) * 8);
            if ((uint)uVar6 < 0xfffd) {
              uVar4 = *(uint *)(lVar5 + uVar6);
            }
            else {
              uVar4 = (uVar3 >> 3) + 1;
              uVar1 = (uVar3 >> 3) + 2;
              uVar4 = (uint)CONCAT12(*(undefined *)
                                      (*(long *)(lVar7 + (ulong)(uVar1 >> 0x10) * 8) +
                                      ((ulong)uVar1 & 0xffff)),
                                     CONCAT11(*(undefined *)
                                               (*(long *)(lVar7 + (ulong)(uVar4 >> 0x10) * 8) +
                                               ((ulong)uVar4 & 0xffff)),
                                              *(undefined *)(lVar5 + uVar6)));
            }
            uVar3 = uVar4 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(param_6 & 0x1f)) & 0xffffU;
          }
          else {
            uVar3 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(param_5 + 0x10),uVar8,param_2,0,param_6);
          }
          if (((uVar3 & param_7) - 1 < 0x3f) &&
             (*(uint *)(this + (ulong)(uVar3 & param_7) * 4 + (ulong)param_8 * 0x108 + 0x88) != 0))
          {
            *param_9 = *(uint *)(this + (ulong)(uVar3 & param_7) * 4 + (ulong)param_8 * 0x108 + 0x88
                                );
            return;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < param_3 + param_1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar2);
  }
  return;
}


