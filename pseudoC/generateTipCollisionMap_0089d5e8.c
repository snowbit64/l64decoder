// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateTipCollisionMap
// Entry Point: 0089d5e8
// Size: 2864 bytes
// Signature: undefined __cdecl generateTipCollisionMap(BitVector * param_1, TerrainTransformGroup * param_2, char * param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, uint param_10)


/* TerrainCollisionMapUtil::generateTipCollisionMap(BitVector*, TerrainTransformGroup*, char const*,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void TerrainCollisionMapUtil::generateTipCollisionMap
               (BitVector *param_1,TerrainTransformGroup *param_2,char *param_3,uint param_4,
               uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  undefined uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  Bt2ScenegraphPhysicsContext *this;
  DensityMapModifier *pDVar22;
  code **ppcVar23;
  uint *puVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint local_1b8;
  uint local_1b4;
  undefined **local_180;
  char local_178;
  float local_174;
  DensityMapModifier aDStack_170 [48];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  uVar37 = (ulong)param_4;
  lVar13 = tpidr_el0;
  local_b0 = *(long *)(lVar13 + 0x28);
  uVar8 = param_6 * param_6 * 2;
  if (*(uint *)(param_1 + 8) < uVar8) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar21 != 0))
    {
                    /* try { // try from 0089e0dc to 0089e0e7 has its CatchHandler @ 0089e118 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Generating tip collision map with invalid bit vector. At least %u bits required but only %u are available.\n"
                      ,(ulong)uVar8,(ulong)*(uint *)(param_1 + 8));
    goto LAB_0089e080;
  }
  uVar8 = param_6;
  if (param_9 <= param_6) {
    uVar8 = param_9;
  }
  uVar4 = param_6;
  if (param_10 <= param_6) {
    uVar4 = param_10;
  }
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  fVar38 = (float)BaseTerrain::getTerrainHalfSize();
  fVar39 = (float)BaseTerrain::getUnitsPerPixel();
  iVar21 = BaseTerrain::getHeightMapSize();
  fVar40 = (float)BaseTerrain::getUnitsPerPixel();
  fVar49 = (float)(ulong)param_6;
  fVar40 = (fVar40 * (float)(ulong)(iVar21 - 1)) / fVar49;
  uVar17 = BaseTerrain::getHeightMapSize();
  RawTransformGroup::updateWorldTransformation();
  uStack_e8 = *(undefined8 *)(param_2 + 0xc0);
  local_f0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_d8 = *(undefined8 *)(param_2 + 0xd0);
  uStack_e0 = *(undefined8 *)(param_2 + 200);
  uStack_c8 = *(undefined8 *)(param_2 + 0xe0);
  local_d0 = *(undefined8 *)(param_2 + 0xd8);
  local_100 = fVar40 * 0.1 * 0.5;
  uStack_b8 = *(undefined8 *)(param_2 + 0xf0);
  uStack_c0 = *(undefined8 *)(param_2 + 0xe8);
  local_fc = 0x42200000;
  local_f8 = local_100;
  if (param_3 == (char *)0x0) {
    DensityMapModifier::DensityMapModifier(aDStack_170);
    pDVar22 = (DensityMapModifier *)0x0;
    uVar18 = extraout_w11_00;
    uVar19 = extraout_w10_00;
LAB_0089d820:
    fVar47 = 1.0;
    fVar48 = 1.0;
  }
  else {
    pDVar22 = (DensityMapModifier *)
              BaseTerrain::findInfoLayer((BaseTerrain *)(param_2 + 0x170),param_3);
    DensityMapModifier::DensityMapModifier(aDStack_170);
    uVar18 = extraout_w11;
    uVar19 = extraout_w10;
    if (pDVar22 == (DensityMapModifier *)0x0) goto LAB_0089d820;
    if (*(long *)(pDVar22 + 0x38) == 0) {
      pDVar22 = (DensityMapModifier *)0x0;
      goto LAB_0089d820;
    }
                    /* try { // try from 0089d778 to 0089d7f7 has its CatchHandler @ 0089e130 */
    DensityMapModifier::init(aDStack_170,*(DensityMap **)(*(long *)(pDVar22 + 0x38) + 0x20));
    uVar18 = (**(code **)(**(long **)(*(long *)(pDVar22 + 0x38) + 0x20) + 0x48))();
    uVar19 = (**(code **)(**(long **)(*(long *)(pDVar22 + 0x38) + 0x20) + 0x50))();
    iVar21 = (**(code **)(**(long **)(*(long *)(pDVar22 + 0x38) + 0x20) + 0x58))();
    fVar48 = (float)(ulong)uVar18 / fVar49;
    fVar47 = (float)(ulong)uVar19 / fVar49;
    if (iVar21 - 1U < param_4) {
      iVar21 = (**(code **)(**(long **)(*(long *)(pDVar22 + 0x38) + 0x20) + 0x58))();
      uVar37 = (ulong)(iVar21 - 1);
      pDVar22 = aDStack_170;
    }
    else {
      pDVar22 = aDStack_170;
    }
  }
  if (param_8 < uVar4) {
    local_1b8 = (param_7 + param_8 * param_6) * 2;
    local_1b4 = param_8;
    do {
      if (param_7 < uVar8) {
        fVar41 = (float)(ulong)local_1b4;
        fVar43 = fVar47 * fVar41;
        fVar45 = (float)NEON_fmadd(fVar41,fVar40,fVar39 * -fVar38);
        uVar28 = (uint)fVar43;
        uVar11 = (uVar28 & 0x1f) << 5;
        fVar44 = (float)NEON_ucvtf((int)fVar43);
        uVar5 = 0;
        if (uVar28 != 0) {
          uVar5 = uVar28 - 1;
        }
        uVar9 = uVar28 >> 5;
        if (0.01 <= fVar43 - fVar44) {
          uVar5 = (0.99 < fVar43 - fVar44 && uVar28 < uVar19 - 1) + uVar28;
        }
        uVar12 = (uVar5 & 0x1f) << 5;
        uVar10 = uVar5 >> 5;
        uVar36 = param_7;
        uVar1 = local_1b8;
        do {
          fVar50 = (float)(ulong)uVar36;
                    /* try { // try from 0089d988 to 0089d993 has its CatchHandler @ 0089e13c */
          fVar43 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                    ((BaseTerrain *)(param_2 + 0x170),
                                     ((float)(ulong)uVar17 / fVar49) * fVar50,
                                     ((float)(ulong)uVar17 / fVar49) * fVar41);
          fVar46 = (float)NEON_fmadd(fVar50,fVar40,fVar39 * -fVar38);
          local_178 = '\0';
          local_174 = 0.0;
          uStack_138 = uStack_e8;
          uVar14 = uStack_138;
          local_140 = local_f0;
          local_128 = uStack_d8;
          uVar15 = local_128;
          local_130 = uStack_e0;
          local_128._0_4_ = (float)uStack_d8;
          uStack_138._0_4_ = (undefined4)uStack_e8;
          uVar42 = NEON_fmadd(fVar46,(undefined4)uStack_138,fVar43 * (float)local_128);
          uStack_118 = uStack_c8;
          uVar16 = uStack_118;
          local_120 = local_d0;
          uStack_118._0_4_ = (undefined4)uStack_c8;
          fVar44 = (float)NEON_fmadd(fVar45,(undefined4)uStack_118,uVar42);
          local_108._0_4_ = (float)uStack_b8;
          local_110 = CONCAT44((float)((ulong)uStack_e0 >> 0x20) * fVar43 +
                               (float)((ulong)local_f0 >> 0x20) * fVar46 +
                               (float)((ulong)local_d0 >> 0x20) * fVar45 +
                               (float)((ulong)uStack_c0 >> 0x20),
                               (float)uStack_e0 * fVar43 + (float)local_f0 * fVar46 +
                               (float)local_d0 * fVar45 + (float)uStack_c0);
          local_108 = CONCAT44((int)((ulong)uStack_b8 >> 0x20),fVar44 + (float)local_108);
                    /* try { // try from 0089da00 to 0089da2f has its CatchHandler @ 0089e138 */
          local_180 = &PTR__IPhysicsEntityReport_00fdd2f0;
          uStack_138 = uVar14;
          local_128 = uVar15;
          uStack_118 = uVar16;
          Bt2ScenegraphPhysicsContext::overlapBoxShapes
                    (this,(Matrix4x4 *)&local_140,(Vector3 *)&local_100,
                     (IPhysicsEntityReport *)&local_180,param_5,false,true,true,0,
                     (TransformGroup **)0x0,0);
          if (local_178 == '\0') {
            if (pDVar22 == (DensityMapModifier *)0x0) {
              iVar21 = 0;
            }
            else {
              fVar50 = fVar48 * fVar50;
              uVar35 = (uint)fVar50;
              fVar43 = (float)NEON_ucvtf((int)fVar50);
              if (0.01 <= fVar50 - fVar43) {
                uVar34 = (0.99 < fVar50 - fVar43 && uVar35 < uVar18 - 1) + uVar35;
              }
              else {
                uVar34 = 0;
                if (uVar35 != 0) {
                  uVar34 = uVar35 - 1;
                }
              }
              puVar24 = *(uint **)(pDVar22 + 0x10);
              iVar21 = (int)uVar37;
              if (uVar34 == uVar35) {
                if (uVar5 == uVar28) {
                  if (puVar24 == (uint *)0x0) {
                    iVar20 = *(int *)(pDVar22 + 0x24);
                    uVar34 = uVar28;
LAB_0089de58:
                    iVar26 = *(int *)(pDVar22 + 0x2c);
                    iVar20 = uVar35 + iVar20 * uVar34;
LAB_0089de64:
                    uVar35 = iVar21 + iVar20 * iVar26;
                    if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) +
                                            (ulong)(uVar35 >> 0x13) * 8) +
                                  ((ulong)(uVar35 >> 3) & 0xffff)) >> (ulong)(uVar35 & 7) & 1) != 0)
                    goto LAB_0089de90;
                  }
                  else {
                    ppcVar23 = *(code ***)
                                (*(long *)(puVar24 + 10) +
                                (ulong)(puVar24[uVar37 + 0x1a] +
                                       ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                       puVar24[0xd]) * 8);
                    /* try { // try from 0089db20 to 0089e063 has its CatchHandler @ 0089e134 */
                    iVar21 = (**ppcVar23)(ppcVar23,uVar35 & 0x1f | uVar11,
                                          iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],
                                          1);
LAB_0089dd90:
                    if (iVar21 != 0) goto LAB_0089de90;
                  }
                  iVar21 = 0;
                  goto LAB_0089de9c;
                }
                if (puVar24 == (uint *)0x0) {
                  uVar34 = iVar21 + (uVar35 + *(int *)(pDVar22 + 0x24) * uVar28) *
                                    *(int *)(pDVar22 + 0x2c);
                  if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) + (ulong)(uVar34 >> 0x13) * 8
                                          ) + ((ulong)(uVar34 >> 3) & 0xffff)) >>
                       (ulong)(uVar34 & 7) & 1) == 0) goto LAB_0089dd38;
                }
                else {
                  ppcVar23 = *(code ***)
                              (*(long *)(puVar24 + 10) +
                              (ulong)(puVar24[uVar37 + 0x1a] +
                                     ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                     puVar24[0xd]) * 8);
                  iVar20 = (**ppcVar23)(ppcVar23,uVar35 & 0x1f | uVar11,
                                        iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],1)
                  ;
                  if (iVar20 == 0) {
LAB_0089dd38:
                    puVar24 = *(uint **)(pDVar22 + 0x10);
                    if (puVar24 == (uint *)0x0) {
                      iVar20 = *(int *)(pDVar22 + 0x24);
                      uVar34 = uVar5;
                      goto LAB_0089de58;
                    }
                    ppcVar23 = *(code ***)
                                (*(long *)(puVar24 + 10) +
                                (ulong)(puVar24[uVar37 + 0x1a] +
                                       ((uVar10 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                       puVar24[0xd]) * 8);
                    iVar21 = (**ppcVar23)(ppcVar23,uVar12 | uVar35 & 0x1f,
                                          iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],
                                          1);
                    goto LAB_0089dd90;
                  }
                }
              }
              else if (uVar5 == uVar28) {
                if (puVar24 == (uint *)0x0) {
                  uVar35 = iVar21 + (uVar35 + *(int *)(pDVar22 + 0x24) * uVar28) *
                                    *(int *)(pDVar22 + 0x2c);
                  if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) + (ulong)(uVar35 >> 0x13) * 8
                                          ) + ((ulong)(uVar35 >> 3) & 0xffff)) >>
                       (ulong)(uVar35 & 7) & 1) == 0) goto LAB_0089dc9c;
                }
                else {
                  ppcVar23 = *(code ***)
                              (*(long *)(puVar24 + 10) +
                              (ulong)(puVar24[uVar37 + 0x1a] +
                                     ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                     puVar24[0xd]) * 8);
                  iVar20 = (**ppcVar23)(ppcVar23,uVar35 & 0x1f | uVar11,
                                        iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],1)
                  ;
                  if (iVar20 == 0) {
LAB_0089dc9c:
                    puVar24 = *(uint **)(pDVar22 + 0x10);
                    if (puVar24 != (uint *)0x0) {
                      ppcVar23 = *(code ***)
                                  (*(long *)(puVar24 + 10) +
                                  (ulong)(puVar24[uVar37 + 0x1a] +
                                         ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar34 >> 5)) *
                                         puVar24[0xd]) * 8);
                      iVar21 = (**ppcVar23)(ppcVar23,uVar34 & 0x1f | uVar11,
                                            iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe
                                                            ],1);
                      goto LAB_0089dd90;
                    }
                    iVar20 = *(int *)(pDVar22 + 0x24);
                    uVar35 = uVar28;
