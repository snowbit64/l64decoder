// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: smoothHeightAtWorldPos
// Entry Point: 00861184
// Size: 1732 bytes
// Signature: undefined __thiscall smoothHeightAtWorldPos(DensityMapHeightUpdater * this, float param_1, float param_2, float param_3, float param_4, uint param_5, float param_6, float param_7, float param_8, uint param_9, OcclusionArea * param_10)


/* DensityMapHeightUpdater::smoothHeightAtWorldPos(float, float, float, float, unsigned int, float,
   float, float, unsigned int, DensityMapHeightUpdater::OcclusionArea const*) */

float __thiscall
DensityMapHeightUpdater::smoothHeightAtWorldPos
          (DensityMapHeightUpdater *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5,float param_6,float param_7,float param_8,uint param_9,
          OcclusionArea *param_10)

{
  uint uVar1;
  DensityMapModifier *pDVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  void **ppvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  void **ppvVar20;
  long lVar22;
  short *psVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  short *psVar27;
  uint uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  int local_338;
  int iStack_334;
  void *local_330;
  void **ppvStack_328;
  void **local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  float local_2fc;
  float fStack_2f8;
  ushort auStack_2f4 [290];
  long local_b0;
  void **ppvVar21;
  
  lVar5 = tpidr_el0;
  fVar30 = 0.0;
  local_b0 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(this + 0xa40);
  if (*(uint *)(lVar16 + 0x8c) != 0) {
    uVar4 = ~(-1 << (ulong)(*(uint *)(lVar16 + 0x8c) & 0x1f));
    fVar35 = (float)(ulong)uVar4;
    iVar25 = (int)((fVar35 * param_4) / *(float *)(lVar16 + 0x90));
    if (iVar25 != 0) {
      pDVar2 = *(DensityMapModifier **)(lVar16 + 0x58);
      uVar7 = DensityMap::getSquareSize();
      lVar16 = *(long *)(*(long *)(this + 0xa40) + 0x40);
      RawTransformGroup::updateWorldTransformation();
      fVar30 = param_2 - *(float *)(lVar16 + 0xec);
      fVar31 = param_1 - *(float *)(lVar16 + 0xe8);
      fVar34 = param_3 - *(float *)(lVar16 + 0xf0);
      uVar33 = NEON_fmadd(fVar31,*(undefined4 *)(lVar16 + 0xb8),fVar30 * *(float *)(lVar16 + 0xbc));
      uVar32 = NEON_fmadd(fVar31,*(undefined4 *)(lVar16 + 0xd8),fVar30 * *(float *)(lVar16 + 0xdc));
      fVar30 = (float)NEON_fmadd(fVar34,*(undefined4 *)(lVar16 + 0xc0),uVar33);
      fVar31 = (float)NEON_fmadd(fVar34,*(undefined4 *)(lVar16 + 0xe0),uVar32);
      TerrainDataPlane::localToDensityMap
                (*(TerrainDataPlane **)(this + 0xa40),fVar30,fVar31,&fStack_2f8,&local_2fc);
      uVar19 = (uint)(fStack_2f8 + 0.5);
      uVar28 = (uint)(local_2fc + 0.5);
      if (param_5 == 0) {
        fVar30 = 0.0;
        if ((uVar7 <= uVar19) || (uVar7 <= uVar28)) goto LAB_0086176c;
        if (*(ChunkedBitSquare **)(pDVar2 + 0x10) == (ChunkedBitSquare *)0x0) {
          lVar18 = **(long **)(pDVar2 + 0x18);
          uVar13 = *(uint *)(this + 0xa48) +
                   (uVar19 + *(int *)(pDVar2 + 0x24) * uVar28) * *(int *)(pDVar2 + 0x2c);
          uVar24 = (ulong)(uVar13 >> 3) & 0xffff;
          lVar22 = *(long *)(lVar18 + (ulong)(uVar13 >> 0x13) * 8);
          if ((uint)uVar24 < 0xfffd) {
            uVar17 = *(uint *)(lVar22 + uVar24);
          }
          else {
            uVar17 = (uVar13 >> 3) + 1;
            uVar1 = (uVar13 >> 3) + 2;
            uVar17 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar18 + (ulong)(uVar1 >> 0x10) * 8) +
                                     ((ulong)uVar1 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar18 + (ulong)(uVar17 >> 0x10) * 8) +
                                              ((ulong)uVar17 & 0xffff)),
                                             *(undefined *)(lVar22 + uVar24)));
          }
          param_5 = uVar17 >> (ulong)(uVar13 & 7) &
                    (-1 << (ulong)(*(uint *)(this + 0xa4c) & 0x1f) ^ 0xffffffffU) & 0xffff;
        }
        else {
          param_5 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(pDVar2 + 0x10),uVar19,uVar28,
                               *(uint *)(this + 0xa48),*(uint *)(this + 0xa4c));
        }
        if (param_5 == 0) goto LAB_0086176c;
      }
      fVar31 = (float)uVar7;
      iVar8 = BaseTerrain::getHeightMapSize();
      fVar30 = (float)BaseTerrain::getUnitsPerPixel();
      uVar7 = (uint)((fVar31 * param_7) / (fVar30 * (float)(ulong)(iVar8 - 1)));
      if (6 < uVar7) {
        uVar7 = 7;
      }
      iVar8 = BaseTerrain::getHeightMapSize();
      fVar30 = (float)BaseTerrain::getUnitsPerPixel();
      uVar13 = (uint)((fVar31 * param_8) / (fVar30 * (float)(ulong)(iVar8 - 1)));
      if (6 < uVar13) {
        uVar13 = 7;
      }
      uVar17 = uVar13;
      if (uVar13 <= uVar7) {
        uVar17 = uVar7;
      }
      iVar8 = uVar17 + 1;
      uVar1 = uVar17 << 1 | 1;
      initLocalHeightmap(this,auStack_2f4,uVar1,uVar1,param_5,pDVar2,uVar19 - iVar8,uVar28 - iVar8,
                         true,param_9,param_10,(DensityMapModifier *)0x0,0,0,0.0,0.0);
      lVar22 = *(long *)(*(long *)(this + 0xa40) + 0x40);
      RawTransformGroup::updateWorldTransformation();
      uVar32 = NEON_fmadd(param_1 - *(float *)(lVar22 + 0xe8),*(undefined4 *)(lVar22 + 200),
                          (param_2 - *(float *)(lVar22 + 0xec)) * *(float *)(lVar22 + 0xcc));
      fVar30 = (float)NEON_fmadd(param_3 - *(float *)(lVar22 + 0xf0),*(undefined4 *)(lVar22 + 0xd0),
                                 uVar32);
      psVar11 = (short *)operator_new__((ulong)(uVar1 * uVar1 * 2));
      uVar24 = 0;
      psVar27 = psVar11;
      do {
        psVar23 = psVar27;
        uVar26 = (ulong)uVar1;
        iVar14 = ~uVar17 + uVar19;
        do {
          iVar9 = BaseTerrain::getHeightMapSize();
          iVar10 = BaseTerrain::getHeightMapSize();
          fVar34 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                    ((BaseTerrain *)(lVar16 + 0x170),
                                     (float)(ulong)(uint)((iVar9 + -1) * iVar14) / fVar31,
                                     (float)(ulong)((iVar10 + -1) * (~uVar17 + uVar28 + (int)uVar24)
                                                   ) / fVar31);
          if (0.0 < fVar30 - fVar34) {
            sVar12 = (short)(int)(((fVar30 - fVar34) / *(float *)(*(long *)(this + 0xa40) + 0x90)) *
                                 fVar35);
          }
          else {
            sVar12 = 0;
          }
          iVar14 = iVar14 + 1;
          uVar26 = uVar26 - 1;
          *psVar23 = sVar12;
          psVar23 = psVar23 + 1;
        } while (uVar26 != 0);
        uVar24 = uVar24 + 1;
        psVar27 = (short *)((long)psVar27 + ((ulong)uVar17 << 2 | 2));
      } while (uVar24 != uVar1);
      iVar14 = (int)(*(float *)(this + (ulong)param_5 * 0x14 + 0x34) + 0.5);
      iVar9 = (int)(*(float *)(this + (ulong)param_5 * 0x14 + 0x34) * 1.414214 + 0.5);
      if (iVar14 < 2) {
        iVar14 = 1;
      }
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      iVar10 = BaseTerrain::getHeightMapSize();
      fVar30 = (float)BaseTerrain::getUnitsPerPixel();
      uStack_318 = 0;
      local_320 = (void **)0x0;
      local_308 = 0;
      local_310 = 0;
      ppvStack_328 = (void **)0x0;
      local_330 = (void *)0x0;
      uVar15 = (uint)((fVar31 * param_6) / (fVar30 * (float)(ulong)(iVar10 - 1)) + 0.5);
      uVar17 = uVar7;
      if ((int)uVar15 <= (int)uVar7) {
        uVar17 = uVar15;
      }
      iVar10 = iVar25;
      if (iVar25 < 1) {
        operator_delete__(psVar11);
      }
      else {
        iVar29 = iVar25;
        do {
                    /* try { // try from 00861564 to 008615ef has its CatchHandler @ 0086184c */
          uVar24 = removeFromHeightmap((deque *)&local_330,auStack_2f4,uVar1,uVar1,iVar8,iVar8,
                                       uVar17,uVar7,(short)iVar14,(short)iVar9,0,0,psVar11,
                                       &iStack_334,&local_338);
          if ((uVar24 & 1) == 0) break;
          uVar24 = addToHeightmap((deque *)&local_330,auStack_2f4,uVar1,uVar1,iStack_334,local_338,0
                                  ,uVar13,(short)iVar14,(short)iVar9,0,0,(short)uVar4,psVar11,true);
          if ((uVar24 & 1) == 0) {
            uVar4 = iStack_334 + local_338 * uVar1;
            uVar24 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
            uVar3 = *(ushort *)((long)auStack_2f4 + uVar24);
            *(ushort *)((long)auStack_2f4 + uVar24) = (uVar3 & 0x3ff) + 1 | uVar3 & 0xfc00;
            break;
          }
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
        operator_delete__(psVar11);
        if (iVar29 != iVar25) {
                    /* try { // try from 00861698 to 008616b3 has its CatchHandler @ 00861848 */
          writeBackLocalHeightmap
                    (this,auStack_2f4,uVar1,uVar1,param_5,pDVar2,uVar19 - iVar8,uVar28 - iVar8);
          iVar10 = iVar29;
        }
      }
      local_308 = 0;
      fVar30 = *(float *)(*(long *)(this + 0xa40) + 0x90);
      uVar24 = (long)local_320 - (long)ppvStack_328;
      ppvVar6 = local_320;
      while (local_320 = ppvVar6, 0x10 < uVar24) {
        operator_delete(*ppvStack_328);
        ppvStack_328 = ppvStack_328 + 1;
        ppvVar6 = local_320;
        uVar24 = (long)local_320 - (long)ppvStack_328;
      }
      if (uVar24 >> 3 == 1) {
        local_310 = 0x200;
      }
      else if (uVar24 >> 3 == 2) {
        local_310 = 0x400;
      }
      ppvVar20 = ppvStack_328;
      if (ppvStack_328 != ppvVar6) {
        do {
          ppvVar21 = ppvVar20 + 1;
          operator_delete(*ppvVar20);
          ppvVar20 = ppvVar21;
        } while (ppvVar21 != ppvVar6);
        if ((long)local_320 - (long)ppvStack_328 != 0) {
          local_320 = local_320 +
                      (((long)local_320 - (long)ppvStack_328) - 8U >> 3 ^ 0xffffffffffffffff);
        }
      }
      if (local_330 != (void *)0x0) {
        operator_delete(local_330);
      }
      fVar30 = (fVar30 * (float)(iVar25 - iVar10)) / fVar35;
    }
  }
LAB_0086176c:
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar30;
}


