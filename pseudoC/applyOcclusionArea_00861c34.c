// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyOcclusionArea
// Entry Point: 00861c34
// Size: 736 bytes
// Signature: undefined __thiscall applyOcclusionArea(DensityMapHeightUpdater * this, OcclusionArea * param_1, ushort * param_2, int param_3, int param_4, int param_5, int param_6)


/* DensityMapHeightUpdater::applyOcclusionArea(DensityMapHeightUpdater::OcclusionArea const&,
   unsigned short*, int, int, int, int) */

void __thiscall
DensityMapHeightUpdater::applyOcclusionArea
          (DensityMapHeightUpdater *this,OcclusionArea *param_1,ushort *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  OcclusionArea OVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ushort uVar19;
  undefined4 uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  ParallelogramHelper aPStack_e8 [72];
  uint local_a0;
  uint local_9c;
  uint local_90;
  uint uStack_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  fVar23 = *(float *)param_1;
  fVar25 = *(float *)(param_1 + 4);
  fVar26 = *(float *)(param_1 + 8);
  lVar18 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  fVar25 = fVar25 - *(float *)(lVar18 + 0xec);
  fVar23 = fVar23 - *(float *)(lVar18 + 0xe8);
  fVar26 = fVar26 - *(float *)(lVar18 + 0xf0);
  uVar20 = NEON_fmadd(fVar23,*(undefined4 *)(lVar18 + 0xb8),fVar25 * *(float *)(lVar18 + 0xbc));
  uVar24 = NEON_fmadd(fVar23,*(undefined4 *)(lVar18 + 0xd8),fVar25 * *(float *)(lVar18 + 0xdc));
  fVar25 = (float)NEON_fmadd(fVar26,*(undefined4 *)(lVar18 + 0xc0),uVar20);
  fVar23 = (float)NEON_fmadd(fVar26,*(undefined4 *)(lVar18 + 0xe0),uVar24);
  TerrainDataPlane::localToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar25,fVar23,&fStack_ec,&local_f0);
  uVar24 = *(undefined4 *)(param_1 + 0xc);
  fVar23 = *(float *)(param_1 + 0x10);
  uVar27 = *(undefined4 *)(param_1 + 0x14);
  lVar18 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  uVar20 = NEON_fmadd(uVar24,*(undefined4 *)(lVar18 + 0xb8),fVar23 * *(float *)(lVar18 + 0xbc));
  uVar24 = NEON_fmadd(uVar24,*(undefined4 *)(lVar18 + 0xd8),fVar23 * *(float *)(lVar18 + 0xdc));
  fVar25 = (float)NEON_fmadd(uVar27,*(undefined4 *)(lVar18 + 0xc0),uVar20);
  fVar23 = (float)NEON_fmadd(uVar27,*(undefined4 *)(lVar18 + 0xe0),uVar24);
  TerrainDataPlane::localDirToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar25,fVar23,&fStack_f4,&local_f8);
  uVar24 = *(undefined4 *)(param_1 + 0x18);
  fVar23 = *(float *)(param_1 + 0x1c);
  uVar27 = *(undefined4 *)(param_1 + 0x20);
  lVar18 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  uVar20 = NEON_fmadd(uVar24,*(undefined4 *)(lVar18 + 0xb8),fVar23 * *(float *)(lVar18 + 0xbc));
  uVar24 = NEON_fmadd(uVar24,*(undefined4 *)(lVar18 + 0xd8),fVar23 * *(float *)(lVar18 + 0xdc));
  fVar25 = (float)NEON_fmadd(uVar27,*(undefined4 *)(lVar18 + 0xc0),uVar20);
  fVar23 = (float)NEON_fmadd(uVar27,*(undefined4 *)(lVar18 + 0xe0),uVar24);
  TerrainDataPlane::localDirToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar25,fVar23,&fStack_fc,&local_100);
  fStack_ec = fStack_ec - (float)param_5;
  local_f0 = local_f0 - (float)param_6;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_e8,fStack_ec,local_f0,fStack_f4,local_f8,fStack_fc,local_100,param_3,param_4,2)
  ;
  if (local_a0 < local_9c) {
    iVar17 = local_a0 * param_3;
    iVar16 = 0;
    uVar2 = local_a0;
    do {
      ParallelogramHelper::startXIteration(aPStack_e8,uVar2);
      uVar11 = (ulong)local_90;
      uVar3 = (ulong)uStack_8c;
      if (local_90 < uStack_8c) {
        OVar4 = param_1[0x24];
        uVar13 = uVar3 - uVar11;
        if (((0xf < uVar13) &&
            (!CARRY4(local_90 + (local_a0 + iVar16) * param_3,(uint)(~uVar11 + uVar3)))) &&
           (~uVar11 + uVar3 >> 0x20 == 0)) {
          uVar14 = uVar13 & 0xfffffffffffffff0;
          uVar11 = uVar14 + uVar11;
          auVar21 = NEON_cmeq(ZEXT116((byte)OVar4),ZEXT816(0),1);
          uVar12 = local_90 + iVar17;
          auVar22[0] = auVar21[0];
          auVar22[1] = auVar22[0];
          auVar22[2] = auVar22[0];
          auVar22[3] = auVar22[0];
          auVar22[4] = auVar22[0];
          auVar22[5] = auVar22[0];
          auVar22[6] = auVar22[0];
          auVar22[7] = auVar22[0];
          auVar22[8] = auVar22[0];
          auVar22[9] = auVar22[0];
          auVar22[10] = auVar22[0];
          auVar22[11] = auVar22[0];
          auVar22[12] = auVar22[0];
          auVar22[13] = auVar22[0];
          auVar22[14] = auVar22[0];
          auVar22[15] = auVar22[0];
          auVar21[9] = 0x80;
          auVar21._0_9_ = (unkuint9)0x8000800080008000;
          auVar21[10] = 0;
          auVar21[11] = 0x80;
          auVar21[12] = 0;
          auVar21[13] = 0x80;
          auVar21[14] = 0;
          auVar21[15] = 0x80;
          auVar8[9] = 0x40;
          auVar8._0_9_ = (unkuint9)0x4000400040004000;
          auVar8[10] = 0;
          auVar8[11] = 0x40;
          auVar8[12] = 0;
          auVar8[13] = 0x40;
          auVar8[14] = 0;
          auVar8[15] = 0x40;
          auVar21 = NEON_bsl(auVar22,auVar8,auVar21,1);
          uVar15 = uVar14;
          do {
            puVar1 = (undefined8 *)(param_2 + uVar12);
            uVar12 = uVar12 + 0x10;
            uVar15 = uVar15 - 0x10;
            uVar7 = puVar1[1];
            uVar6 = *puVar1;
            uVar10 = puVar1[3];
            uVar9 = puVar1[2];
            puVar1[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) | auVar21[15],
                                 CONCAT16((byte)((ulong)uVar7 >> 0x30) | auVar21[14],
                                          CONCAT15((byte)((ulong)uVar7 >> 0x28) | auVar21[13],
                                                   CONCAT14((byte)((ulong)uVar7 >> 0x20) |
                                                            auVar21[12],
                                                            CONCAT13((byte)((ulong)uVar7 >> 0x18) |
                                                                     auVar21[11],
                                                                     CONCAT12((byte)((ulong)uVar7 >>
                                                                                    0x10) |
                                                                              auVar21[10],
                                                                              CONCAT11((byte)((ulong
                                                  )uVar7 >> 8) | auVar21[9],(byte)uVar7 | auVar21[8]
                                                  )))))));
            *puVar1 = CONCAT17((byte)((ulong)uVar6 >> 0x38) | auVar21[7],
                               CONCAT16((byte)((ulong)uVar6 >> 0x30) | auVar21[6],
                                        CONCAT15((byte)((ulong)uVar6 >> 0x28) | auVar21[5],
                                                 CONCAT14((byte)((ulong)uVar6 >> 0x20) | auVar21[4],
                                                          CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                                   auVar21[3],
                                                                   CONCAT12((byte)((ulong)uVar6 >>
                                                                                  0x10) | auVar21[2]
                                                                            ,CONCAT11((byte)((ulong)
                                                  uVar6 >> 8) | auVar21[1],(byte)uVar6 | auVar21[0])
                                                  ))))));
            puVar1[3] = CONCAT17((byte)((ulong)uVar10 >> 0x38) | auVar21[15],
                                 CONCAT16((byte)((ulong)uVar10 >> 0x30) | auVar21[14],
                                          CONCAT15((byte)((ulong)uVar10 >> 0x28) | auVar21[13],
                                                   CONCAT14((byte)((ulong)uVar10 >> 0x20) |
                                                            auVar21[12],
                                                            CONCAT13((byte)((ulong)uVar10 >> 0x18) |
                                                                     auVar21[11],
                                                                     CONCAT12((byte)((ulong)uVar10
                                                                                    >> 0x10) |
                                                                              auVar21[10],
                                                                              CONCAT11((byte)((ulong
                                                  )uVar10 >> 8) | auVar21[9],
                                                  (byte)uVar10 | auVar21[8])))))));
            puVar1[2] = CONCAT17((byte)((ulong)uVar9 >> 0x38) | auVar21[7],
                                 CONCAT16((byte)((ulong)uVar9 >> 0x30) | auVar21[6],
                                          CONCAT15((byte)((ulong)uVar9 >> 0x28) | auVar21[5],
                                                   CONCAT14((byte)((ulong)uVar9 >> 0x20) |
                                                            auVar21[4],
                                                            CONCAT13((byte)((ulong)uVar9 >> 0x18) |
                                                                     auVar21[3],
                                                                     CONCAT12((byte)((ulong)uVar9 >>
                                                                                    0x10) |
                                                                              auVar21[2],
                                                                              CONCAT11((byte)((ulong
                                                  )uVar9 >> 8) | auVar21[1],(byte)uVar9 | auVar21[0]
                                                  )))))));
          } while (uVar15 != 0);
          if (uVar13 == uVar14) goto LAB_00861de4;
        }
        uVar19 = 0x4000;
        if (OVar4 != (OcclusionArea)0x0) {
          uVar19 = 0x8000;
        }
        lVar18 = uVar3 - uVar11;
        uVar12 = iVar17 + (int)uVar11;
        do {
          lVar18 = lVar18 + -1;
          param_2[uVar12] = param_2[uVar12] | uVar19;
          uVar12 = uVar12 + 1;
        } while (lVar18 != 0);
      }
LAB_00861de4:
      uVar2 = uVar2 + 1;
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + param_3;
    } while (uVar2 < local_9c);
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


