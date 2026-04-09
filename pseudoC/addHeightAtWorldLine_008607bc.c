// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHeightAtWorldLine
// Entry Point: 008607bc
// Size: 2480 bytes
// Signature: undefined __cdecl addHeightAtWorldLine(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint param_8, float param_9, float param_10, bool param_11, uint param_12, OcclusionArea * param_13, uint * param_14, bool param_15)


/* DensityMapHeightUpdater::addHeightAtWorldLine(float, float, float, float, float, float, float,
   unsigned int, float, float, bool, unsigned int, DensityMapHeightUpdater::OcclusionArea const*,
   unsigned int&, bool) */

float DensityMapHeightUpdater::addHeightAtWorldLine
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,uint param_8,float param_9,float param_10,bool param_11,uint param_12
                ,OcclusionArea *param_13,uint *param_14,bool param_15)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  DensityMapModifier *pDVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  void **ppvVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  DensityMapHeightUpdater *this;
  ulong uVar18;
  ushort *puVar19;
  int *piVar20;
  byte in_w6;
  undefined2 uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  void **ppvVar28;
  uint uVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  void *pvVar36;
  undefined2 *puVar37;
  int iVar38;
  int iVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  short sVar47;
  float fVar48;
  undefined4 uVar49;
  undefined8 uVar50;
  undefined4 uVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float local_158;
  float local_154;
  void *local_150;
  void **ppvStack_148;
  void **local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  int local_108 [2];
  int local_100;
  void **local_f8;
  ushort *local_f0;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  short local_d8;
  short local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  uint local_d0;
  void *local_c8;
  int local_c0;
  int iStack_bc;
  int local_b8;
  long local_b0;
  void **ppvVar29;
  
  piVar20 = (int *)(ulong)param_15;
  this = (DensityMapHeightUpdater *)(ulong)param_8;
  lVar11 = tpidr_el0;
  local_b0 = *(long *)(lVar11 + 0x28);
  fVar42 = 0.0;
  lVar26 = *(long *)(this + 0xa40);
  if (*(uint *)(lVar26 + 0x8c) != 0) {
    uVar7 = ~(-1 << (ulong)(*(uint *)(lVar26 + 0x8c) & 0x1f));
    fVar41 = (float)(ulong)uVar7;
    iVar34 = (int)((fVar41 * param_7) / *(float *)(lVar26 + 0x90));
    if (iVar34 != 0) {
      lVar26 = *(long *)(lVar26 + 0x40);
      RawTransformGroup::updateWorldTransformation();
      fVar42 = param_2 - *(float *)(lVar26 + 0xec);
      fVar48 = param_1 - *(float *)(lVar26 + 0xe8);
      fVar54 = param_3 - *(float *)(lVar26 + 0xf0);
      uVar51 = NEON_fmadd(fVar48,*(undefined4 *)(lVar26 + 0xb8),fVar42 * *(float *)(lVar26 + 0xbc));
      uVar49 = NEON_fmadd(fVar48,*(undefined4 *)(lVar26 + 0xd8),fVar42 * *(float *)(lVar26 + 0xdc));
      fVar42 = (float)NEON_fmadd(fVar54,*(undefined4 *)(lVar26 + 0xc0),uVar51);
      fVar48 = (float)NEON_fmadd(fVar54,*(undefined4 *)(lVar26 + 0xe0),uVar49);
      TerrainDataPlane::localToDensityMap
                (*(TerrainDataPlane **)(this + 0xa40),fVar42,fVar48,&local_10c,&local_110);
      lVar26 = *(long *)(*(long *)(this + 0xa40) + 0x40);
      RawTransformGroup::updateWorldTransformation();
      fVar42 = param_5 - *(float *)(lVar26 + 0xec);
      fVar48 = param_4 - *(float *)(lVar26 + 0xe8);
      fVar54 = param_6 - *(float *)(lVar26 + 0xf0);
      uVar51 = NEON_fmadd(fVar48,*(undefined4 *)(lVar26 + 0xb8),fVar42 * *(float *)(lVar26 + 0xbc));
      uVar49 = NEON_fmadd(fVar48,*(undefined4 *)(lVar26 + 0xd8),fVar42 * *(float *)(lVar26 + 0xdc));
      fVar42 = (float)NEON_fmadd(fVar54,*(undefined4 *)(lVar26 + 0xc0),uVar51);
      fVar48 = (float)NEON_fmadd(fVar54,*(undefined4 *)(lVar26 + 0xe0),uVar49);
      TerrainDataPlane::localToDensityMap
                (*(TerrainDataPlane **)(this + 0xa40),fVar42,fVar48,&fStack_114,&local_118);
      fVar48 = local_118 - local_110;
      fVar54 = fStack_114 - local_10c;
      fVar42 = (float)NEON_fmadd(fVar54,fVar54,fVar48 * fVar48);
      if (fVar42 < 1.0) {
        fVar42 = (float)addHeightAtWorldPos(this,(param_1 + param_4) * 0.5,(param_2 + param_5) * 0.5
                                            ,(param_3 + param_6) * 0.5,param_7,(uint)param_11,
                                            param_9,param_10,(bool)((byte)param_12 & 1),
                                            (uint)param_13,(OcclusionArea *)param_14,
                                            (bool)(in_w6 & 1));
      }
      else {
        pDVar6 = *(DensityMapModifier **)(*(long *)(this + 0xa40) + 0x58);
        iVar15 = DensityMap::getSquareSize();
        fVar58 = (float)iVar15;
        lVar26 = *(long *)(*(long *)(this + 0xa40) + 0x40);
        iVar15 = BaseTerrain::getHeightMapSize();
        fVar43 = (float)BaseTerrain::getUnitsPerPixel();
        uVar22 = (uint)((fVar58 * param_10) / (fVar43 * (float)(ulong)(iVar15 - 1)));
        if (6 < uVar22) {
          uVar22 = 7;
        }
        fVar43 = local_110;
        if (local_118 < local_110) {
          fVar43 = local_118;
        }
        fVar44 = local_110;
        if (local_110 < local_118) {
          fVar44 = local_118;
        }
        fVar45 = local_10c;
        if (fStack_114 < local_10c) {
          fVar45 = fStack_114;
        }
        fVar52 = local_10c;
        if (local_10c < fStack_114) {
          fVar52 = fStack_114;
        }
        iVar15 = (int)fVar43 - (uVar22 + 1);
        uVar8 = (uVar22 + 2 + (int)fVar44) - iVar15;
        iVar9 = (int)fVar45 - (uVar22 + 1);
        uVar10 = (uVar22 + 2 + (int)fVar52) - iVar9;
        if ((int)uVar10 < 2) {
          uVar10 = 1;
        }
        if ((int)uVar8 < 2) {
          uVar8 = 1;
        }
        uVar18 = (ulong)(uVar8 * uVar10 * 2);
        puVar19 = (ushort *)operator_new__(uVar18);
        initLocalHeightmap(this,puVar19,uVar10,uVar8,(uint)param_11,pDVar6,iVar9,iVar15,true,
                           (uint)param_13,(OcclusionArea *)param_14,(DensityMapModifier *)0x0,0,0,
                           0.0,0.0);
        fVar44 = local_10c;
        fVar43 = local_110;
        pvVar36 = (void *)0x0;
        fVar45 = fStack_114 - local_10c;
        fVar52 = local_118 - local_110;
        iVar23 = -1;
        iVar5 = iVar23;
        if (0.0 <= fVar45) {
          iVar5 = 1;
        }
        if (0.0 <= fVar52) {
          iVar23 = 1;
        }
        if ((param_12 & 1) != 0) {
          lVar32 = *(long *)(*(long *)(this + 0xa40) + 0x40);
          RawTransformGroup::updateWorldTransformation();
          uVar49 = NEON_fmadd(param_1 - *(float *)(lVar32 + 0xe8),*(undefined4 *)(lVar32 + 200),
                              (param_2 - *(float *)(lVar32 + 0xec)) * *(float *)(lVar32 + 0xcc));
          lVar33 = *(long *)(*(long *)(this + 0xa40) + 0x40);
          fVar59 = (float)NEON_fmadd(param_3 - *(float *)(lVar32 + 0xf0),
                                     *(undefined4 *)(lVar32 + 0xd0),uVar49);
          RawTransformGroup::updateWorldTransformation();
          uVar49 = NEON_fmadd(param_4 - *(float *)(lVar33 + 0xe8),*(undefined4 *)(lVar33 + 200),
                              (param_5 - *(float *)(lVar33 + 0xec)) * *(float *)(lVar33 + 0xcc));
          fVar60 = (float)NEON_fmadd(param_6 - *(float *)(lVar33 + 0xf0),
                                     *(undefined4 *)(lVar33 + 0xd0),uVar49);
          pvVar36 = operator_new__(uVar18);
          uVar30 = 0;
          uVar18 = 0;
          do {
            iVar39 = iVar15 + (int)uVar18;
            puVar37 = (undefined2 *)((long)pvVar36 + (ulong)uVar30 * 2);
            uVar40 = (ulong)uVar10;
            iVar38 = iVar9;
            do {
              fVar46 = (float)NEON_fmadd(fVar54,(float)iVar38 - local_10c,
                                         fVar48 * ((float)iVar39 - local_110));
              fVar46 = fVar46 / fVar42;
              fVar57 = fVar59;
              if ((0.0 < fVar46) && (fVar57 = fVar60, fVar46 < 1.0)) {
                fVar57 = (float)NEON_fmadd(fVar46,fVar60 - fVar59,fVar59);
              }
              iVar16 = BaseTerrain::getHeightMapSize();
              iVar17 = BaseTerrain::getHeightMapSize();
              fVar46 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                        ((BaseTerrain *)(lVar26 + 0x170),
                                         (float)(ulong)(uint)((iVar16 + -1) * iVar38) / fVar58,
                                         (float)(ulong)(uint)((iVar17 + -1) * iVar39) / fVar58);
              if (0.0 < fVar57 - fVar46) {
                uVar21 = (undefined2)
                         (int)(((fVar57 - fVar46) / *(float *)(*(long *)(this + 0xa40) + 0x90)) *
                              fVar41);
              }
              else {
                uVar21 = 0;
              }
              iVar38 = iVar38 + 1;
              uVar40 = uVar40 - 1;
              *puVar37 = uVar21;
              puVar37 = puVar37 + 1;
            } while (uVar40 != 0);
            uVar18 = uVar18 + 1;
            uVar30 = uVar30 + uVar10;
          } while (uVar18 != uVar8);
        }
        fVar45 = 1.0 / fVar45;
        uVar55 = 0x100000001;
        iVar38 = (int)fVar44;
        fVar42 = *(float *)(this + (ulong)param_11 * 0x14 + 0x34);
        iVar39 = (int)fVar43;
        fVar52 = 1.0 / fVar52;
        uVar53 = NEON_smax(CONCAT44((int)(fVar42 * 1.414214 + 0.5),(int)(fVar42 + 0.5)),0x100000001,
                           4);
        sVar47 = (short)((ulong)uVar53 >> 0x20);
        if (iVar34 < 1) {
          uVar50 = CONCAT44((int)(fVar42 * 1.414214 * 0.8 + 0.5),(int)(fVar42 * 0.8 + 0.5));
          uVar55 = NEON_cmgt(CONCAT44((int)sVar47,(int)(short)uVar53),uVar50,4);
          uVar55 = NEON_bsl(uVar55,uVar50,
                            CONCAT44((int)((ulong)uVar53 >> 0x20) + 0xffff,(int)uVar53 + 0xffff),1);
        }
        iVar17 = BaseTerrain::getHeightMapSize();
        fVar42 = (float)BaseTerrain::getUnitsPerPixel();
        iVar16 = *piVar20;
        uVar24 = (uint)((fVar58 * param_9) / (fVar42 * (float)(ulong)(iVar17 - 1)) + 0.5);
        fVar42 = fVar45 * ((float)(iVar5 + iVar38) - fVar44);
        fVar48 = fVar52 * ((float)(iVar23 + iVar39) - fVar43);
        uVar30 = uVar22;
        if ((int)uVar24 <= (int)uVar22) {
          uVar30 = uVar24;
        }
        iVar31 = iVar39;
        iVar17 = iVar38;
        local_158 = fVar48;
        local_154 = fVar42;
        if (iVar16 != 0) {
          fVar58 = fVar42;
          fVar54 = fVar48;
          iVar27 = iVar39;
          iVar35 = iVar38;
          iVar25 = 1;
          do {
            iVar1 = iVar35 + iVar5;
            iVar2 = iVar27 + iVar23;
            iVar3 = iVar2;
            iVar13 = iVar2;
            if (fVar58 < fVar54) {
              iVar3 = iVar27;
              iVar17 = iVar1;
              iVar13 = iVar31;
              iVar35 = iVar1;
            }
            iVar31 = iVar13;
            fVar56 = fVar45 * ((float)(iVar1 + iVar5) - fVar44);
            fVar57 = fVar52 * ((float)(iVar2 + iVar23) - fVar43);
            fVar60 = fVar58;
            fVar59 = fVar54;
            fVar46 = fVar57;
            if (fVar58 < fVar54) {
              fVar60 = fVar56;
              fVar57 = local_158;
              fVar59 = fVar58;
              local_154 = fVar56;
              fVar46 = fVar54;
            }
            fVar54 = fVar46;
            local_158 = fVar57;
            fVar58 = fVar60;
          } while ((fVar59 <= 1.0) &&
                  (bVar14 = iVar16 != iVar25, iVar27 = iVar3, iVar25 = iVar25 + 1, bVar14));
          if (1.0 < fVar59) {
            iVar16 = 0;
            iVar31 = iVar39;
            iVar17 = iVar38;
            local_158 = fVar48;
            local_154 = fVar42;
          }
        }
        *piVar20 = iVar16;
        uStack_138 = 0;
        local_140 = (void **)0x0;
        local_128 = 0;
        local_130 = 0;
        ppvStack_148 = (void **)0x0;
        local_150 = (void *)0x0;
        iVar27 = iVar34;
        do {
          local_f8 = &local_150;
          local_d2 = (undefined2)((ulong)uVar55 >> 0x20);
          local_d4 = (undefined2)uVar55;
          local_100 = iVar27;
          local_f0 = puVar19;
          local_e8 = uVar10;
          uStack_e4 = uVar8;
          local_e0 = uVar30;
          uStack_dc = uVar22;
          local_d8 = (short)uVar53;
          local_d6 = sVar47;
          local_d0 = uVar7;
          local_c8 = pvVar36;
          local_c0 = iVar9;
          iStack_bc = iVar15;
          local_b8 = iVar16;
          do {
                    /* try { // try from 00860fa8 to 00860fb7 has its CatchHandler @ 00861170 */
            uVar18 = ChangeHeightmapRayWalkFunc::operator()
                               ((ChangeHeightmapRayWalkFunc *)local_108,iVar17,iVar31);
            if ((uVar18 & 1) == 0) break;
            pfVar4 = &local_158;
            iVar25 = iVar31 + iVar23;
            fVar54 = fVar43;
            iVar35 = iVar31 + iVar23 + iVar23;
            fVar58 = local_158;
            if (local_154 < local_158) {
              pfVar4 = &local_154;
              iVar25 = iVar31;
              fVar54 = fVar44;
              iVar35 = iVar17 + iVar5 + iVar5;
              fVar58 = local_154;
              iVar17 = iVar17 + iVar5;
            }
            iVar31 = iVar25;
            fVar59 = fVar52;
            if (local_154 < local_158) {
              fVar59 = fVar45;
            }
            *pfVar4 = ((float)iVar35 - fVar54) * fVar59;
          } while (fVar58 <= 1.0);
          if (iVar27 == local_100) {
            iVar35 = iVar27;
            if (iVar16 == 0) break;
          }
          else {
            *piVar20 = local_108[0] + 1;
            iVar27 = local_100;
          }
          iVar16 = 0;
          iVar35 = 0;
          iVar31 = iVar39;
          iVar17 = iVar38;
          local_158 = fVar48;
          local_154 = fVar42;
        } while (iVar27 != 0);
        if ((iVar35 != iVar34) && ((in_w6 & 1) != 0)) {
                    /* try { // try from 00861038 to 00861053 has its CatchHandler @ 0086116c */
          writeBackLocalHeightmap(this,puVar19,uVar10,uVar8,(uint)param_11,pDVar6,iVar9,iVar15);
        }
        if (pvVar36 != (void *)0x0) {
          operator_delete__(pvVar36);
        }
        operator_delete__(puVar19);
        local_128 = 0;
        fVar42 = *(float *)(*(long *)(this + 0xa40) + 0x90);
        uVar18 = (long)local_140 - (long)ppvStack_148;
        ppvVar12 = local_140;
        while (local_140 = ppvVar12, 0x10 < uVar18) {
          operator_delete(*ppvStack_148);
          ppvStack_148 = ppvStack_148 + 1;
          ppvVar12 = local_140;
          uVar18 = (long)local_140 - (long)ppvStack_148;
        }
        if (uVar18 >> 3 == 1) {
          local_130 = 0x200;
        }
        else if (uVar18 >> 3 == 2) {
          local_130 = 0x400;
        }
        ppvVar28 = ppvStack_148;
        if (ppvStack_148 != ppvVar12) {
          do {
            ppvVar29 = ppvVar28 + 1;
            operator_delete(*ppvVar28);
            ppvVar28 = ppvVar29;
          } while (ppvVar29 != ppvVar12);
          if ((long)local_140 - (long)ppvStack_148 != 0) {
            local_140 = local_140 +
                        (((long)local_140 - (long)ppvStack_148) - 8U >> 3 ^ 0xffffffffffffffff);
          }
        }
        if (local_150 != (void *)0x0) {
          operator_delete(local_150);
        }
        fVar42 = (fVar42 * (float)(iVar34 - iVar35)) / fVar41;
      }
    }
  }
  if (*(long *)(lVar11 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar42;
}


