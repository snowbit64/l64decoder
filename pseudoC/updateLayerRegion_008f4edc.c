// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLayerRegion
// Entry Point: 008f4edc
// Size: 756 bytes
// Signature: undefined __thiscall updateLayerRegion(TerrainLodTexture * this, uint param_1, int param_2, int param_3, uint param_4, uint param_5, float * param_6)


/* TerrainLodTexture::updateLayerRegion(unsigned int, int, int, unsigned int, unsigned int, float
   const*) */

void __thiscall
TerrainLodTexture::updateLayerRegion
          (TerrainLodTexture *this,uint param_1,int param_2,int param_3,uint param_4,uint param_5,
          float *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  
  uVar6 = *(uint *)(this + 8);
  uVar14 = param_3 & (param_3 >> 0x1f ^ 0xffffffffU);
  uVar4 = uVar6;
  if ((int)(param_4 + param_2) <= (int)uVar6) {
    uVar4 = param_4 + param_2;
  }
  uVar13 = (ulong)uVar4;
  uVar5 = uVar6;
  if ((int)(param_5 + param_3) <= (int)uVar6) {
    uVar5 = param_5 + param_3;
  }
  if ((int)uVar14 < (int)uVar5) {
    uVar3 = param_2 & (param_2 >> 0x1f ^ 0xffffffffU);
    uVar16 = (ulong)uVar3;
    iVar17 = uVar6 * uVar14;
    uVar11 = uVar13 - uVar16;
    iVar10 = (uVar14 - param_3) * param_4;
    uVar9 = (uVar3 + iVar10) - param_2;
    uVar12 = uVar11 & 0xfffffffffffffff8;
    iVar15 = 0;
    iVar1 = uVar3 + iVar17;
    iVar10 = iVar10 - param_2;
    uVar2 = uVar9;
    do {
      if ((int)uVar3 < (int)uVar4) {
        lVar19 = *(long *)(this + 0x18);
        uVar8 = (undefined)param_1;
        uVar21 = uVar16;
        if (7 < uVar11) {
          uVar20 = iVar1 + uVar6 * iVar15;
          uVar23 = uVar9 + iVar15 * param_4;
          uVar18 = (uint)(~uVar16 + uVar13);
          if ((((CARRY4(uVar20,uVar18) == false) && (~uVar16 + uVar13 >> 0x20 == 0)) &&
              (CARRY4(uVar23,uVar18) == false)) &&
             ((param_6 + ((uVar13 + uVar23) - uVar16) <= (float *)(lVar19 + (ulong)uVar20 * 2) ||
              ((float *)(lVar19 + uVar16 * -2 + (uVar13 + uVar20) * 2 + -1) <= param_6 + uVar23))))
          {
            iVar7 = uVar14 * uVar6;
            uVar21 = uVar12;
            uVar20 = uVar2;
            uVar23 = uVar3;
            iVar24 = uVar3 + 1;
            iVar25 = uVar3 + 2;
            iVar26 = uVar3 + 3;
            iVar27 = uVar3 + 4;
            iVar28 = uVar3 + 5;
            iVar29 = uVar3 + 6;
            iVar30 = uVar3 + 7;
            do {
              auVar31 = NEON_fcmgt(*(undefined (*) [16])(param_6 + uVar20),0,4);
              auVar32 = ((undefined (*) [16])(param_6 + uVar20))[1];
              if ((auVar31 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(iVar7 + uVar23) * 2) = uVar8;
              }
              if ((auVar31 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar24) * 2) = uVar8;
              }
              if ((auVar31 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar25) * 2) = uVar8;
              }
              if ((auVar31 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar26) * 2) = uVar8;
              }
              auVar32 = NEON_fcmgt(auVar32,0,4);
              if ((auVar32 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar27) * 2) = uVar8;
              }
              if ((auVar32 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar28) * 2) = uVar8;
              }
              if ((auVar32 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar29) * 2) = uVar8;
              }
              if ((auVar32 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                *(undefined *)(lVar19 + (ulong)(uint)(iVar7 + iVar30) * 2) = uVar8;
              }
              uVar23 = uVar23 + 8;
              iVar24 = iVar24 + 8;
              iVar25 = iVar25 + 8;
              iVar26 = iVar26 + 8;
              uVar20 = uVar20 + 8;
              iVar27 = iVar27 + 8;
              iVar28 = iVar28 + 8;
              iVar29 = iVar29 + 8;
              iVar30 = iVar30 + 8;
              uVar21 = uVar21 - 8;
            } while (uVar21 != 0);
            uVar21 = uVar12 + uVar16;
            if (uVar11 == uVar12) goto LAB_008f4f80;
          }
        }
        uVar20 = iVar17 + (int)uVar21;
        uVar23 = iVar10 + (int)uVar21;
        lVar22 = uVar13 - uVar21;
        do {
          if (0.0 < param_6[uVar23]) {
            *(undefined *)(lVar19 + (ulong)uVar20 * 2) = uVar8;
          }
          uVar20 = uVar20 + 1;
          uVar23 = uVar23 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
LAB_008f4f80:
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 1;
      uVar2 = uVar2 + param_4;
      iVar17 = iVar17 + uVar6;
      iVar10 = iVar10 + param_4;
    } while (uVar14 != uVar5);
  }
  this[0x30] = (TerrainLodTexture)0x1;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  return;
}