LAB_0089de40:
                    iVar26 = *(int *)(pDVar22 + 0x2c);
                    iVar20 = uVar34 + iVar20 * uVar35;
                    goto LAB_0089de64;
                  }
                }
              }
              else if (puVar24 == (uint *)0x0) {
                uVar2 = iVar21 + (uVar35 + *(int *)(pDVar22 + 0x24) * uVar28) *
                                 *(int *)(pDVar22 + 0x2c);
                if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) + (ulong)(uVar2 >> 0x13) * 8) +
                              ((ulong)(uVar2 >> 3) & 0xffff)) >> (ulong)(uVar2 & 7) & 1) == 0)
                goto LAB_0089ddd8;
              }
              else {
                ppcVar23 = *(code ***)
                            (*(long *)(puVar24 + 10) +
                            (ulong)(puVar24[uVar37 + 0x1a] +
                                   ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                   puVar24[0xd]) * 8);
                iVar20 = (**ppcVar23)(ppcVar23,uVar35 & 0x1f | uVar11,
                                      iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],1);
                if (iVar20 == 0) {
LAB_0089ddd8:
                  puVar24 = *(uint **)(pDVar22 + 0x10);
                  if (puVar24 == (uint *)0x0) {
                    uVar35 = iVar21 + (uVar35 + *(int *)(pDVar22 + 0x24) * uVar5) *
                                      *(int *)(pDVar22 + 0x2c);
                    if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) +
                                            (ulong)(uVar35 >> 0x13) * 8) +
                                  ((ulong)(uVar35 >> 3) & 0xffff)) >> (ulong)(uVar35 & 7) & 1) == 0)
                    goto LAB_0089df6c;
                  }
                  else {
                    ppcVar23 = *(code ***)
                                (*(long *)(puVar24 + 10) +
                                (ulong)(puVar24[uVar37 + 0x1a] +
                                       ((uVar10 << (ulong)(*puVar24 & 0x1f)) + (uVar35 >> 5)) *
                                       puVar24[0xd]) * 8);
                    iVar20 = (**ppcVar23)(ppcVar23,uVar12 | uVar35 & 0x1f,
                                          iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 + 0xe],
                                          1);
                    if (iVar20 == 0) {
LAB_0089df6c:
                      puVar24 = *(uint **)(pDVar22 + 0x10);
                      if (puVar24 == (uint *)0x0) {
                        uVar35 = iVar21 + (uVar34 + *(int *)(pDVar22 + 0x24) * uVar28) *
                                          *(int *)(pDVar22 + 0x2c);
                        if ((*(byte *)(*(long *)(**(long **)(pDVar22 + 0x18) +
                                                (ulong)(uVar35 >> 0x13) * 8) +
                                      ((ulong)(uVar35 >> 3) & 0xffff)) >> (ulong)(uVar35 & 7) & 1)
                            == 0) goto LAB_0089e00c;
                      }
                      else {
                        ppcVar23 = *(code ***)
                                    (*(long *)(puVar24 + 10) +
                                    (ulong)(puVar24[uVar37 + 0x1a] +
                                           ((uVar9 << (ulong)(*puVar24 & 0x1f)) + (uVar34 >> 5)) *
                                           puVar24[0xd]) * 8);
                        iVar20 = (**ppcVar23)(ppcVar23,uVar34 & 0x1f | uVar11,
                                              iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2 +
                                                               0xe],1);
                        if (iVar20 == 0) {
LAB_0089e00c:
                          puVar24 = *(uint **)(pDVar22 + 0x10);
                          if (puVar24 != (uint *)0x0) {
                            ppcVar23 = *(code ***)
                                        (*(long *)(puVar24 + 10) +
                                        (ulong)(puVar24[uVar37 + 0x1a] +
                                               ((uVar10 << (ulong)(*puVar24 & 0x1f)) + (uVar34 >> 5)
                                               ) * puVar24[0xd]) * 8);
                            iVar21 = (**ppcVar23)(ppcVar23,uVar12 | uVar34 & 0x1f,
                                                  iVar21 - puVar24[(ulong)puVar24[uVar37 + 0x1a] * 2
                                                                   + 0xe],1);
                            goto LAB_0089dd90;
                          }
                          iVar20 = *(int *)(pDVar22 + 0x24);
                          uVar35 = uVar5;
                          goto LAB_0089de40;
                        }
                      }
                    }
                  }
                }
              }
