// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 008d5c84
// Size: 1568 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* FoliageBendingSystem::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void FoliageBendingSystem::updateRendering
               (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  DensityAnimationMap *this;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ACCESS_MODE AVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong __nmemb;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  FoliageUpdateCb aFStack_140 [32];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  long local_90;
  
  lVar1 = tpidr_el0;
  this = (DensityAnimationMap *)(param_2 + 0x98);
  local_90 = *(long *)(lVar1 + 0x28);
  uVar2 = DensityAnimationMap::verifyInitialization(this,*(IRenderDevice **)param_3);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_3 + 0x100) = 0;
    *(undefined8 *)(param_3 + 0x108) = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x48);
    lVar14 = *(long *)(param_2 + 0x50);
    DensityAnimationMap::scrollTo(this,(Vector3 *)(param_3 + 0x60));
    iVar13 = (int)(lVar14 - lVar5 >> 2);
    AVar4 = 0;
    if (iVar13 != 0) {
      AVar4 = 3;
    }
    DensityAnimationMap::refreshDirtyTiles(this,*(IRenderDevice **)param_3,AVar4);
    if (iVar13 != 0) {
      uVar2 = 0;
      __nmemb = (ulong)(lVar14 - lVar5) >> 2 & 0xffffffff;
      do {
        uVar16 = (ulong)*(uint *)(*(long *)(param_2 + 0x48) + uVar2 * 4);
        lVar5 = *(long *)(param_2 + 0x30);
        lVar15 = lVar5 + uVar16 * 0xa0;
        *(long *)(*(long *)(param_2 + 0x38) + uVar2 * 8) = lVar15;
        lVar14 = *(long *)(lVar15 + 0x18);
        RawTransformGroup::updateWorldTransformation();
        fVar29 = *(float *)(lVar15 + 0xc);
        fVar19 = *(float *)(param_2 + 0x90);
        fVar26 = fVar19 + *(float *)(lVar15 + 8);
        fVar31 = *(float *)(lVar15 + 4) - fVar19;
        fVar17 = *(float *)(lVar15 + 0x10) - fVar19;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xb8),fVar29 * *(float *)(lVar14 + 200))
        ;
        fVar22 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xd8),uVar21);
        fVar22 = *(float *)(lVar14 + 0xe8) + fVar22;
        puVar7 = (undefined8 *)(lVar15 + 0x20);
        *(float *)puVar7 = fVar22;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xbc),fVar29 * *(float *)(lVar14 + 0xcc)
                           );
        fVar23 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xdc),uVar21);
        fVar23 = *(float *)(lVar14 + 0xec) + fVar23;
        pfVar10 = (float *)(lVar15 + 0x24);
        *pfVar10 = fVar23;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xc0),fVar29 * *(float *)(lVar14 + 0xd0)
                           );
        fVar24 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xe0),uVar21);
        fVar24 = *(float *)(lVar14 + 0xf0) + fVar24;
        pfVar8 = (float *)(lVar15 + 0x28);
        *pfVar8 = fVar24;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xb8),fVar29 * *(float *)(lVar14 + 200))
        ;
        fVar25 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xd8),uVar21);
        puVar6 = (undefined8 *)(lVar15 + 0x2c);
        *(float *)puVar6 = *(float *)(lVar14 + 0xe8) + fVar25;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xbc),fVar29 * *(float *)(lVar14 + 0xcc)
                           );
        fVar25 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xdc),uVar21);
        *(float *)(lVar15 + 0x30) = *(float *)(lVar14 + 0xec) + fVar25;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xc0),fVar29 * *(float *)(lVar14 + 0xd0)
                           );
        fVar18 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar14 + 0xe0),uVar21);
        fVar18 = *(float *)(lVar14 + 0xf0) + fVar18;
        fVar19 = fVar19 + *(float *)(lVar15 + 0x14);
        *(float *)(lVar15 + 0x34) = fVar18;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xb8),fVar29 * *(float *)(lVar14 + 200))
        ;
        fVar25 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xd8),uVar21);
        fVar25 = *(float *)(lVar14 + 0xe8) + fVar25;
        puVar11 = (undefined8 *)(lVar15 + 0x38);
        *(float *)puVar11 = fVar25;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xbc),fVar29 * *(float *)(lVar14 + 0xcc)
                           );
        fVar20 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xdc),uVar21);
        fVar20 = *(float *)(lVar14 + 0xec) + fVar20;
        *(float *)(lVar15 + 0x3c) = fVar20;
        uVar21 = NEON_fmadd(fVar26,*(undefined4 *)(lVar14 + 0xc0),fVar29 * *(float *)(lVar14 + 0xd0)
                           );
        fVar17 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xe0),uVar21);
        fVar17 = *(float *)(lVar14 + 0xf0) + fVar17;
        *(float *)(lVar15 + 0x40) = fVar17;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xb8),fVar29 * *(float *)(lVar14 + 200))
        ;
        fVar27 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xd8),uVar21);
        fVar27 = *(float *)(lVar14 + 0xe8) + fVar27;
        puVar12 = (undefined8 *)(lVar15 + 0x44);
        *(float *)puVar12 = fVar27;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xbc),fVar29 * *(float *)(lVar14 + 0xcc)
                           );
        fVar26 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xdc),uVar21);
        fVar26 = *(float *)(lVar14 + 0xec) + fVar26;
        *(float *)(lVar15 + 0x48) = fVar26;
        uVar21 = NEON_fmadd(fVar31,*(undefined4 *)(lVar14 + 0xc0),fVar29 * *(float *)(lVar14 + 0xd0)
                           );
        fVar19 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar14 + 0xe0),uVar21);
        fVar19 = *(float *)(lVar14 + 0xf0) + fVar19;
        *(float *)(lVar15 + 0x4c) = fVar19;
        uVar21 = NEON_fmadd(*(undefined4 *)(lVar14 + 0xb8),0,*(undefined4 *)(lVar14 + 200));
        fVar29 = (float)NEON_fmadd(*(undefined4 *)(lVar14 + 0xd8),0,uVar21);
        *(float *)(lVar15 + 0x88) = fVar29;
        uVar21 = NEON_fmadd(*(undefined4 *)(lVar14 + 0xbc),0,*(undefined4 *)(lVar14 + 0xcc));
        fVar31 = (float)NEON_fmadd(*(undefined4 *)(lVar14 + 0xdc),0,uVar21);
        *(float *)(lVar15 + 0x8c) = fVar31;
        uVar33 = NEON_fmadd(*(undefined4 *)(lVar14 + 0xc0),0,*(undefined4 *)(lVar14 + 0xd0));
        uVar21 = NEON_fmadd(fVar29,fVar22,fVar23 * fVar31);
        fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar14 + 0xe0),0,uVar33);
        uVar21 = NEON_fmadd(fVar22,fVar24,uVar21);
        *(undefined4 *)(lVar15 + 0x94) = uVar21;
        *(float *)(lVar15 + 0x90) = fVar22;
        if (fVar31 < 0.0) {
          uVar3 = *puVar7;
          *puVar7 = *puVar6;
          uVar21 = *(undefined4 *)(lVar15 + 0x28);
          *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)(lVar15 + 0x34);
          fVar30 = *(float *)puVar7;
          fVar24 = *pfVar10;
          *(float *)(lVar15 + 0x88) = -fVar29;
          *(undefined4 *)(lVar15 + 0x34) = uVar21;
          *(float *)(lVar15 + 0x8c) = -fVar31;
          uVar9 = *puVar11;
          uVar21 = *(undefined4 *)(lVar15 + 0x4c);
          *puVar11 = *puVar12;
          fVar23 = *pfVar8;
          *puVar12 = uVar9;
          uVar33 = NEON_fmsub(fVar29,fVar30,fVar24 * -fVar31);
          *(undefined4 *)(lVar15 + 0x4c) = *(undefined4 *)(lVar15 + 0x40);
          *(undefined4 *)(lVar15 + 0x40) = uVar21;
          fVar18 = *(float *)(lVar15 + 0x34);
          fVar27 = *(float *)puVar12;
          *(float *)(lVar15 + 0x90) = -fVar22;
          fVar26 = *(float *)(lVar15 + 0x48);
          *puVar6 = uVar3;
          uVar21 = NEON_fmsub(fVar22,fVar23,uVar33);
          fVar19 = *(float *)(lVar15 + 0x4c);
          fVar25 = *(float *)(lVar5 + uVar16 * 0xa0 + 0x38);
          fVar20 = *(float *)(lVar15 + 0x3c);
          fVar17 = *(float *)(lVar15 + 0x40);
          *(undefined4 *)(lVar15 + 0x94) = uVar21;
        }
        else {
          fVar30 = *(float *)puVar7;
          fVar24 = *pfVar10;
          fVar23 = *pfVar8;
        }
        fVar29 = *(float *)puVar6;
        fVar31 = fVar26 - fVar24;
        fVar34 = fVar19 - fVar23;
        lVar5 = lVar5 + uVar16 * 0xa0;
        uVar2 = uVar2 + 1;
        fVar22 = fVar25;
        if (fVar27 < fVar25) {
          fVar22 = fVar27;
        }
        if (fVar25 < fVar27) {
          fVar25 = fVar27;
        }
        fVar27 = fVar27 - fVar30;
        *(float *)(lVar5 + 0x7c) = fVar31;
        fVar32 = fVar30;
        if (fVar29 < fVar30) {
          fVar32 = fVar29;
        }
        fVar28 = fVar30;
        if (fVar30 < fVar29) {
          fVar28 = fVar29;
        }
        fVar29 = fVar29 - fVar30;
        *(float *)(lVar5 + 0x78) = fVar27;
        *(float *)(lVar5 + 0x80) = fVar34;
        *(float *)(lVar5 + 0x68) = fVar29;
        if (fVar22 < fVar32) {
          fVar32 = fVar22;
        }
        fVar22 = *(float *)(lVar15 + 0x30);
        if (fVar28 < fVar25) {
          fVar28 = fVar25;
        }
        fVar30 = fVar22 - fVar24;
        *(float *)(lVar5 + 0x50) = fVar32;
        fVar25 = fVar20;
        if (fVar26 < fVar20) {
          fVar25 = fVar26;
        }
        fVar32 = fVar20;
        if (fVar20 < fVar26) {
          fVar32 = fVar26;
        }
        *(float *)(lVar5 + 0x5c) = fVar28;
        uVar21 = NEON_fmadd(fVar27,fVar27,fVar31 * fVar31);
        *(float *)(lVar5 + 0x6c) = fVar30;
        fVar27 = fVar24;
        if (fVar22 < fVar24) {
          fVar27 = fVar22;
        }
        fVar31 = fVar24;
        if (fVar24 < fVar22) {
          fVar31 = fVar22;
        }
        uVar33 = NEON_fmadd(fVar29,fVar29,fVar30 * fVar30);
        fVar29 = (float)NEON_fmadd(fVar34,fVar34,uVar21);
        if (fVar25 < fVar27) {
          fVar27 = fVar25;
        }
        fVar25 = fVar18 - fVar23;
        if (fVar31 < fVar32) {
          fVar31 = fVar32;
        }
        *(float *)(lVar5 + 0x54) = fVar27;
        fVar27 = (float)NEON_fmadd(fVar25,fVar25,uVar33);
        *(float *)(lVar5 + 0x70) = fVar25;
        fVar25 = fVar17;
        if (fVar19 < fVar17) {
          fVar25 = fVar19;
        }
        if (fVar17 < fVar19) {
          fVar17 = fVar19;
        }
        *(float *)(lVar5 + 0x60) = fVar31;
        fVar19 = fVar23;
        if (fVar18 < fVar23) {
          fVar19 = fVar18;
        }
        if (fVar23 < fVar18) {
          fVar23 = fVar18;
        }
        *(float *)(lVar5 + 0x98) = (fVar24 + fVar22 + fVar20 + fVar26) * 0.25;
        *(float *)(lVar5 + 0x84) = 1.0 / fVar29;
        if (fVar25 < fVar19) {
          fVar19 = fVar25;
        }
        if (fVar23 < fVar17) {
          fVar23 = fVar17;
        }
        *(float *)(lVar5 + 0x58) = fVar19;
        *(float *)(lVar5 + 0x74) = 1.0 / fVar27;
        *(float *)(lVar5 + 100) = fVar23;
      } while (__nmemb != uVar2);
      if (iVar13 != 0) {
        qsort(*(void **)(param_2 + 0x38),__nmemb,8,rectSortFunc);
        lVar5 = 0;
        do {
          AVar4 = 0;
          if ((ulong)(iVar13 - 1) * 8 - lVar5 != 0) {
            AVar4 = 3;
          }
          lVar14 = *(long *)(*(long *)(param_2 + 0x38) + lVar5);
          local_e0 = *(undefined4 *)(lVar14 + 0x50);
          uStack_f8 = *(undefined8 *)(lVar14 + 0x90);
          uStack_100 = *(undefined8 *)(lVar14 + 0x88);
          local_dc = *(undefined4 *)(lVar14 + 0x54);
          local_d8 = *(undefined4 *)(lVar14 + 0x58);
          local_d0 = *(undefined4 *)(lVar14 + 0x5c);
          local_cc = *(undefined4 *)(lVar14 + 0x60);
          local_c8 = *(undefined4 *)(lVar14 + 100);
          uStack_118 = *(undefined8 *)(lVar14 + 0x70);
          local_120 = *(undefined8 *)(lVar14 + 0x68);
          uStack_108 = *(undefined8 *)(lVar14 + 0x80);
          local_110 = *(undefined8 *)(lVar14 + 0x78);
          local_f0 = *(undefined4 *)(lVar14 + 0x20);
          local_ec = *(undefined4 *)(lVar14 + 0x24);
          local_e8 = *(undefined4 *)(lVar14 + 0x28);
          DensityAnimationMap::affectInstancesGpu(this,*(IRenderDevice **)param_3,AVar4,aFStack_140)
          ;
          lVar5 = lVar5 + 8;
        } while (__nmemb * 8 - lVar5 != 0);
      }
    }
    DensityAnimationMap::updateGpuTexture(this,*(IRenderDevice **)param_3);
    *(undefined8 *)(param_3 + 0x100) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_3 + 0x108) = *(undefined8 *)(param_2 + 0x128);
    DensityAnimationMap::getFoliageTextureOffsetScale
              (this,(float *)(param_3 + 0x110),(float *)(param_3 + 0x120));
  }
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


