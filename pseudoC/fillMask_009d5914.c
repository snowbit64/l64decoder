// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillMask
// Entry Point: 009d5914
// Size: 2552 bytes
// Signature: undefined __thiscall fillMask(ProceduralPlacementManager * this, uint param_1, uint param_2, bool param_3, ProceduralPlacementMask * param_4, uint param_5, PPMask * param_6, ProceduralPlacementRule * param_7, DistanceMatrixTypeField * param_8, uint param_9, uchar * * param_10, TerrainTransformGroup * param_11, ScenegraphNode * param_12)


/* ProceduralPlacementManager::fillMask(unsigned int, unsigned int, bool, ProceduralPlacementMask*,
   unsigned int, ProceduralPlacementScriptBinding::PPMask*, ProceduralPlacementRule*,
   ProceduralPlacementCacheManager::DistanceMatrixTypeField&, unsigned int, unsigned char*&,
   TerrainTransformGroup*, ScenegraphNode*) */

void __thiscall
ProceduralPlacementManager::fillMask
          (ProceduralPlacementManager *this,uint param_1,uint param_2,bool param_3,
          ProceduralPlacementMask *param_4,uint param_5,PPMask *param_6,
          ProceduralPlacementRule *param_7,DistanceMatrixTypeField *param_8,uint param_9,
          uchar **param_10,TerrainTransformGroup *param_11,ScenegraphNode *param_12)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ProceduralPlacementCacheManager *pPVar16;
  TransformGroup *pTVar17;
  char *pcVar18;
  RawTransformGroup *this_00;
  DensityMapModifier *this_01;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  ProceduralPlacementObjectDesc *pPVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  int iVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float local_148;
  float local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 auStack_e8 [2];
  undefined8 local_d8 [2];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  uVar7 = (**(code **)(**(long **)param_6 + 0x40))();
  if (*(int *)(this + 0x130) < *(int *)(this + 0x134)) {
    if ((*(int *)(this + 0x138) < *(int *)(this + 0x13c)) &&
       ((((uVar13 = 0, (int)param_1 < *(int *)(this + 0x130) ||
          (*(int *)(this + 0x134) < (int)param_1)) || ((int)param_2 < *(int *)(this + 0x138))) ||
        (*(int *)(this + 0x13c) < (int)param_2)))) goto LAB_009d5c0c;
  }
  uVar8 = 0;
  if (param_5 != 0) {
    uVar8 = uVar7 / param_5;
  }
  iVar10 = uVar8 * param_1;
  iVar29 = uVar8 * param_2;
  uVar14 = (**(code **)(**(long **)param_6 + 0x70))(*(long **)param_6,iVar10,iVar29);
  if ((uVar14 & 1) != 0) {
    uVar14 = (**(code **)(**(long **)param_6 + 0x58))();
    if ((uVar14 & 1) == 0) {
      plVar28 = (long *)ProceduralPlacementRule::getRandomObject();
    }
    else {
      plVar28 = *(long **)param_6;
      if ((plVar28 == (long *)0x0) ||
         (lVar15 = __dynamic_cast(plVar28,&ProceduralPlacementMask::typeinfo,
                                  &ProceduralPlacementIndexMask::typeinfo,0), lVar15 == 0)) {
        fVar31 = (float)(**(code **)(*plVar28 + 0x68))(plVar28,iVar10,iVar29);
        uVar7 = (uint)fVar31;
      }
      else {
        fVar31 = (float)(**(code **)(*plVar28 + 0x68))(plVar28,iVar10,iVar29);
        if ((int)fVar31 == 0) goto LAB_009d5c08;
        uVar7 = (int)fVar31 - 1;
      }
      plVar28 = (long *)ProceduralPlacementRule::getObject(param_7,uVar7);
    }
    if (plVar28 != (long *)0x0) {
      pPVar16 = (ProceduralPlacementCacheManager *)ProceduralPlacementCacheManager::getInstance();
      bVar6 = ProceduralPlacementCacheManager::checkDistances
                        (pPVar16,(ProceduralPlacementObjectDesc *)plVar28,param_1,param_2);
      fVar31 = (float)ProceduralPlacementCacheManager::DistanceMatrixTypeField::getMinDistanceAt
                                (param_8,(float)(ulong)param_1,(float)(ulong)param_2);
      fVar34 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x44));
      if (((fVar34 <= fVar31 & bVar6) != 0) || (!param_3)) {
        uVar8 = (**(code **)(*(long *)param_4 + 0x40))(param_4);
        uVar7 = 0;
        if (param_5 != 0) {
          uVar7 = uVar8 / param_5;
        }
        iVar10 = uVar7 * param_1;
        iVar29 = uVar7 * param_2;
        fVar31 = (float)(**(code **)(*(long *)param_4 + 0x68))(param_4,iVar10,iVar29);
        fVar34 = (float)(**(code **)(*(long *)param_4 + 0x68))(param_4,iVar10,iVar29);
        fVar32 = (float)(**(code **)(*(long *)param_4 + 0x68))(param_4,iVar10,iVar29);
        uVar7 = 0;
        if (param_5 != 0) {
          uVar7 = param_9 / param_5;
        }
        iVar10 = uVar7 * param_1;
        iVar29 = uVar7 * param_2;
        lVar15 = ProceduralPlacementCacheManager::getInstance();
        uVar8 = *(uint *)(lVar15 + 0x38);
        lVar15 = ProceduralPlacementCacheManager::getInstance();
        uVar11 = *(uint *)(lVar15 + 0x3c);
        EngineManager::getInstance();
        pTVar17 = (TransformGroup *)Renderer::getRootNode();
        lVar15 = getTerrainNode(pTVar17);
        fVar38 = *(float *)(lVar15 + 0x218);
        fVar39 = *(float *)(lVar15 + 0x204);
        fVar33 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x48));
        fVar33 = (float)MathUtil::degreeToRadian(fVar33);
        fVar33 = cosf(fVar33);
        fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x4c));
        fVar35 = (float)MathUtil::degreeToRadian(fVar35);
        fVar35 = cosf(fVar35);
        if ((fVar33 < 0.999) || (1e-05 < fVar35)) {
          BaseTerrain::getInterpolatedNormalAtPoint
                    ((BaseTerrain *)(lVar15 + 0x170),
                     ((float)iVar10 - (float)(ulong)uVar8 * 0.5) / fVar38 + fVar39,
                     ((float)iVar29 - (float)(ulong)uVar11 * 0.5) / fVar38 + fVar39,
                     (float *)&local_f0);
          uVar13 = 0;
          uVar12 = NEON_fmadd((undefined4)local_f0,(undefined4)local_f0,
                              local_f0._4_4_ * local_f0._4_4_);
          fVar38 = (float)NEON_fmadd((undefined4)auStack_e8[0],(undefined4)auStack_e8[0],uVar12);
          if ((local_f0._4_4_ / SQRT(fVar38) < fVar35) ||
             ((fVar33 < local_f0._4_4_ / SQRT(fVar38) ||
              (this[0x108] != (ProceduralPlacementManager)0x0)))) goto LAB_009d5c0c;
        }
        else if (this[0x108] != (ProceduralPlacementManager)0x0) goto LAB_009d5c08;
        iVar9 = (**(code **)(*plVar28 + 0x10))(plVar28);
        if ((iVar9 == 0) && (((int)fVar31 & 1U) == 0)) {
          if ((int)((ulong)(*(long *)(lVar15 + 0x180) - *(long *)(lVar15 + 0x178)) >> 4) *
              -0x45d1745d != 0) {
            uVar8 = 0;
            do {
              pcVar18 = (char *)BaseTerrain::getDetailLayerName
                                          ((BaseTerrain *)(lVar15 + 0x170),uVar8);
              pPVar23 = (ProceduralPlacementObjectDesc *)((long)plVar28 + 0x49);
              if (((byte)*(ProceduralPlacementObjectDesc *)(plVar28 + 9) & 1) != 0) {
                pPVar23 = (ProceduralPlacementObjectDesc *)plVar28[0xb];
              }
              iVar9 = strcmp(pcVar18,(char *)pPVar23);
              if (iVar9 == 0) {
                uVar11 = 1;
                local_f0 = CONCAT44(local_f0._4_4_,uVar8);
                goto LAB_009d6158;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < (uint)((int)((ulong)(*(long *)(lVar15 + 0x180) -
                                                 *(long *)(lVar15 + 0x178)) >> 4) * -0x45d1745d));
          }
          lVar2 = *(long *)(lVar15 + 0x1a8);
          uVar14 = *(long *)(lVar15 + 0x1b0) - lVar2;
          if ((int)(uVar14 >> 6) != 0) {
            lVar30 = 0;
            pPVar23 = (ProceduralPlacementObjectDesc *)((long)plVar28 + 0x49);
            if (((byte)*(ProceduralPlacementObjectDesc *)(plVar28 + 9) & 1) != 0) {
              pPVar23 = (ProceduralPlacementObjectDesc *)plVar28[0xb];
            }
LAB_009d5d84:
            lVar19 = lVar2 + lVar30;
            pcVar18 = (char *)(lVar19 + 9);
            if ((*(byte *)(lVar19 + 8) & 1) != 0) {
              pcVar18 = *(char **)(lVar19 + 0x18);
            }
            iVar9 = strcmp(pcVar18,(char *)pPVar23);
            if (iVar9 != 0) goto code_r0x009d5dac;
            uVar11 = *(uint *)(lVar19 + 0x20);
            uVar14 = (ulong)uVar11;
            if (uVar11 != 0) {
              if (uVar11 < 8) {
LAB_009d6268:
                uVar20 = 0;
              }
              else {
                if ((&local_f0 < (undefined8 *)(lVar2 + uVar14 * 4 + lVar30 + 0x24)) &&
                   (lVar2 + lVar30 + 0x24U < (long)&local_f0 + uVar14 * 4)) goto LAB_009d6268;
                uVar20 = uVar14 & 0xfffffff8;
                puVar22 = (undefined8 *)(lVar19 + 0x34);
                puVar25 = auStack_e8 + 1;
                uVar26 = uVar20;
                do {
                  puVar4 = puVar22 + -1;
                  uVar13 = puVar22[-2];
                  uVar37 = puVar22[1];
                  uVar36 = *puVar22;
                  puVar22 = puVar22 + 4;
                  uVar26 = uVar26 - 8;
                  puVar25[-1] = *puVar4;
                  puVar25[-2] = uVar13;
                  puVar25[1] = uVar37;
                  *puVar25 = uVar36;
                  puVar25 = puVar25 + 4;
                } while (uVar26 != 0);
                if (uVar20 == uVar14) goto LAB_009d6158;
              }
              lVar19 = uVar14 - uVar20;
              puVar21 = (undefined4 *)((long)&local_f0 + uVar20 * 4);
              puVar24 = (undefined4 *)(lVar2 + uVar20 * 4 + lVar30 + 0x24);
              do {
                lVar19 = lVar19 + -1;
                *puVar21 = *puVar24;
                puVar21 = puVar21 + 1;
                puVar24 = puVar24 + 1;
              } while (lVar19 != 0);
            }
            goto LAB_009d6158;
          }
          uVar11 = 0;
          goto LAB_009d6158;
        }
        iVar9 = (**(code **)(*plVar28 + 0x10))(plVar28);
        if ((iVar9 == 1) && (((uint)(int)fVar34 >> 1 & 1) == 0)) {
          if (plVar28[0x13] == 0) {
            plVar27 = *(long **)(param_11 + 0x540);
            if ((int)((ulong)(*(long *)(param_11 + 0x548) - (long)plVar27) >> 3) != 0) {
              pPVar23 = (ProceduralPlacementObjectDesc *)plVar28[0x11];
              uVar14 = (ulong)(*(long *)(param_11 + 0x548) - (long)plVar27) >> 3 & 0xffffffff;
              if (((byte)*(ProceduralPlacementObjectDesc *)(plVar28 + 0xf) & 1) == 0) {
                pPVar23 = (ProceduralPlacementObjectDesc *)((long)plVar28 + 0x79);
              }
              do {
                lVar15 = *plVar27;
                pcVar18 = (char *)(lVar15 + 0x29);
                if ((*(byte *)(lVar15 + 0x28) & 1) != 0) {
                  pcVar18 = *(char **)(lVar15 + 0x38);
                }
                iVar10 = strcmp(pcVar18,(char *)pPVar23);
                if (iVar10 == 0) {
                  this_01 = (DensityMapModifier *)operator_new(0x30);
                    /* try { // try from 009d62ac to 009d62af has its CatchHandler @ 009d630c */
                  DensityMapModifier::DensityMapModifier(this_01,*(DensityMap **)(lVar15 + 0x50));
                  plVar28[0x13] = (long)this_01;
                  uVar12 = (**(code **)(**(long **)(lVar15 + 0x50) + 0x48))();
                  *(undefined4 *)(plVar28 + 0x14) = uVar12;
                  break;
                }
                plVar27 = plVar27 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          if (param_5 <= *(uint *)(plVar28 + 0x14)) {
            uVar7 = 0;
            if (param_5 != 0) {
              uVar7 = *(uint *)(plVar28 + 0x14) / param_5;
            }
            uVar8 = uVar7;
            if (uVar7 < 2) {
              uVar8 = 1;
            }
            iVar10 = 0;
            do {
              iVar29 = 0;
              iVar9 = -1;
              do {
                DensityMapModifier::writeValue
                          ((DensityMapModifier *)plVar28[0x13],iVar29 + uVar7 * param_1,
                           iVar10 + uVar7 * param_2,*(uint *)(plVar28 + 0x12));
                iVar1 = iVar9 + 1;
                iVar29 = iVar29 + 1;
                uVar11 = iVar9 + 2;
                iVar9 = iVar1;
              } while (uVar11 != uVar8);
              bVar5 = iVar10 != iVar1;
              iVar10 = iVar10 + 1;
            } while (bVar5);
          }
        }
        else {
          iVar9 = (**(code **)(*plVar28 + 0x10))(plVar28);
          uVar13 = 0;
          if ((iVar9 != 2) || (((uint)(int)fVar32 >> 2 & 1) != 0)) goto LAB_009d5c0c;
          toTerrainLocalSpace((ProceduralPlacementManager *)0x0,iVar10,iVar29,&local_144,&local_148)
          ;
          EngineManager::getInstance();
          pTVar17 = (TransformGroup *)Renderer::getRootNode();
          lVar15 = getTerrainNode(pTVar17);
          fVar31 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                    ((BaseTerrain *)(lVar15 + 0x170),
                                     local_144 / *(float *)(lVar15 + 0x218) +
                                     *(float *)(lVar15 + 0x204),
                                     local_148 / *(float *)(lVar15 + 0x218) +
                                     *(float *)(lVar15 + 0x204));
          this_00 = (RawTransformGroup *)
                    ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::getClone
                              ((ProceduralPlacementReferenceObjectDesc *)plVar28,
                               (MeshSplitFileState *)0x0);
          (**(code **)(*(long *)param_12 + 0x18))(param_12,this_00,0xffffffff);
          auStack_e8[0] = 0;
          local_f0 = 0x3f800000;
          local_d8[0] = 0;
          auStack_e8[1] = 0x3f80000000000000;
          uStack_c8 = 0x3f800000;
          local_d8[1] = 0;
          local_b8 = 0x3f80000000000000;
          local_c0 = 0;
          RawTransformGroup::updateWorldTransformation();
          RawTransformGroup::updateWorldTransformation();
          Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(param_12 + 0xb8));
          fVar32 = *(float *)(plVar28 + 0xe);
          fVar34 = *(float *)((long)plVar28 + 0x74);
          local_f4 = 0x3f800000;
          uStack_128 = 0;
          local_130 = 0x3f800000;
          local_118 = 0;
          local_120 = 0x3f80000000000000;
          uStack_108 = 0x3f800000;
          local_110 = 0;
          if (fVar32 <= fVar34) {
            uVar12 = MathUtil::getRandom();
            fVar34 = (float)NEON_fmadd(fVar34 - fVar32,uVar12,fVar32);
            if (((byte)this_00[0x41] >> 3 & 1) != 0) {
              TransformGroup::updateEulerFromMatrix();
            }
            fVar33 = fVar34 * *(float *)(this_00 + 0x148) * 0.0;
            fVar35 = fVar34 * *(float *)(this_00 + 0x14c) * 0.0;
            uStack_108 = CONCAT44(uStack_108._4_4_,fVar34 * *(float *)(this_00 + 0x150));
            local_130 = CONCAT44(fVar33,fVar34 * *(float *)(this_00 + 0x148));
            fVar32 = fVar34 * *(float *)(this_00 + 0x150) * 0.0;
            uStack_128 = CONCAT44(uStack_128._4_4_,fVar33);
            local_120 = CONCAT44(fVar34 * *(float *)(this_00 + 0x14c),fVar35);
            local_118 = CONCAT44(local_118._4_4_,fVar35);
            local_110 = CONCAT44(fVar32,fVar32);
          }
          uVar12 = NEON_fmadd(local_144,(undefined4)auStack_e8[0],fVar31 * (float)local_d8[0]);
          local_f8 = (float)NEON_fmadd(local_148,(undefined4)uStack_c8,uVar12);
          local_100 = CONCAT44((float)((ulong)local_c0 >> 0x20) +
                               (float)((ulong)auStack_e8[1] >> 0x20) * fVar31 +
                               (float)((ulong)local_f0 >> 0x20) * local_144 +
                               (float)((ulong)local_d8[1] >> 0x20) * local_148,
                               (float)local_c0 +
                               (float)auStack_e8[1] * fVar31 + (float)local_f0 * local_144 +
                               (float)local_d8[1] * local_148);
          local_f8 = (float)local_b8 + local_f8;
          RawTransformGroup::setTransformation(this_00,(Matrix4x4 *)&local_130,0);
          if (((byte)this_00[0x41] >> 3 & 1) != 0) {
            TransformGroup::updateEulerFromMatrix();
          }
          local_140 = *(undefined8 *)(this_00 + 0x13c);
          local_138 = *(undefined4 *)(this_00 + 0x144);
          fVar31 = (float)MathUtil::getRandom();
          uVar12 = NEON_fmadd(fVar31 + fVar31,0x40490fdb,local_140._4_4_);
          local_140 = CONCAT44(uVar12,(undefined4)local_140);
          TransformGroup::setRotation((TransformGroup *)this_00,(Vector3 *)&local_140);
        }
        goto LAB_009d61e0;
      }
    }
  }
