// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBackLocalHeightmap
// Entry Point: 008604a0
// Size: 592 bytes
// Signature: undefined __thiscall writeBackLocalHeightmap(DensityMapHeightUpdater * this, ushort * param_1, int param_2, int param_3, uint param_4, DensityMapModifier * param_5, int param_6, int param_7)


/* DensityMapHeightUpdater::writeBackLocalHeightmap(unsigned short const*, int, int, unsigned int,
   DensityMapModifier*, int, int) */

void __thiscall
DensityMapHeightUpdater::writeBackLocalHeightmap
          (DensityMapHeightUpdater *this,ushort *param_1,int param_2,int param_3,uint param_4,
          DensityMapModifier *param_5,int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ChunkedBitSquare *this_00;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  ushort *puVar15;
  
  uVar8 = DensityMap::getSquareSize();
  uVar5 = *(uint *)(this + 0xa4c);
  uVar3 = *(uint *)(*(long *)(this + 0xa40) + 0x88);
  uVar4 = *(uint *)(*(long *)(this + 0xa40) + 0x8c);
  uVar6 = *(uint *)(this + 0xa48);
  uVar9 = (**(code **)(**(long **)(param_5 + 8) + 0x58))();
  if (2 < param_3) {
    uVar12 = 1;
    uVar10 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_2 << 1;
    puVar15 = (ushort *)((long)param_1 + uVar10 + 2);
    do {
      uVar1 = (int)uVar12 + param_7;
      puVar13 = puVar15;
      lVar14 = (ulong)(param_2 - 1) - 1;
      uVar11 = param_6 + 1;
      if (2 < param_2) {
        do {
          if ((uVar11 < uVar8) && (uVar1 < uVar8)) {
            uVar7 = *puVar13;
            if ((uVar7 >> 10 & 1) != 0) {
              if (uVar5 == 0) {
LAB_00860614:
                this_00 = *(ChunkedBitSquare **)(param_5 + 0x10);
              }
              else {
                uVar2 = 0;
                if ((uVar7 & 0x3ff) != 0) {
                  uVar2 = param_4;
                }
                if (*(ChunkedBitSquare **)(param_5 + 0x10) != (ChunkedBitSquare *)0x0) {
                  ChunkedBitSquare::writeBits
                            (*(ChunkedBitSquare **)(param_5 + 0x10),uVar11,uVar1,uVar6,uVar5,uVar2);
                  goto LAB_00860614;
                }
                DensityMapAccessUtil::writeBits
                          (*(BitVector **)(param_5 + 0x18),*(uint *)(param_5 + 0x2c),
                           *(uint *)(param_5 + 0x24),uVar11,uVar1,uVar6,uVar5,uVar2);
                this_00 = *(ChunkedBitSquare **)(param_5 + 0x10);
              }
              if (this_00 == (ChunkedBitSquare *)0x0) {
                DensityMapAccessUtil::writeBits
                          (*(BitVector **)(param_5 + 0x18),*(uint *)(param_5 + 0x2c),
                           *(uint *)(param_5 + 0x24),uVar11,uVar1,uVar3,uVar4,uVar7 & 0x3ff);
              }
              else {
                ChunkedBitSquare::writeBits(this_00,uVar11,uVar1,uVar3,uVar4,uVar7 & 0x3ff);
              }
            }
          }
          uVar11 = uVar11 + 1;
          puVar13 = puVar13 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar15 = (ushort *)((long)puVar15 + uVar10);
    } while (uVar12 != param_3 - 1);
  }
  uVar4 = (param_6 + param_2) - 1;
  uVar3 = uVar8;
  if ((int)uVar4 <= (int)uVar8) {
    uVar3 = uVar4;
  }
  uVar4 = (param_7 + param_3) - 1;
  if (param_6 + param_2 < 1) {
    uVar3 = 0;
  }
  if ((int)uVar4 <= (int)uVar8) {
    uVar8 = uVar4;
  }
  if (param_7 + param_3 < 1) {
    uVar8 = 0;
  }
  if (param_7 < 2) {
    param_7 = 1;
  }
  if (param_6 < 2) {
    param_6 = 1;
  }
  DensityMap::markDensityRegionDirty
            (*(DensityMap **)(param_5 + 8),param_6,param_7,uVar3,uVar8,0,uVar9,0xffffffff,true,false
             ,true);
  return;
}


