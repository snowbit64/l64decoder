// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLightsTexture
// Entry Point: 00a2a42c
// Size: 1792 bytes
// Signature: undefined __thiscall updateLightsTexture(LightListRasterizer * this, ICommandBuffer * param_1, IRenderDevice * param_2, Vector3 * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, IStructBuffer * * param_10)


/* LightListRasterizer::updateLightsTexture(ICommandBuffer*, IRenderDevice*, Vector3 const&, float,
   float, float, float, float, float, IStructBuffer*&) */

void __thiscall
LightListRasterizer::updateLightsTexture
          (LightListRasterizer *this,ICommandBuffer *param_1,IRenderDevice *param_2,Vector3 *param_3
          ,float param_4,float param_5,float param_6,float param_7,float param_8,float param_9,
          IStructBuffer **param_10)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  LightSource *this_00;
  long lVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  long local_100;
  float local_f8;
  long local_f0;
  float local_e8;
  long local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  char *local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  LightList::computeLightTextureOffsets(*(LightList **)this,&uStack_104,&local_108,&local_10c);
  if ((long *)*param_10 != (long *)0x0) {
    uVar6 = (**(code **)(*(long *)*param_10 + 0x28))();
    plVar7 = (long *)*param_10;
    if (uVar6 < local_10c) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      *param_10 = (IStructBuffer *)0x0;
    }
    else if (plVar7 != (long *)0x0) goto LAB_00a2a544;
  }
  uStack_c4 = local_10c + 0x1f & 0xffffffe0;
  if ((local_10c + 0x1f & 0xffffffe0) == 0) {
    uStack_c4 = 1;
  }
  local_b8 = "LightList lights buffer";
  local_d0 = 0;
  local_c8 = 0x10;
  local_c0 = 4;
  plVar7 = (long *)(**(code **)(*(long *)param_2 + 0x120))(param_2,param_1,&local_d0);
  *param_10 = (IStructBuffer *)plVar7;
