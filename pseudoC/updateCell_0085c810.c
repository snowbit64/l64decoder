// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCell
// Entry Point: 0085c810
// Size: 1232 bytes
// Signature: undefined __thiscall updateCell(DensityMapHeightUpdater * this, uint param_1, uint param_2, uint param_3, DensityMapModifier * param_4, DensityMapModifier * param_5, float param_6, float param_7)


/* DensityMapHeightUpdater::updateCell(unsigned int, unsigned int, unsigned int,
   DensityMapModifier*, DensityMapModifier*, float, float) */

void __thiscall
DensityMapHeightUpdater::updateCell
          (DensityMapHeightUpdater *this,uint param_1,uint param_2,uint param_3,
          DensityMapModifier *param_4,DensityMapModifier *param_5,float param_6,float param_7)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  long lVar16;
  short sVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  ChunkedBitSquare *this_00;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ushort *puVar25;
  uint uVar26;
  uint uVar27;
  ushort *puVar28;
  ushort *puVar29;
  ushort local_2184 [4226];
  long local_80;
  
  lVar16 = tpidr_el0;
  local_80 = *(long *)(lVar16 + 0x28);
  iVar13 = param_2 - 1;
  uVar19 = DensityMap::getSquareSize();
  uVar7 = *(uint *)(*(long *)(this + 0xa40) + 0x88);
  uVar8 = *(uint *)(*(long *)(this + 0xa40) + 0x8c);
  uVar9 = *(uint *)(this + 0xa4c);
  uVar10 = *(uint *)(this + 0xa48);
  uVar20 = (**(code **)(**(long **)(param_4 + 8) + 0x58))();
  uVar26 = param_3 + 2;
  uVar11 = *(uint *)(this + 0xc58);
  initLocalHeightmap(this,local_2184,uVar26,uVar26,uVar11,param_4,param_1 - 1,iVar13,
                     *(int *)(this + 0xc64) != 0,0,(OcclusionArea *)0x0,param_5,
                     *(uint *)(this + 0xc70),*(uint *)(this + 0xc74),param_6,param_7);
  uVar27 = param_3 + 1;
  uVar21 = (ulong)uVar27;
  sVar14 = (short)*(undefined4 *)(this + 0xc60);
  sVar17 = (short)*(int *)(this + 0xc5c);
  if (*(int *)(this + 0xc5c) * 0x10000 < 1) {
    if ((int)uVar27 < 2) goto LAB_0085cca4;
    bVar18 = false;
    puVar25 = local_2184 + 1;
    uVar23 = 1;
    do {
      puVar25 = (ushort *)
                ((long)puVar25 +
                (-(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar26 << 1));
      uVar3 = iVar13 + (int)uVar23;
      puVar28 = puVar25;
      lVar24 = uVar21 - 1;
      uVar27 = param_1;
      do {
        if ((((uVar27 < uVar19) && (uVar3 < uVar19)) && ((*puVar28 >> 0xe & 1) == 0)) &&
           (uVar4 = *puVar28 & 0x3ff, (int)sVar14 < (int)uVar4)) {
          sVar15 = (short)uVar4 + sVar17;
          sVar5 = sVar14;
          if (sVar14 <= sVar15) {
            sVar5 = sVar15;
          }
          uVar4 = (uint)sVar5;
          if (uVar9 == 0) {
LAB_0085cc1c:
            this_00 = *(ChunkedBitSquare **)(param_4 + 0x10);
            if (this_00 != (ChunkedBitSquare *)0x0) goto LAB_0085cc24;
LAB_0085cb74:
            DensityMapAccessUtil::writeBits
                      (*(BitVector **)(param_4 + 0x18),*(uint *)(param_4 + 0x2c),
                       *(uint *)(param_4 + 0x24),uVar27,uVar3,uVar7,uVar8,uVar4);
          }
          else {
            uVar6 = uVar11;
            if ((int)uVar4 < 1) {
              uVar6 = 0;
            }
            if (*(ChunkedBitSquare **)(param_4 + 0x10) != (ChunkedBitSquare *)0x0) {
              ChunkedBitSquare::writeBits
                        (*(ChunkedBitSquare **)(param_4 + 0x10),uVar27,uVar3,uVar10,uVar9,uVar6);
              goto LAB_0085cc1c;
            }
            DensityMapAccessUtil::writeBits
                      (*(BitVector **)(param_4 + 0x18),*(uint *)(param_4 + 0x2c),
                       *(uint *)(param_4 + 0x24),uVar27,uVar3,uVar10,uVar9,uVar6);
            this_00 = *(ChunkedBitSquare **)(param_4 + 0x10);
            if (this_00 == (ChunkedBitSquare *)0x0) goto LAB_0085cb74;
LAB_0085cc24:
            ChunkedBitSquare::writeBits(this_00,uVar27,uVar3,uVar7,uVar8,uVar4);
          }
          bVar18 = true;
        }
        uVar27 = uVar27 + 1;
        puVar28 = puVar28 + 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar21);
  }
  else {
    if ((int)uVar27 < 2) goto LAB_0085cca4;
    uVar22 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar26 << 1;
    puVar28 = local_2184;
    bVar18 = false;
    puVar25 = puVar28 + (long)(int)uVar26 * 2;
    uVar23 = 1;
    puVar29 = puVar28;
    do {
      puVar29 = (ushort *)((long)puVar29 + uVar22);
      lVar24 = 0;
      uVar27 = iVar13 + (int)uVar23;
      uVar23 = uVar23 + 1;
      uVar26 = param_1;
      do {
        if ((((uVar26 < uVar19) && (uVar27 < uVar19)) &&
            ((uVar12 = *(ushort *)((long)puVar29 + lVar24 + 2), (uVar12 >> 0xe & 1) == 0 &&
             ((uVar3 = uVar12 & 0x3ff, (int)uVar3 < (int)sVar14 &&
              ((((ushort *)((long)puVar29 + lVar24))[2] & 0x3000) != 0x1000)))))) &&
           (((*(ushort *)((long)puVar29 + lVar24) & 0x3000) != 0x1000 &&
            (((((puVar1 = (ushort *)((long)puVar25 + lVar24), (puVar1[1] & 0x3000) != 0x1000 &&
                (puVar2 = (ushort *)((long)puVar28 + lVar24), (puVar2[1] & 0x3000) != 0x1000)) &&
               ((puVar1[2] & 0x3000) != 0x1000)) &&
              (((puVar2[2] & 0x3000) != 0x1000 && ((*puVar1 & 0x3000) != 0x1000)))) &&
             ((*puVar2 & 0x3000) != 0x1000)))))) {
          sVar15 = (short)uVar3 + sVar17;
          sVar5 = sVar14;
          if (sVar15 <= sVar14) {
            sVar5 = sVar15;
          }
          if (uVar9 != 0) {
            if (*(ChunkedBitSquare **)(param_4 + 0x10) == (ChunkedBitSquare *)0x0) {
              DensityMapAccessUtil::writeBits
                        (*(BitVector **)(param_4 + 0x18),*(uint *)(param_4 + 0x2c),
                         *(uint *)(param_4 + 0x24),uVar26,uVar27,uVar10,uVar9,uVar11);
            }
            else {
              ChunkedBitSquare::writeBits
                        (*(ChunkedBitSquare **)(param_4 + 0x10),uVar26,uVar27,uVar10,uVar9,uVar11);
            }
          }
          if (*(ChunkedBitSquare **)(param_4 + 0x10) == (ChunkedBitSquare *)0x0) {
            DensityMapAccessUtil::writeBits
                      (*(BitVector **)(param_4 + 0x18),*(uint *)(param_4 + 0x2c),
                       *(uint *)(param_4 + 0x24),uVar26,uVar27,uVar7,uVar8,(int)sVar5);
          }
          else {
            ChunkedBitSquare::writeBits
                      (*(ChunkedBitSquare **)(param_4 + 0x10),uVar26,uVar27,uVar7,uVar8,(int)sVar5);
          }
          bVar18 = true;
        }
        uVar26 = uVar26 + 1;
        lVar24 = lVar24 + 2;
      } while (uVar21 * 2 + -2 != lVar24);
      puVar28 = (ushort *)((long)puVar28 + uVar22);
      puVar25 = (ushort *)((long)puVar25 + uVar22);
    } while (uVar23 != uVar21);
  }
  if (bVar18) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_4 + 8),param_1,param_2,param_3 + param_1,param_3 + param_2,0,
               uVar20,0xffffffff,true,false,true);
  }
LAB_0085cca4:
  if (*(long *)(lVar16 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


