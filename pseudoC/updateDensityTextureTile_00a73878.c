// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDensityTextureTile
// Entry Point: 00a73878
// Size: 1032 bytes
// Signature: undefined __thiscall updateDensityTextureTile(TerrainLayerTransformGroup * this, uint param_1, int param_2, int param_3, int param_4, int param_5, IRenderDevice * param_6)


/* TerrainLayerTransformGroup::updateDensityTextureTile(unsigned int, int, int, int, int,
   IRenderDevice*) */

uint __thiscall
TerrainLayerTransformGroup::updateDensityTextureTile
          (TerrainLayerTransformGroup *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,IRenderDevice *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  PIXEL_FORMAT PVar7;
  void *__s;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  uint *puVar24;
  void *local_c0;
  uint local_b8;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar18 = (ulong)param_1;
  iVar5 = DensityMap::getSquareSize();
  uVar19 = *(uint *)(this + 0x6b0);
  uVar11 = (ulong)*(uint *)(this + uVar18 * 4 + 0x6a0);
  __s = operator_new__((ulong)(uVar19 * uVar19 * *(uint *)(this + uVar18 * 4 + 0x6a0)));
  memset(__s,0,(ulong)uVar19 * (ulong)uVar19 * uVar11);
  uVar19 = 0;
  if (param_3 < param_5) {
    uVar19 = 0;
    uVar3 = iVar5 - 1;
    uVar13 = param_3;
    do {
      uVar22 = uVar3;
      if ((int)uVar13 <= (int)uVar3) {
        uVar22 = uVar13;
      }
      uVar2 = 0;
      if (-1 < (int)uVar13) {
        uVar2 = uVar22;
      }
      if (param_2 < param_4) {
        uVar10 = *(uint *)(this + uVar18 * 4 + 0x6d0);
        iVar5 = uVar13 - param_3;
        uVar22 = param_2;
        uVar17 = uVar10;
        do {
          uVar20 = uVar3;
          if ((int)uVar22 <= (int)uVar3) {
            uVar20 = uVar22;
          }
          uVar21 = 0;
          if (-1 < (int)uVar22) {
            uVar21 = uVar20;
          }
          if (uVar17 == 0) {
            uVar21 = 0;
            uVar20 = 0;
            if ((int)uVar11 == 1) goto LAB_00a7399c;
LAB_00a73b08:
            if ((int)uVar11 == 2) {
              *(short *)((long)__s +
                        (ulong)((uVar22 - param_2) + *(int *)(this + 0x6b0) * iVar5) * 2) =
                   (short)uVar21;
            }
            else {
              *(uint *)((long)__s + (ulong)((uVar22 - param_2) + *(int *)(this + 0x6b0) * iVar5) * 4
                       ) = uVar21;
            }
          }
          else {
            uVar11 = 0;
            uVar20 = 0;
            uVar17 = 0;
            puVar24 = (uint *)(this + uVar18 * 0x20 + 0x6dc);
            do {
              uVar9 = *puVar24;
              lVar12 = *(long *)(this + 0x220);
              uVar6 = puVar24[-1] + *(int *)(*(long *)(this + 0x630) + 0x7c);
              if (*(ChunkedBitSquare **)(lVar12 + 0x10) == (ChunkedBitSquare *)0x0) {
                lVar16 = **(long **)(lVar12 + 0x18);
                uVar6 = uVar6 + (uVar21 + *(int *)(lVar12 + 0x24) * uVar2) * *(int *)(lVar12 + 0x2c)
                ;
                uVar15 = (ulong)(uVar6 >> 3) & 0xffff;
                lVar12 = *(long *)(lVar16 + (ulong)(uVar6 >> 0x13) * 8);
                if ((uint)uVar15 < 0xfffd) {
                  uVar14 = *(uint *)(lVar12 + uVar15);
                }
                else {
                  uVar14 = (uVar6 >> 3) + 1;
                  uVar1 = (uVar6 >> 3) + 2;
                  uVar14 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar16 + (ulong)(uVar1 >> 0x10) * 8) +
                                           ((ulong)uVar1 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar16 + (ulong)(uVar14 >> 0x10) * 8)
                                                    + ((ulong)uVar14 & 0xffff)),
                                                   *(undefined *)(lVar12 + uVar15)));
                }
                uVar6 = uVar14 >> (ulong)(uVar6 & 7) & (-1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU) &
                        0xffff;
              }
              else {
                uVar6 = ChunkedBitSquare::readBits
                                  (*(ChunkedBitSquare **)(lVar12 + 0x10),uVar21,uVar2,uVar6,uVar9);
                uVar9 = *puVar24;
                uVar10 = *(uint *)(this + uVar18 * 4 + 0x6d0);
              }
              uVar14 = 0;
              if (uVar6 != 0) {
                uVar14 = uVar6 << (ulong)(uVar17 & 0x1f);
              }
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = 1 << (ulong)((uint)uVar11 & 0x1f);
              }
              uVar20 = uVar14 | uVar20;
              uVar19 = uVar1 | uVar19;
              uVar17 = uVar9 + uVar17;
              uVar11 = uVar11 + 1;
              puVar24 = puVar24 + 2;
            } while (uVar11 < uVar10);
            uVar11 = (ulong)*(uint *)(this + uVar18 * 4 + 0x6a0);
            uVar21 = uVar20;
            uVar17 = uVar10;
            if (*(uint *)(this + uVar18 * 4 + 0x6a0) != 1) goto LAB_00a73b08;
LAB_00a7399c:
            *(char *)((long)__s + (ulong)((uVar22 - param_2) + *(int *)(this + 0x6b0) * iVar5)) =
                 (char)uVar20;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != param_4);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_5);
  }
  uVar13 = *(int *)(this + 0x6ac) - 1U & param_2;
  plVar23 = *(long **)(*(long *)(this + uVar18 * 8 + 0x6c0) + 0x68);
  uVar3 = *(int *)(this + 0x6ac) - 1U & param_3;
  uVar8 = (**(code **)(*(long *)param_6 + 0x138))(param_6);
  (**(code **)(*plVar23 + 0x68))
            (plVar23,uVar8,0,0,uVar13,uVar3,*(int *)(this + 0x6b0) + uVar13,
             *(int *)(this + 0x6b0) + uVar3,0,1,3,&local_c0);
  PVar7 = (**(code **)(*plVar23 + 0x18))(plVar23);
  PixelFormatUtil::convertPixelFormat
            (__s,0,0,PVar7,local_c0,local_b8,0,PVar7,*(uint *)(this + 0x6b0),*(uint *)(this + 0x6b0)
             ,1);
  uVar8 = (**(code **)(*(long *)param_6 + 0x138))(param_6);
  (**(code **)(*plVar23 + 0x70))(plVar23,uVar8,&local_c0);
  operator_delete__(__s);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}