LAB_00a2a544:
  if (local_10c == 0) {
    local_10c = 1;
  }
  plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,param_1,0,local_10c,1);
  lVar10 = *(long *)this;
  lVar16 = *(long *)(lVar10 + 0x68);
  plVar7 = plVar8;
  if ((int)((ulong)(*(long *)(lVar10 + 0x70) - lVar16) >> 3) * -0x33333333 != 0) {
    uVar17 = 0;
    fVar18 = 1.0 - param_9;
    plVar15 = plVar8;
    do {
      plVar7 = (long *)(lVar16 + uVar17 * 0x28);
      this_00 = (LightSource *)plVar7[2];
      local_c8 = *(undefined4 *)(*plVar7 + 0x28);
      local_d0 = *(long *)(*plVar7 + 0x20);
      *(undefined4 *)(plVar15 + 1) = local_c8;
      *plVar15 = local_d0;
      uVar19 = LightSource::getShadowFarDistance();
      *(undefined4 *)((long)plVar15 + 0xc) = uVar19;
      local_d8 = *(float *)((long)plVar7 + 0x1c);
      local_e0 = CONCAT44((float)((ulong)*(undefined8 *)(this_00 + 0x170) >> 0x20) * local_d8,
                          (float)*(undefined8 *)(this_00 + 0x170) * local_d8);
      local_d8 = local_d8 * *(float *)(this_00 + 0x178);
      uVar6 = LightSource::getLightFlags();
      if ((uVar6 >> 7 & 1) != 0) {
        uVar9 = LightSource::getScatteringDirection(this_00,(Vector3 *)&local_f0);
        if ((uVar9 & 1) == 0) {
          fVar21 = *(float *)(this_00 + 0xd8);
          fVar20 = *(float *)(this_00 + 0xdc);
          uVar19 = NEON_fmadd(fVar21,fVar21,fVar20 * fVar20);
          local_e8 = *(float *)(this_00 + 0xe0);
          fVar26 = (float)NEON_fmadd(local_e8,local_e8,uVar19);
          fVar23 = 1.0;
          if (1e-06 < fVar26) {
            fVar23 = 1.0 / SQRT(fVar26);
          }
          local_e8 = local_e8 * fVar23;
          local_f0 = CONCAT44(fVar20 * fVar23,fVar21 * fVar23);
        }
        LightScatteringUtil::computeSunDirectionalLightColor
                  ((float *)&local_f0,(float *)&local_e0,*(float *)(param_3 + 4),param_4,param_5,
                   param_6,param_7,param_8,(float *)&local_e0);
        local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) * fVar18,(float)local_e0 * fVar18);
        local_d8 = fVar18 * local_d8;
      }
      plVar15[2] = local_e0;
      *(float *)(plVar15 + 3) = local_d8;
      pplVar11 = (long **)(lVar16 + uVar17 * 0x28 + 8);
      plVar13 = *pplVar11;
      if (plVar13 == (long *)0x0) {
        *(undefined4 *)((long)plVar15 + 0x1c) = 0;
        plVar7 = plVar15 + 4;
      }
      else {
        bVar3 = *(byte *)plVar13;
        plVar7 = plVar15 + 4;
        *(uint *)((long)plVar15 + 0x1c) = (uint)bVar3;
        if (1 < bVar3) {
          lVar16 = plVar13[9];
          plVar15[5] = plVar13[10];
          *plVar7 = lVar16;
          plVar7 = plVar15 + 6;
          if (4 < bVar3) {
            lVar16 = (*pplVar11)[0xb];
            plVar15[7] = (*pplVar11)[0xc];
            *plVar7 = lVar16;
            plVar7 = plVar15 + 8;
          }
        }
        plVar12 = *pplVar11;
        *(undefined4 *)((long)plVar15 + 0xc) =
             *(undefined4 *)((long)plVar12 + (ulong)(bVar3 - 1) * 4 + 0x48);
        bVar4 = *(byte *)((long)plVar12 + 2);
        lVar16 = (ulong)bVar4 + (ulong)bVar3;
        iVar14 = (int)lVar16;
        plVar13 = plVar7;
        plVar15 = plVar12;
        if (iVar14 != 0) {
          do {
            lVar10 = plVar15[1];
            uVar19 = *(undefined4 *)param_3;
            fVar20 = *(float *)(param_3 + 4);
            uVar22 = *(undefined4 *)(param_3 + 8);
            lVar16 = lVar16 + -1;
            uVar24 = *(undefined4 *)(lVar10 + 0x34);
            uVar27 = *(undefined4 *)(lVar10 + 0x38);
            fVar21 = *(float *)(lVar10 + 0x44);
            fVar23 = *(float *)(lVar10 + 0x48);
            uVar28 = *(undefined4 *)(lVar10 + 0x54);
            uVar29 = *(undefined4 *)(lVar10 + 0x58);
            uVar30 = *(undefined4 *)(lVar10 + 0x3c);
            fVar26 = *(float *)(lVar10 + 0x4c);
            uVar31 = *(undefined4 *)(lVar10 + 0x5c);
            *(undefined4 *)plVar13 = uVar24;
            uVar24 = NEON_fmadd(uVar19,uVar24,fVar20 * fVar21);
            *(undefined4 *)((long)plVar13 + 4) = *(undefined4 *)(lVar10 + 0x44);
            fVar21 = (float)NEON_fmadd(uVar22,uVar28,uVar24);
            *(undefined4 *)(plVar13 + 1) = *(undefined4 *)(lVar10 + 0x54);
            *(float *)((long)plVar13 + 0xc) = fVar21 + *(float *)(lVar10 + 100);
            uVar24 = NEON_fmadd(uVar19,uVar27,fVar20 * fVar23);
            uVar19 = NEON_fmadd(uVar19,uVar30,fVar20 * fVar26);
            *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(lVar10 + 0x38);
            fVar21 = (float)NEON_fmadd(uVar22,uVar29,uVar24);
            fVar20 = (float)NEON_fmadd(uVar22,uVar31,uVar19);
            *(undefined4 *)((long)plVar13 + 0x14) = *(undefined4 *)(lVar10 + 0x48);
            *(undefined4 *)(plVar13 + 3) = *(undefined4 *)(lVar10 + 0x58);
            *(float *)((long)plVar13 + 0x1c) = fVar21 + *(float *)(lVar10 + 0x68);
            *(undefined4 *)(plVar13 + 4) = *(undefined4 *)(lVar10 + 0x3c);
            *(undefined4 *)((long)plVar13 + 0x24) = *(undefined4 *)(lVar10 + 0x4c);
            *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(lVar10 + 0x5c);
            plVar7 = plVar13 + 6;
            *(float *)((long)plVar13 + 0x2c) = fVar20 + *(float *)(lVar10 + 0x6c);
            plVar13 = plVar7;
            plVar15 = plVar15 + 1;
          } while (lVar16 != 0);
        }
        if (bVar4 != 0) {
          lVar16 = *(long *)(plVar12[(ulong)(iVar14 - 1) + 1] + 0x74);
          plVar7[1] = *(long *)(plVar12[(ulong)(iVar14 - 1) + 1] + 0x7c);
          *plVar7 = lVar16;
          plVar7 = plVar7 + 2;
        }
      }
      lVar10 = *(long *)this;
      uVar17 = uVar17 + 1;
      lVar16 = *(long *)(lVar10 + 0x68);
      plVar15 = plVar7;
    } while (uVar17 < (uint)((int)((ulong)(*(long *)(lVar10 + 0x70) - lVar16) >> 3) * -0x33333333));
  }
  lVar16 = *(long *)(this + 0x70);
  if (*(long *)(this + 0x78) != lVar16) {
    plVar7 = plVar7 + 7;
    uVar17 = 0;
    iVar14 = 0;
    while( true ) {
      lVar10 = *(long *)(lVar10 + 0x50);
      uVar9 = (ulong)*(uint *)(lVar16 + uVar17 * 0xc);
      plVar15 = (long *)(lVar10 + uVar9 * 0x28);
      uVar25 = *(undefined8 *)(*plVar15 + 0x30);
      local_d8 = *(float *)(*plVar15 + 0x38) - *(float *)(param_3 + 8);
      local_e0 = CONCAT44((float)((ulong)uVar25 >> 0x20) -
                          (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                          (float)uVar25 - (float)*(undefined8 *)param_3);
      lVar16 = plVar15[2];
      *(float *)(plVar7 + -6) = local_d8;
      plVar7[-7] = local_e0;
      *(float *)((long)plVar7 + -0x2c) = 1.0 / *(float *)(lVar16 + 0x194);
      fVar18 = *(float *)((long)plVar15 + 0x1c);
      local_e8 = fVar18 * *(float *)(lVar16 + 0x178);
      local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x170) >> 0x20) * fVar18,
                          (float)*(undefined8 *)(lVar16 + 0x170) * fVar18);
      *(float *)(plVar7 + -4) = local_e8;
      plVar7[-5] = local_f0;
      if (*(int *)(lVar16 + 0x16c) == 1) {
        *(undefined4 *)((long)plVar7 + 4) = 0;
        *(undefined8 *)((long)plVar7 + -4) = 0;
        *(undefined8 *)((long)plVar7 + -0xc) = 0;
        *(undefined8 *)((long)plVar7 + -0x14) = 0;
        *(undefined8 *)((long)plVar7 + -0x1c) = 0;
      }
      else {
        *(undefined4 *)((long)plVar7 + -0x1c) = 1;
        uVar25 = *(undefined8 *)(*plVar15 + 0x20);
        local_f8 = -*(float *)(*plVar15 + 0x28);
        local_100 = CONCAT44(-(float)((ulong)uVar25 >> 0x20),-(float)uVar25);
        *(float *)(plVar7 + -2) = local_f8;
        plVar7[-3] = local_100;
        *(undefined4 *)((long)plVar7 + -0xc) = *(undefined4 *)(lVar16 + 0x1a8);
        *(undefined4 *)(plVar7 + -1) = *(undefined4 *)(lVar16 + 0x1a4);
        plVar15 = (long *)(lVar10 + uVar9 * 0x28 + 8);
        if ((*plVar15 == 0) && (uVar9 = LightSource::isMergedShadowActive(), (uVar9 & 1) == 0)) {
          *(undefined8 *)((long)plVar7 + -4) = 0;
          *(undefined4 *)((long)plVar7 + 4) = 0;
        }
        else {
          *plVar7 = 0;
          iVar2 = local_108 + iVar14 * 4;
          *(int *)((long)plVar7 + -4) = iVar2;
          uVar9 = LightSource::hasMergedShadow();
          if ((uVar9 & 1) != 0) {
            lVar16 = LightSource::getCachedMergedShadowQueueItem();
            if (lVar16 != 0) {
              plVar15 = (long *)(lVar16 + 8);
            }
          }
          lVar16 = *(long *)(*plVar15 + 8);
          puVar1 = (undefined4 *)((long)plVar8 + (ulong)(uint)(iVar2 * 4) * 4);
          Vector4::set((Vector4 *)&local_d0,*(float *)param_3,*(float *)(param_3 + 4),
                       *(float *)(param_3 + 8),1.0);
          fVar18 = *(float *)(lVar16 + 0x48);
          uVar22 = *(undefined4 *)(lVar16 + 0x38);
          uVar24 = *(undefined4 *)(lVar16 + 0x54);
          uVar27 = *(undefined4 *)(lVar16 + 0x58);
          uVar28 = *(undefined4 *)(lVar16 + 100);
          uVar29 = *(undefined4 *)(lVar16 + 0x68);
          uVar30 = *(undefined4 *)(lVar16 + 0x3c);
          uVar31 = *(undefined4 *)(lVar16 + 0x40);
          fVar20 = *(float *)(lVar16 + 0x4c);
          fVar21 = *(float *)(lVar16 + 0x50);
          uVar19 = NEON_fmadd((undefined4)local_d0,*(undefined4 *)(lVar16 + 0x34),
                              local_d0._4_4_ * *(float *)(lVar16 + 0x44));
          iVar14 = iVar14 + 1;
          uVar32 = *(undefined4 *)(lVar16 + 0x5c);
          uVar33 = *(undefined4 *)(lVar16 + 0x60);
          uVar34 = *(undefined4 *)(lVar16 + 0x6c);
          uVar35 = *(undefined4 *)(lVar16 + 0x70);
          *puVar1 = *(undefined4 *)(lVar16 + 0x34);
          uVar19 = NEON_fmadd(local_c8,uVar24,uVar19);
          puVar1[1] = *(undefined4 *)(lVar16 + 0x44);
          uVar19 = NEON_fmadd(uStack_c4,uVar28,uVar19);
          puVar1[2] = *(undefined4 *)(lVar16 + 0x54);
          puVar1[3] = uVar19;
          uVar19 = NEON_fmadd((undefined4)local_d0,uVar22,local_d0._4_4_ * fVar18);
          puVar1[4] = *(undefined4 *)(lVar16 + 0x38);
          uVar19 = NEON_fmadd(local_c8,uVar27,uVar19);
          puVar1[5] = *(undefined4 *)(lVar16 + 0x48);
          uVar19 = NEON_fmadd(uStack_c4,uVar29,uVar19);
          puVar1[6] = *(undefined4 *)(lVar16 + 0x58);
          puVar1[7] = uVar19;
          uVar22 = NEON_fmadd((undefined4)local_d0,uVar30,local_d0._4_4_ * fVar20);
          uVar19 = NEON_fmadd((undefined4)local_d0,uVar31,local_d0._4_4_ * fVar21);
          puVar1[8] = *(undefined4 *)(lVar16 + 0x3c);
          uVar22 = NEON_fmadd(local_c8,uVar32,uVar22);
          uVar19 = NEON_fmadd(local_c8,uVar33,uVar19);
          puVar1[9] = *(undefined4 *)(lVar16 + 0x4c);
          uVar22 = NEON_fmadd(uStack_c4,uVar34,uVar22);
          uVar19 = NEON_fmadd(uStack_c4,uVar35,uVar19);
          puVar1[10] = *(undefined4 *)(lVar16 + 0x5c);
          puVar1[0xb] = uVar22;
          puVar1[0xc] = *(undefined4 *)(lVar16 + 0x40);
          puVar1[0xd] = *(undefined4 *)(lVar16 + 0x50);
          puVar1[0xe] = *(undefined4 *)(lVar16 + 0x60);
          puVar1[0xf] = uVar19;
        }
      }
      lVar16 = *(long *)(this + 0x70);
      uVar17 = (ulong)((int)uVar17 + 1);
      uVar9 = (*(long *)(this + 0x78) - lVar16 >> 2) * -0x5555555555555555;
      if (uVar9 < uVar17 || uVar9 - uVar17 == 0) break;
      lVar10 = *(long *)this;
      plVar7 = plVar7 + 8;
    }
  }
  (**(code **)(*(long *)*param_10 + 0x18))(*param_10,param_1);
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


