// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 008dbf24
// Size: 2208 bytes
// Signature: undefined __cdecl preRender(RenderArgs * param_1, Matrix4x4 * param_2)


/* Precipitation::preRender(RenderArgs const*, Matrix4x4 const&) */

void Precipitation::preRender(RenderArgs *param_1,Matrix4x4 *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  DeferredDebugRenderer *this;
  undefined2 *puVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  undefined8 uVar24;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  lVar14 = *(long *)(param_2 + 0x3a0);
  if (*(long *)(param_1 + 0xc0) != *(long *)(lVar14 + 0x90)) {
    *(long *)(param_1 + 0xc0) = *(long *)(lVar14 + 0x90);
    uVar23 = *(undefined8 *)(lVar14 + 0x60);
    fVar38 = *(float *)(param_1 + 0xb4);
    fVar40 = *(float *)(param_1 + 0xb8);
    fVar37 = *(float *)(lVar14 + 0x68);
    fVar42 = *(float *)(param_1 + 0xbc);
    fVar19 = (float)uVar23;
    *(float *)(param_1 + 0xb4) = fVar19;
    fVar25 = (float)((ulong)uVar23 >> 0x20);
    *(float *)(param_1 + 0xb8) = fVar25;
    *(float *)(param_1 + 0xbc) = fVar37;
    GlobalTimeManager::getInstance();
    fVar20 = (float)GlobalTimeManager::getCurrentDt();
    uVar23 = NEON_fmov(0xbe800000,4);
    fVar22 = (float)*(undefined8 *)(param_1 + 0x70);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    fVar30 = fVar19 + (float)uVar23 * fVar22 * (float)*(undefined8 *)(param_2 + 0x378);
    fVar33 = fVar25 + (float)((ulong)uVar23 >> 0x20) *
                      fVar26 * (float)((ulong)*(undefined8 *)(param_2 + 0x378) >> 0x20);
    fVar21 = fVar22 * 0.5;
    fVar26 = fVar26 * 0.5;
    local_c8 = (float)NEON_fmadd(*(float *)(param_2 + 0x380) * fVar22,0xbe800000,fVar37);
    local_d0 = CONCAT44(fVar26 + fVar33,fVar21 + fVar30);
    local_b8 = local_c8 - fVar21;
    local_c8 = fVar21 + local_c8;
    local_c0 = CONCAT44(fVar33 - fVar26,fVar30 - fVar21);
    IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
              ((float *)&local_c0,(float *)&local_d0,false,(float *)(param_1 + 0xe0),&local_124);
    uVar6 = *(uint *)(param_1 + 0x6c);
    uVar12 = *(uint *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xec) = 1.0 / local_124;
    if ((uVar12 < uVar6) && (uVar6 != uVar12)) {
      iVar17 = ~uVar12 + uVar6;
      while( true ) {
        uVar8 = spawnDrop((Precipitation *)param_1,
                          (Drop *)(*(long *)(param_1 + 0xa8) + (ulong)uVar12 * 0x20),
                          (float *)&local_c0,(float *)&local_d0,false);
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        }
        if (iVar17 == 0) break;
        uVar12 = *(uint *)(param_1 + 0xb0);
        iVar17 = iVar17 + -1;
      }
    }
    uVar23 = (**(code **)(***(long ***)(param_2 + 0x3a0) + 0x138))();
    EngineManager::getInstance();
    this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
    uVar6 = DeferredDebugRenderer::isCategoryEnabled(this,0x400);
    if (*(int *)(param_1 + 0xb0) != 0) {
      plVar18 = *(long **)(param_1 + 200);
      uVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
      puVar9 = (undefined2 *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar23,0,uVar7,1);
      if (*(int *)(param_1 + 0xb0) != 0) {
        uVar12 = 0;
        fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x80));
        fVar21 = 1.0 / fVar21;
        do {
          lVar14 = *(long *)(param_1 + 0xa8);
          uVar8 = (ulong)uVar12;
          pfVar1 = (float *)(lVar14 + uVar8 * 0x20);
          fVar26 = *pfVar1;
          if (((fVar26 < (float)local_c0 || fVar26 != (float)local_d0) &&
               (fVar26 < (float)local_c0 || (float)local_d0 <= fVar26)) ||
             (fVar26 = pfVar1[2],
             (fVar26 < local_b8 || fVar26 != local_c8) && (fVar26 < local_b8 || local_c8 <= fVar26))
             ) {
            bVar11 = false;
LAB_008dc410:
            uVar10 = spawnDrop((Precipitation *)param_1,(Drop *)pfVar1,(float *)&local_c0,
                               (float *)&local_d0,bVar11);
            if ((uVar10 & 1) != 0) {
              fVar26 = *(float *)(lVar14 + uVar8 * 0x20 + 0x14);
              goto LAB_008dc430;
            }
            uVar12 = uVar12 - 1;
            puVar2 = (undefined8 *)
                     (*(long *)(param_1 + 0xa8) + (ulong)(*(int *)(param_1 + 0xb0) - 1) * 0x20);
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0xa8) + uVar8 * 0x20);
            uVar28 = *puVar2;
            uVar27 = puVar2[3];
            uVar24 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar28;
            puVar3[3] = uVar27;
            puVar3[2] = uVar24;
            uVar13 = *(int *)(param_1 + 0xb0) - 1;
            *(uint *)(param_1 + 0xb0) = uVar13;
          }
          else {
            lVar4 = lVar14 + uVar8 * 0x20;
            fVar26 = *(float *)(lVar4 + 0x14);
            if ((fVar26 == 0.0) || ((fVar26 <= fVar20 && (fVar26 < *(float *)(lVar4 + 0x18))))) {
              bVar11 = true;
              goto LAB_008dc410;
            }
LAB_008dc430:
            if (fVar26 <= fVar20) {
              fVar22 = (float)MathUtil::getRandom();
              fVar30 = 0.0;
              fVar26 = fVar26 * fVar22;
            }
            else {
              fVar30 = fVar26 - fVar20;
              fVar26 = fVar20;
            }
            lVar4 = lVar14 + uVar8 * 0x20;
            fVar35 = *pfVar1;
            *(float *)(lVar14 + uVar8 * 0x20 + 0x14) = fVar30;
            pfVar15 = (float *)(lVar4 + 4);
            fVar22 = *(float *)(lVar4 + 0x10);
            fVar30 = *(float *)(param_1 + 0x94);
            fVar31 = *(float *)(param_1 + 0x9c);
            fVar33 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x98),fVar22,
                                       *(undefined4 *)(lVar4 + 0xc));
            pfVar16 = (float *)(lVar4 + 8);
            fVar29 = fVar26 * fVar30 * fVar22;
            fVar32 = fVar26 * fVar33;
            fVar26 = fVar26 * fVar22 * fVar31;
            fVar35 = fVar29 + fVar35;
            fVar41 = fVar32 + *pfVar15;
            fVar39 = fVar26 + *pfVar16;
            *pfVar1 = fVar35;
            fVar34 = fVar19 - fVar35;
            *pfVar15 = fVar41;
            fVar36 = fVar25 - fVar41;
            *pfVar16 = fVar39;
            fVar43 = fVar37 - fVar39;
            if ((param_1[0xa0] != (RenderArgs)0x0) && (param_1[0xa1] != (RenderArgs)0x0)) {
              uVar7 = NEON_fmadd(fVar34,fVar34,fVar36 * fVar36);
              fVar44 = (float)NEON_fmadd(fVar43,fVar43,uVar7);
              fVar44 = SQRT(fVar44);
              if (fVar44 <= 2.0) {
                fVar44 = 2.0;
              }
              fVar44 = 0.3 / fVar44;
              fVar29 = fVar29 - (fVar19 - fVar38) * fVar44;
              fVar32 = fVar32 - (fVar25 - fVar40) * fVar44;
              fVar26 = fVar26 - (fVar37 - fVar42) * fVar44;
            }
            if (param_1[0xa1] == (RenderArgs)0x0) {
              fVar44 = *(float *)(param_2 + 0x360);
              fVar47 = *(float *)(param_2 + 0x364);
              fVar48 = *(float *)(param_2 + 0x368);
              fVar29 = *(float *)(param_2 + 0x36c);
              fVar32 = *(float *)(param_2 + 0x370);
              fVar26 = *(float *)(param_2 + 0x374);
            }
            else {
              fVar47 = (float)NEON_fmadd(fVar43,fVar29,fVar26 * -fVar34);
              fVar44 = (float)NEON_fmadd(fVar36,fVar26,fVar32 * -fVar43);
              fVar48 = (float)NEON_fmadd(fVar34,fVar32,fVar29 * -fVar36);
              uVar7 = NEON_fmadd(fVar44,fVar44,fVar47 * fVar47);
              fVar49 = 1.0;
              fVar50 = (float)NEON_fmadd(fVar48,fVar48,uVar7);
              fVar45 = 1.0;
              if (1e-06 < fVar50) {
                fVar49 = 1.0 / SQRT(fVar50);
              }
              fVar48 = fVar48 * fVar49;
              fVar47 = fVar47 * fVar49;
              fVar44 = fVar44 * fVar49;
              fVar49 = (float)NEON_fmadd(fVar43,fVar44,fVar48 * -fVar34);
              fVar43 = (float)NEON_fmadd(fVar36,fVar48,fVar47 * -fVar43);
              fVar34 = (float)NEON_fmadd(fVar34,fVar47,fVar44 * -fVar36);
              uVar7 = NEON_fmadd(fVar43,fVar43,fVar49 * fVar49);
              fVar36 = (float)NEON_fmadd(fVar34,fVar34,uVar7);
              if (1e-06 < fVar36) {
                fVar45 = 1.0 / SQRT(fVar36);
              }
              fVar50 = 1.0;
              uVar7 = NEON_fmadd(fVar29,fVar29,fVar32 * fVar32);
              fVar46 = (float)NEON_fmadd(fVar26,fVar26,uVar7);
              fVar36 = 1.0;
              if (1e-06 < fVar46) {
                fVar50 = 1.0 / SQRT(fVar46);
              }
              fVar32 = (float)NEON_fmsub(fVar32,fVar50,fVar49 * fVar45);
              fVar29 = (float)NEON_fmsub(fVar29,fVar50,fVar43 * fVar45);
              fVar26 = (float)NEON_fmsub(fVar26,fVar50,fVar34 * fVar45);
              uVar7 = NEON_fmadd(fVar29,fVar29,fVar32 * fVar32);
              fVar34 = (float)NEON_fmadd(fVar26,fVar26,uVar7);
              if (1e-06 < fVar34) {
                fVar36 = 1.0 / SQRT(fVar34);
              }
              fVar29 = fVar29 * fVar36;
              fVar32 = fVar32 * fVar36;
              fVar26 = fVar26 * fVar36;
            }
            fVar36 = *(float *)(param_1 + 0x78);
            fVar34 = *(float *)(param_1 + 0x7c);
            if ((uVar6 & 1) != 0) {
              fStack_dc = *pfVar15;
              local_d8 = *pfVar16;
              fVar43 = *(float *)(lVar14 + uVar8 * 0x20 + 0x18);
              fVar30 = fVar30 * fVar22 * fVar43;
              local_f8 = fVar22 * fVar31 * fVar43;
              fVar22 = fVar30 + fVar35;
              fVar31 = fVar33 * fVar43 + fStack_dc;
              local_e8 = local_f8 + local_d8;
              local_f0 = CONCAT44(fVar31,fVar22);
              local_f8 = local_f8 + local_e8;
              local_100 = CONCAT44(fVar33 * fVar43 + fVar31,fVar30 + fVar22);
              uStack_108 = 0x3f80000000000000;
              local_110 = 0x3f800000;
              local_e0 = fVar35;
              DeferredDebugRenderer::addLine
                        (this,&local_e0,(float *)&local_110,(float *)&local_f0,(float *)&local_110,
                         0x400);
              uStack_118 = 0x3f80000000000000;
              local_120 = 0x3f80000000000000;
              DeferredDebugRenderer::addLine
                        (this,(float *)&local_f0,(float *)&local_120,(float *)&local_100,
                         (float *)&local_120,0x400);
            }
            fVar33 = *(float *)(param_1 + 0xe8);
            lVar14 = lVar14 + uVar8 * 0x20;
            fVar34 = fVar34 * 0.5;
            fVar36 = fVar36 * 0.5;
            fVar44 = fVar44 * fVar36;
            fVar47 = fVar47 * fVar36;
            fVar48 = fVar48 * fVar36;
            fVar22 = *(float *)(param_1 + 0xe0);
            fVar30 = *(float *)(param_1 + 0xe4);
            fVar31 = fVar35 + fVar29 * fVar34;
            fVar36 = fVar41 + fVar32 * fVar34;
            fVar43 = fVar26 * fVar34 + fVar39;
            puVar9[3] = 0;
            *(undefined4 *)(puVar9 + 4) = 0x7fff7f;
            fVar35 = fVar35 - fVar29 * fVar34;
            fVar41 = fVar41 - fVar32 * fVar34;
            fVar39 = fVar39 - fVar26 * fVar34;
            *puVar9 = (short)(int)(local_124 * ((fVar44 + fVar31) - fVar22));
            puVar9[1] = (short)(int)(local_124 * ((fVar47 + fVar36) - fVar30));
            puVar9[2] = (short)(int)(local_124 * ((fVar48 + fVar43) - fVar33));
            iVar17 = *(int *)(lVar14 + 0x1c);
            puVar9[7] = 0x1000;
            puVar9[9] = (short)(int)(local_124 * ((fVar36 - fVar47) - fVar30));
            puVar9[10] = (short)(int)(local_124 * ((fVar43 - fVar48) - fVar33));
            puVar9[0xb] = 0;
            *(undefined4 *)(puVar9 + 0xc) = 0x7fff7f;
            fVar26 = fVar21 * (float)(ulong)(iVar17 + 1) * 0.125 * 32767.0;
            puVar9[8] = (short)(int)(local_124 * ((fVar31 - fVar44) - fVar22));
            fVar29 = 0.5;
            if (fVar26 < 0.0) {
              fVar29 = -0.5;
            }
            puVar9[6] = (short)(int)(fVar26 + fVar29);
            uVar7 = *(undefined4 *)(lVar14 + 0x1c);
            puVar9[0xf] = 0x1000;
            puVar9[0x10] = (short)(int)(local_124 * ((fVar35 - fVar44) - fVar22));
            fVar26 = (float)NEON_ucvtf(uVar7);
            puVar9[0x11] = (short)(int)(local_124 * ((fVar41 - fVar47) - fVar30));
            puVar9[0x13] = 0;
            *(undefined4 *)(puVar9 + 0x14) = 0x7fff7f;
            puVar9[0x12] = (short)(int)(local_124 * ((fVar39 - fVar48) - fVar33));
            fVar26 = fVar21 * fVar26 * 0.125 * 32767.0;
            fVar29 = 0.5;
            if (fVar26 < 0.0) {
              fVar29 = -0.5;
            }
            puVar9[0xe] = (short)(int)(fVar26 + fVar29);
            uVar7 = *(undefined4 *)(lVar14 + 0x1c);
            puVar9[0x17] = 0;
            puVar9[0x19] = (short)(int)(local_124 * ((fVar47 + fVar41) - fVar30));
            puVar9[0x18] = (short)(int)(local_124 * ((fVar44 + fVar35) - fVar22));
            fVar26 = (float)NEON_ucvtf(uVar7);
            puVar9[0x1a] = (short)(int)(local_124 * ((fVar48 + fVar39) - fVar33));
            puVar9[0x1b] = 0;
            *(undefined4 *)(puVar9 + 0x1c) = 0x7fff7f;
            fVar22 = fVar21 * fVar26 * 0.125 * 32767.0;
            fVar26 = 0.5;
            if (fVar22 < 0.0) {
              fVar26 = -0.5;
            }
            puVar9[0x16] = (short)(int)(fVar22 + fVar26);
            iVar17 = *(int *)(lVar14 + 0x1c);
            puVar9[0x1f] = 0;
            fVar26 = fVar21 * (float)(ulong)(iVar17 + 1) * 0.125 * 32767.0;
            fVar22 = 0.5;
            if (fVar26 < 0.0) {
              fVar22 = -0.5;
            }
            puVar9[0x1e] = (short)(int)(fVar26 + fVar22);
            puVar9 = puVar9 + 0x20;
            uVar13 = *(uint *)(param_1 + 0xb0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      (**(code **)(**(long **)(param_1 + 200) + 0x18))(*(long **)(param_1 + 200),uVar23);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


