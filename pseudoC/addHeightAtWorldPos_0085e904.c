// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHeightAtWorldPos
// Entry Point: 0085e904
// Size: 1512 bytes
// Signature: undefined __thiscall addHeightAtWorldPos(DensityMapHeightUpdater * this, float param_1, float param_2, float param_3, float param_4, uint param_5, float param_6, float param_7, bool param_8, uint param_9, OcclusionArea * param_10, bool param_11)


/* DensityMapHeightUpdater::addHeightAtWorldPos(float, float, float, float, unsigned int, float,
   float, bool, unsigned int, DensityMapHeightUpdater::OcclusionArea const*, bool) */

float __thiscall
DensityMapHeightUpdater::addHeightAtWorldPos
          (DensityMapHeightUpdater *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5,float param_6,float param_7,bool param_8,uint param_9,OcclusionArea *param_10
          ,bool param_11)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  DensityMapModifier *pDVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void **ppvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  void **ppvVar19;
  long lVar21;
  ulong uVar22;
  short *psVar23;
  ulong uVar24;
  int iVar25;
  short *psVar26;
  float fVar27;
  short sVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  short *local_378;
  int iStack_338;
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
  void **ppvVar20;
  
  lVar8 = tpidr_el0;
  local_b0 = *(long *)(lVar8 + 0x28);
  fVar27 = 0.0;
  lVar17 = *(long *)(this + 0xa40);
  if (*(uint *)(lVar17 + 0x8c) != 0) {
    uVar14 = ~(-1 << (ulong)(*(uint *)(lVar17 + 0x8c) & 0x1f));
    fVar36 = (float)(ulong)uVar14;
    iVar25 = (int)((fVar36 * param_4) / *(float *)(lVar17 + 0x90));
    if (iVar25 != 0) {
      pDVar4 = *(DensityMapModifier **)(lVar17 + 0x58);
      iVar10 = DensityMap::getSquareSize();
      lVar17 = *(long *)(*(long *)(this + 0xa40) + 0x40);
      RawTransformGroup::updateWorldTransformation();
      fVar27 = param_2 - *(float *)(lVar17 + 0xec);
      fVar29 = param_1 - *(float *)(lVar17 + 0xe8);
      fVar35 = param_3 - *(float *)(lVar17 + 0xf0);
      uVar32 = NEON_fmadd(fVar29,*(undefined4 *)(lVar17 + 0xb8),fVar27 * *(float *)(lVar17 + 0xbc));
      uVar30 = NEON_fmadd(fVar29,*(undefined4 *)(lVar17 + 0xd8),fVar27 * *(float *)(lVar17 + 0xdc));
      fVar27 = (float)NEON_fmadd(fVar35,*(undefined4 *)(lVar17 + 0xc0),uVar32);
      fVar29 = (float)NEON_fmadd(fVar35,*(undefined4 *)(lVar17 + 0xe0),uVar30);
      TerrainDataPlane::localToDensityMap
                (*(TerrainDataPlane **)(this + 0xa40),fVar27,fVar29,&fStack_2f8,&local_2fc);
      fVar29 = (float)iVar10;
      iVar10 = BaseTerrain::getHeightMapSize();
      fVar27 = (float)BaseTerrain::getUnitsPerPixel();
      uVar18 = (uint)((fVar29 * param_7) / (fVar27 * (float)(ulong)(iVar10 - 1)));
      if (6 < uVar18) {
        uVar18 = 7;
      }
      iVar10 = uVar18 + 1;
      iVar6 = (int)(fStack_2f8 + 0.5) - iVar10;
      iVar7 = (int)(local_2fc + 0.5) - iVar10;
      uVar2 = iVar10 * 2 | 1;
      initLocalHeightmap(this,auStack_2f4,uVar2,uVar2,param_5,pDVar4,iVar6,iVar7,true,param_9,
                         param_10,(DensityMapModifier *)0x0,0,0,0.0,0.0);
      local_378 = (short *)0x0;
      if (param_8) {
        lVar21 = *(long *)(*(long *)(this + 0xa40) + 0x40);
        RawTransformGroup::updateWorldTransformation();
        uVar30 = NEON_fmadd(param_1 - *(float *)(lVar21 + 0xe8),*(undefined4 *)(lVar21 + 200),
                            (param_2 - *(float *)(lVar21 + 0xec)) * *(float *)(lVar21 + 0xcc));
        fVar27 = (float)NEON_fmadd(param_3 - *(float *)(lVar21 + 0xf0),
                                   *(undefined4 *)(lVar21 + 0xd0),uVar30);
        local_378 = (short *)operator_new__((ulong)(uVar2 * uVar2 * 2));
        uVar22 = 0;
        psVar23 = local_378;
        do {
          uVar24 = (ulong)uVar2;
          psVar26 = psVar23;
          iVar13 = ~uVar18 + (int)(fStack_2f8 + 0.5);
          do {
            iVar11 = BaseTerrain::getHeightMapSize();
            iVar12 = BaseTerrain::getHeightMapSize();
            fVar35 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                      ((BaseTerrain *)(lVar17 + 0x170),
                                       (float)(ulong)(uint)((iVar11 + -1) * iVar13) / fVar29,
                                       (float)(ulong)((iVar12 + -1) *
                                                     (~uVar18 + (int)(local_2fc + 0.5) + (int)uVar22
                                                     )) / fVar29);
            if (0.0 < fVar27 - fVar35) {
              sVar15 = (short)(int)(((fVar27 - fVar35) / *(float *)(*(long *)(this + 0xa40) + 0x90))
                                   * fVar36);
            }
            else {
              sVar15 = 0;
            }
            iVar13 = iVar13 + 1;
            uVar24 = uVar24 - 1;
            *psVar26 = sVar15;
            psVar26 = psVar26 + 1;
          } while (uVar24 != 0);
          uVar22 = uVar22 + 1;
          psVar23 = psVar23 + (ulong)uVar18 * 2 + 3;
        } while (uVar22 != uVar2);
      }
      uVar34 = 0x100000001;
      fVar27 = *(float *)(this + (ulong)param_5 * 0x14 + 0x34);
      uVar33 = NEON_smax(CONCAT44((int)(fVar27 * 1.414214 + 0.5),(int)(fVar27 + 0.5)),0x100000001,4)
      ;
      sVar15 = (short)uVar33;
      sVar28 = (short)((ulong)uVar33 >> 0x20);
      if (iVar25 < 1) {
        uVar31 = CONCAT44((int)(fVar27 * 1.414214 * 0.8 + 0.5),(int)(fVar27 * 0.8 + 0.5));
        uVar34 = NEON_cmgt(CONCAT44((int)sVar28,(int)sVar15),uVar31,4);
        uVar34 = NEON_bsl(uVar34,uVar31,
                          CONCAT44((int)((ulong)uVar33 >> 0x20) + 0xffff,(int)uVar33 + 0xffff),1);
      }
      iVar13 = BaseTerrain::getHeightMapSize();
      fVar27 = (float)BaseTerrain::getUnitsPerPixel();
      uStack_318 = 0;
      local_320 = (void **)0x0;
      local_308 = 0;
      local_310 = 0;
      ppvStack_328 = (void **)0x0;
      local_330 = (void *)0x0;
      uVar16 = (uint)((fVar29 * param_6) / (fVar27 * (float)(ulong)(iVar13 - 1)) + 0.5);
      uVar3 = uVar18;
      if ((int)uVar16 <= (int)uVar18) {
        uVar3 = uVar16;
      }
      sVar5 = (short)((ulong)uVar34 >> 0x20);
      iVar13 = iVar25;
      if (iVar25 < 1) {
        do {
                    /* try { // try from 0085ed4c to 0085ed8b has its CatchHandler @ 0085eef4 */
          uVar14 = removeFromHeightmap((deque *)&local_330,auStack_2f4,uVar2,uVar2,iVar10,iVar10,
                                       uVar3,uVar18,sVar15,sVar28,(short)uVar34,sVar5,local_378,
                                       &iStack_334,&iStack_338);
          iVar13 = iVar13 + (uVar14 & 1);
        } while ((uVar14 & iVar13 < 0) != 0);
      }
      else {
        do {
                    /* try { // try from 0085ecd4 to 0085ed13 has its CatchHandler @ 0085eef0 */
          uVar22 = addToHeightmap((deque *)&local_330,auStack_2f4,uVar2,uVar2,iVar10,iVar10,uVar3,
                                  uVar18,sVar15,sVar28,(short)uVar34,sVar5,(short)uVar14,local_378,
                                  false);
          if ((uVar22 & 1) == 0) goto LAB_0085eda4;
          iVar11 = iVar13 + -1;
          bVar1 = 0 < iVar13;
          iVar13 = iVar11;
        } while (iVar11 != 0 && bVar1);
        iVar13 = 0;
      }
LAB_0085eda4:
      if (local_378 != (short *)0x0) {
        operator_delete__(local_378);
      }
      if ((iVar13 != iVar25) && (param_11)) {
                    /* try { // try from 0085edc8 to 0085ede7 has its CatchHandler @ 0085eeec */
        writeBackLocalHeightmap(this,auStack_2f4,uVar2,uVar2,param_5,pDVar4,iVar6,iVar7);
      }
      local_308 = 0;
      fVar27 = *(float *)(*(long *)(this + 0xa40) + 0x90);
      uVar22 = (long)local_320 - (long)ppvStack_328;
      ppvVar9 = local_320;
      while (local_320 = ppvVar9, 0x10 < uVar22) {
        operator_delete(*ppvStack_328);
        ppvStack_328 = ppvStack_328 + 1;
        ppvVar9 = local_320;
        uVar22 = (long)local_320 - (long)ppvStack_328;
      }
      if (uVar22 >> 3 == 1) {
        local_310 = 0x200;
      }
      else if (uVar22 >> 3 == 2) {
        local_310 = 0x400;
      }
      ppvVar19 = ppvStack_328;
      if (ppvStack_328 != ppvVar9) {
        do {
          ppvVar20 = ppvVar19 + 1;
          operator_delete(*ppvVar19);
          ppvVar19 = ppvVar20;
        } while (ppvVar20 != ppvVar9);
        if ((long)local_320 - (long)ppvStack_328 != 0) {
          local_320 = local_320 +
                      (((long)local_320 - (long)ppvStack_328) - 8U >> 3 ^ 0xffffffffffffffff);
        }
      }
      if (local_330 != (void *)0x0) {
        operator_delete(local_330);
      }
      fVar27 = (fVar27 * (float)(iVar25 - iVar13)) / fVar36;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_b0) {
    return fVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