LAB_0089de90:
              iVar21 = 1;
            }
          }
          else {
            iVar21 = 2;
            if (local_174 <= 0.0) {
              iVar21 = 1;
            }
          }
LAB_0089de9c:
          lVar29 = *(long *)param_1;
          uVar25 = (ulong)(uVar1 >> 3) & 0xffff;
          lVar27 = *(long *)(lVar29 + (ulong)(uVar1 >> 0x13) * 8);
          uVar35 = 3 << (ulong)(uVar1 & 6);
          uVar34 = iVar21 << (ulong)(uVar1 & 6);
          if ((uint)uVar25 < 0xfffd) {
            *(uint *)(lVar27 + uVar25) = *(uint *)(lVar27 + uVar25) & (uVar35 ^ 0xffffffff) | uVar34
            ;
          }
          else {
            uVar2 = (uVar1 >> 3) + 1;
            uVar3 = (uVar1 >> 3) + 2;
            lVar32 = (ulong)(uVar2 >> 0x10) * 8;
            lVar33 = (ulong)(uVar3 >> 0x10) * 8;
            uVar31 = (ulong)uVar2 & 0xffff;
            uVar30 = (ulong)uVar3 & 0xffff;
            uVar6 = *(undefined *)(*(long *)(lVar29 + lVar32) + uVar31);
            uVar7 = *(undefined *)(*(long *)(lVar29 + lVar33) + uVar30);
            *(byte *)(lVar27 + uVar25) =
                 *(byte *)(lVar27 + uVar25) & ((byte)uVar35 ^ 0xff) | (byte)uVar34;
            *(undefined *)(*(long *)(*(long *)param_1 + lVar32) + uVar31) = uVar6;
            *(undefined *)(*(long *)(*(long *)param_1 + lVar33) + uVar30) = uVar7;
          }
          uVar36 = uVar36 + 1;
          uVar1 = uVar1 + 2;
        } while (uVar8 != uVar36);
      }
      local_1b4 = local_1b4 + 1;
      local_1b8 = local_1b8 + param_6 * 2;
    } while (local_1b4 != uVar4);
  }
  DensityMapModifier::~DensityMapModifier(aDStack_170);
LAB_0089e080:
  if (*(long *)(lVar13 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