LAB_009d5c08:
  uVar13 = 0;
  goto LAB_009d5c0c;
code_r0x009d5dac:
  lVar30 = lVar30 + 0x40;
  if ((uVar14 >> 6 & 0xffffffff) * 0x40 - lVar30 == 0) goto code_r0x009d5dbc;
  goto LAB_009d5d84;
code_r0x009d5dbc:
  uVar11 = 0;
LAB_009d6158:
  uVar8 = TerrainUtil::getRandomLayer
                    (uVar11,(uint *)&local_f0,param_1,param_2,*(float *)(this + 0xdc),
                     *(uint *)(this + 0xd0));
  if ((uVar8 < (uint)((int)((ulong)(*(long *)(lVar15 + 0x180) - *(long *)(lVar15 + 0x178)) >> 4) *
                     -0x45d1745d)) && (param_5 <= param_9)) {
    uVar11 = 0;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    do {
      uVar14 = 0;
      do {
        iVar9 = (int)uVar14;
        uVar14 = uVar14 + 1;
        (*param_10)[(uVar11 + iVar29) * param_9 + iVar10 + iVar9] = (uchar)uVar8;
      } while (uVar14 != uVar7);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
LAB_009d61e0:
  if (param_3) {
    ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPoint(param_8,param_1,param_2);
  }
  pPVar16 = (ProceduralPlacementCacheManager *)ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementCacheManager::placeType(pPVar16,(basic_string *)(plVar28 + 2),param_1,param_2);
  ProceduralPlacementRule::addObjectInstance
            (param_7,(ProceduralPlacementObjectDesc *)plVar28,param_1,param_2);
  uVar13 = 1;
LAB_009d5c0c:
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


