// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueReflectionMapJobs
// Entry Point: 00a25158
// Size: 2752 bytes
// Signature: undefined __thiscall issueReflectionMapJobs(ReflectionRenderController * this, RenderTextureSetup * param_1, RenderTextureController * param_2)


/* ReflectionRenderController::issueReflectionMapJobs(RenderTextureSetup*, RenderTextureController*)
    */

void __thiscall
ReflectionRenderController::issueReflectionMapJobs
          (ReflectionRenderController *this,RenderTextureSetup *param_1,
          RenderTextureController *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  CullingArgs *this_00;
  RenderArgs *this_01;
  Matrix4x4 *pMVar7;
  RenderController *this_02;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long **pplVar19;
  undefined8 *puVar20;
  long **pplVar21;
  long **pplVar22;
  size_t __n;
  undefined8 *puVar23;
  long **pplVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  undefined8 local_2a0;
  long *local_298;
  long *local_290;
  long **local_288;
  long **local_280;
  long **local_278;
  undefined8 local_270;
  undefined4 local_268;
  float fStack_264;
  undefined8 local_260;
  undefined4 local_258;
  float fStack_254;
  undefined8 local_250;
  undefined4 local_248;
  float fStack_244;
  undefined8 local_240;
  undefined4 local_238;
  float fStack_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  long *local_1f0;
  long *plStack_1e8;
  long *local_1e0;
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  undefined2 local_1b0 [6];
  undefined4 local_1a4;
  long *local_1a0;
  long *local_180;
  long *local_158;
  long *plStack_150;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x20) != *(long *)(this + 0x28)) {
    uVar4 = RenderTextureController::getRemainingReflectionMaps();
    uVar5 = *(uint *)(*(long *)(this + 8) + 0x3c);
    if (uVar4 <= uVar5) {
      uVar5 = RenderTextureController::getRemainingReflectionMaps();
    }
    std::__ndk1::
    __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              ((reverse_iterator)*(undefined8 *)(this + 0x28),
               (reverse_iterator)*(undefined8 *)(this + 0x28),*(__less **)(this + 0x20));
    lVar18 = *(long *)(this + 0x20);
    lVar10 = *(long *)(this + 0x28);
    local_288 = (long **)0x0;
    local_280 = (long **)0x0;
    lVar12 = *(long *)(this + 8);
    local_278 = (long **)0x0;
    uVar14 = (ulong)*(uint *)(lVar12 + 0x38);
    uVar13 = (lVar10 - lVar18 >> 5) * -0x5555555555555555;
    if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
      uVar14 = uVar13;
    }
    if (uVar14 != 0) {
      uVar39 = NEON_fmov(0xbf800000,4);
      dVar40 = (double)NEON_fmov(0x3f800000,4);
      uVar14 = 0;
      puVar15 = (undefined8 *)((ulong)local_1b0 | 4);
      puVar1 = (undefined8 *)(this + 0x40);
      do {
        puVar28 = (undefined4 *)(lVar18 + uVar14 * 0x60);
        uVar31 = NEON_ucvtf(*(undefined8 *)(param_2 + 8),4);
        uVar31 = NEON_umax(CONCAT44((int)((float)((ulong)uVar31 >> 0x20) * (float)puVar28[0xe]),
                                    (int)((float)uVar31 * (float)puVar28[0xe])) & 0xffffffe0ffffffe0
                           ,0x2000000020,4);
        uVar41 = NEON_ucvtf(uVar31,4);
        fVar35 = (float)uVar41;
        fVar37 = (float)((ulong)uVar41 >> 0x20);
        uVar4 = (uint)(float)(int)((float)puVar28[7] * fVar35);
        iVar32 = (int)(float)(int)((float)puVar28[10] * fVar37);
        iVar34 = (int)(float)(int)((float)*(undefined8 *)(puVar28 + 8) * fVar35);
        uVar36 = (uint)(float)(int)((float)((ulong)*(undefined8 *)(puVar28 + 8) >> 0x20) * fVar37);
        if ((uVar36 - iVar32) * (iVar34 - uVar4) != 0) {
          local_298 = (long *)0x0;
          local_290 = (long *)0x0;
          if ((long)local_280 - (long)local_288 == 0) {
            plVar16 = (long *)0x0;
          }
          else {
            uVar26 = 0;
            uVar13 = ((long)local_280 - (long)local_288 >> 4) * -0x5555555555555555;
            do {
              pplVar19 = local_288 + uVar26 * 6 + 3;
              plVar16 = *pplVar19;
              pplVar24 = local_288 + uVar26 * 6 + 4;
              if ((long)*pplVar24 - (long)plVar16 == 0) {
LAB_00a253cc:
                pplVar22 = local_288 + uVar26 * 6;
                local_290 = *pplVar22;
                local_298 = pplVar22[1];
                plVar25 = *pplVar24;
                plVar16 = pplVar22[2];
                if (plVar25 == pplVar22[5]) {
                  plVar27 = *pplVar19;
                  uVar26 = (long)plVar25 - (long)plVar27;
                  uVar13 = ((long)uVar26 >> 4) + 1;
                  if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar13 <= (ulong)((long)uVar26 >> 3)) {
                    uVar13 = (long)uVar26 >> 3;
                  }
                  if (0x7fffffffffffffef < uVar26) {
                    uVar13 = 0xfffffffffffffff;
                  }
                  if (uVar13 >> 0x3c != 0) {
                    /* try { // try from 00a25bf8 to 00a25c0b has its CatchHandler @ 00a25c5c */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00a25474 to 00a25477 has its CatchHandler @ 00a25c54 */
                  plVar11 = (long *)operator_new(uVar13 << 4);
                  plVar25 = plVar11 + ((long)uVar26 >> 4) * 2;
                  *(uint *)((long)plVar25 + 0xc) = uVar36;
                  *(uint *)plVar25 = uVar4;
                  *(ulong *)((long)plVar25 + 4) = CONCAT44(iVar32,iVar34);
                  if (0 < (long)uVar26) {
                    memcpy(plVar11,plVar27,uVar26);
                  }
                  *pplVar19 = plVar11;
                  *pplVar24 = plVar25 + 2;
                  pplVar22[5] = plVar11 + uVar13 * 2;
                  if (plVar27 != (long *)0x0) {
                    operator_delete(plVar27);
                  }
                }
                else {
                  *(uint *)((long)plVar25 + 0xc) = uVar36;
                  *(uint *)plVar25 = uVar4;
                  *(ulong *)((long)plVar25 + 4) = CONCAT44(iVar32,iVar34);
                  *pplVar24 = plVar25 + 2;
                }
                break;
              }
              uVar17 = 0;
              while ((((iVar34 <= *(int *)(plVar16 + uVar17 * 2) ||
                       (*(int *)((long)plVar16 + uVar17 * 0x10 + 4) <= (int)uVar4)) ||
                      ((int)uVar36 <= *(int *)(plVar16 + uVar17 * 2 + 1))) ||
                     (*(int *)((long)plVar16 + uVar17 * 0x10 + 0xc) <= iVar32))) {
                uVar17 = (ulong)((int)uVar17 + 1);
                if ((ulong)((long)*pplVar24 - (long)plVar16 >> 4) <= uVar17) goto LAB_00a253cc;
              }
              plVar16 = (long *)0x0;
              uVar26 = (ulong)((int)uVar26 + 1);
            } while (uVar26 <= uVar13 && uVar13 - uVar26 != 0);
          }
          puVar3 = local_1d0;
          if (local_290 == (long *)0x0) {
                    /* try { // try from 00a25978 to 00a25987 has its CatchHandler @ 00a25c50 */
            if ((((long)local_280 - (long)local_288 >> 4) * -0x5555555555555555 - (ulong)uVar5 != 0)
               && (RenderTextureController::getNextReflectionRenderTexture
                             (param_2,(ITextureObject **)&local_290,(ITextureObject **)&local_298),
                  local_290 != (long *)0x0)) {
              this_02 = *(RenderController **)this;
              *(undefined4 *)(puVar15 + 0xe) = 0;
              puVar15[0xb] = 0;
              puVar15[10] = 0;
              puVar15[0xd] = 0;
              puVar15[0xc] = 0;
              puVar15[7] = 0;
              puVar15[6] = 0;
              puVar15[9] = 0;
              puVar15[8] = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
              puVar15[5] = 0;
              puVar15[4] = 0;
              puVar15[1] = 0;
              *puVar15 = 0;
              local_1a0 = local_290;
              local_180 = local_290;
              local_158 = local_298;
              plStack_150 = local_298;
              local_1a4 = 1;
              local_1b0[0] = 0x101;
                    /* try { // try from 00a259d0 to 00a259e7 has its CatchHandler @ 00a25c58 */
              plVar16 = (long *)RenderController::beginRenderTexture
                                          (this_02,(RenderTargetInfo *)local_1b0);
              RenderTextureSetup::addDependency(param_1,(RenderTextureSetup *)plVar16);
              local_1d8 = (uint *)0x0;
              local_1d0 = (uint *)0x0;
              local_1c8 = (uint *)0x0;
              local_1f0 = local_290;
              plStack_1e8 = local_298;
              local_1e0 = plVar16;
                    /* try { // try from 00a25a00 to 00a25a07 has its CatchHandler @ 00a25c38 */
              puVar8 = (uint *)operator_new(0x10);
              pplVar24 = local_280;
              local_1d0 = puVar8 + 4;
              puVar8[3] = uVar36;
              *puVar8 = uVar4;
              *(ulong *)(puVar8 + 1) = CONCAT44(iVar32,iVar34);
              local_1d8 = puVar8;
              local_1c8 = local_1d0;
              if (local_280 == local_278) {
                    /* try { // try from 00a25b18 to 00a25b23 has its CatchHandler @ 00a25c38 */
                std::__ndk1::
                vector<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>>
                ::__push_back_slow_path<ReflectionRenderController::RenderTargetUsageInfo_const&>
                          ((vector<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>>
                            *)&local_288,(RenderTargetUsageInfo *)&local_1f0);
                puVar8 = local_1d8;
                puVar3 = local_1d0;
              }
              else {
                local_280[4] = (long *)0x0;
                local_280[5] = (long *)0x0;
                local_280[2] = local_1e0;
                local_280[1] = plStack_1e8;
                *local_280 = local_1f0;
                local_280[3] = (long *)0x0;
                uVar13 = (long)local_1d0 - (long)puVar8;
                if (uVar13 != 0) {
                  if ((long)uVar13 < 0) {
                    /* try { // try from 00a25c0c to 00a25c13 has its CatchHandler @ 00a25c18 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                    /* try { // try from 00a25a6c to 00a25a73 has its CatchHandler @ 00a25c1c */
                  plVar25 = (long *)operator_new(uVar13);
                  puVar8 = local_1d8;
                  pplVar24[3] = plVar25;
                  pplVar24[4] = plVar25;
                  pplVar24[5] = plVar25 + ((long)uVar13 >> 4) * 2;
                  __n = (long)local_1d0 - (long)local_1d8;
                  if (0 < (long)__n) {
                    memcpy(plVar25,local_1d8,__n);
                    plVar25 = (long *)((long)plVar25 + __n);
                  }
                  pplVar24[4] = plVar25;
                }
                local_280 = pplVar24 + 6;
                puVar3 = local_1d0;
              }
              local_1d0 = puVar8;
              if (local_1d0 != (uint *)0x0) {
                operator_delete(local_1d0);
                puVar3 = local_1d0;
              }
              goto LAB_00a254ec;
            }
          }
          else {
LAB_00a254ec:
            local_1d0 = puVar3;
            lVar10 = lVar18 + uVar14 * 0x60;
            uVar33 = (uint)((ulong)uVar31 >> 0x20);
                    /* try { // try from 00a25514 to 00a2551b has its CatchHandler @ 00a25c60 */
            this_00 = (CullingArgs *)
                      RenderController::allocateCullingJob
                                (*(RenderController **)this,*(CullingArgs **)(this + 0x18),1,
                                 *(uint *)(lVar10 + 0x30),*(uint *)(lVar10 + 0x34),(uint)uVar31,
                                 uVar33);
            uVar31 = NEON_rev64(*(undefined8 *)(lVar18 + uVar14 * 0x60 + 0x3c),4);
            *(ulong *)(this_00 + 0x3e0) =
                 CONCAT44((float)((ulong)uVar31 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(this_00 + 0x3e0) >> 0x20),
                          (float)uVar31 * (float)*(undefined8 *)(this_00 + 0x3e0));
            FUN_00a25c88(local_1b0);
            local_2a0 = 0;
                    /* try { // try from 00a25558 to 00a2556f has its CatchHandler @ 00a25c64 */
            this_01 = (RenderArgs *)
                      RenderController::allocateRenderJob
                                (*(RenderController **)this,(RenderTextureSetup *)plVar16,0x11,
                                 (float *)&local_2a0,
                                 *(INFO_RENDERING *)(*(long *)(this + 0x10) + 0x3ac),
                                 (char *)local_1b0,this_00);
            iVar6 = 0;
            if (*(int *)(this_01 + 0x3d4) != 0) {
              iVar6 = *(int *)(this_01 + 0x3d4) + -1;
            }
            *(int *)(this_01 + 0x3d4) = iVar6;
            lVar10 = lVar18 + uVar14 * 0x60;
            pMVar7 = *(Matrix4x4 **)(this + 0x10);
            uVar29 = NEON_fmadd(*puVar28,*(undefined4 *)(pMVar7 + 0x354),
                                *(float *)(lVar10 + 4) * *(float *)(pMVar7 + 0x358));
            fVar30 = (float)NEON_fmadd(*(undefined4 *)(lVar10 + 8),*(undefined4 *)(pMVar7 + 0x35c),
                                       uVar29);
            fVar30 = fVar30 + *(float *)(lVar10 + 0xc);
                    /* try { // try from 00a255c8 to 00a255f3 has its CatchHandler @ 00a25c68 */
            RenderQueueUtil::computeReflectionViewMatrix
                      (pMVar7,0.0 < fVar30,(Vector3 *)puVar28,(Vector3 *)(lVar10 + 0x10),fVar30,
                       (Matrix4x4 *)&local_1f0);
            RenderQueueUtil::computeReflectionProjectionMatrix
                      ((Matrix4x4 *)&local_1f0,(Matrix4x4 *)(*(long *)(this + 0x10) + 0x80),
                       (Vector3 *)puVar28,(Vector3 *)(lVar10 + 0x10),(Matrix4x4 *)&local_230);
            lVar18 = lVar18 + uVar14 * 0x60;
            plVar16 = (long *)(lVar18 + 0x48);
            lVar10 = *plVar16;
            plVar25 = (long *)(lVar18 + 0x50);
            if (*plVar25 != lVar10) {
              uVar13 = 0;
              pplVar24 = (long **)(this_00 + 0x3d0);
              do {
                plVar27 = *(long **)(lVar10 + uVar13 * 8);
                pplVar21 = (long **)*pplVar24;
                pplVar19 = pplVar24;
                pplVar22 = pplVar24;
                while (pplVar21 != (long **)0x0) {
                  while (pplVar22 = pplVar21, plVar27 < pplVar22[4]) {
                    pplVar19 = pplVar22;
                    pplVar21 = (long **)*pplVar22;
                    if ((long **)*pplVar22 == (long **)0x0) {
                      plVar11 = *pplVar22;
                      goto joined_r0x00a256fc;
                    }
                  }
                  if (plVar27 <= pplVar22[4]) break;
                  pplVar19 = pplVar22 + 1;
                  pplVar21 = (long **)*pplVar19;
                }
                plVar11 = *pplVar19;
joined_r0x00a256fc:
                if (plVar11 == (long *)0x0) {
                    /* try { // try from 00a256ac to 00a2575b has its CatchHandler @ 00a25c74 */
                  plVar11 = (long *)operator_new(0x28);
                  plVar11[4] = (long)plVar27;
                  *plVar11 = 0;
                  plVar11[1] = 0;
                  plVar11[2] = (long)pplVar22;
                  *pplVar19 = plVar11;
                  if (**(long **)(this_00 + 0x3c8) != 0) {
                    *(long *)(this_00 + 0x3c8) = **(long **)(this_00 + 0x3c8);
                    plVar11 = *pplVar19;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(this_00 + 0x3d0),(__tree_node_base *)plVar11);
                  *(long *)(this_00 + 0x3d8) = *(long *)(this_00 + 0x3d8) + 1;
                }
                plVar11 = local_290;
                puVar20 = (undefined8 *)*puVar1;
                puVar23 = puVar1;
                puVar9 = puVar1;
                while (puVar20 != (undefined8 *)0x0) {
                  while (puVar9 = puVar20, plVar27 < (long *)puVar9[4]) {
                    puVar20 = (undefined8 *)*puVar9;
                    puVar23 = puVar9;
                    if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
                      puVar20 = (undefined8 *)*puVar9;
                      goto joined_r0x00a25790;
                    }
                  }
                  if (plVar27 <= (long *)puVar9[4]) break;
                  puVar23 = puVar9 + 1;
                  puVar20 = (undefined8 *)*puVar23;
                }
                puVar20 = (undefined8 *)*puVar23;
joined_r0x00a25790:
                if (puVar20 == (undefined8 *)0x0) {
                  puVar20 = (undefined8 *)operator_new(0x30);
                  puVar20[2] = puVar9;
                  puVar20[4] = plVar27;
                  puVar20[5] = 0;
                  *puVar20 = 0;
                  puVar20[1] = 0;
                  *puVar23 = puVar20;
                  puVar9 = puVar20;
                  if (**(long **)(this + 0x38) != 0) {
                    *(long *)(this + 0x38) = **(long **)(this + 0x38);
                    puVar9 = (undefined8 *)*puVar23;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)puVar9);
                  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
                }
                puVar20[5] = plVar11;
                uVar13 = (ulong)((int)uVar13 + 1);
                lVar10 = *plVar16;
              } while (uVar13 < (ulong)(*plVar25 - lVar10 >> 3));
            }
            uVar31 = NEON_scvtf(CONCAT44(uVar36,iVar34),4);
            uVar41 = NEON_scvtf(CONCAT44(iVar32,uVar4),4);
            fVar30 = (float)((ulong)uVar31 >> 0x20);
            fVar43 = (float)((ulong)uVar41 >> 0x20);
            fVar38 = ((float)uVar31 + (float)uVar31) / fVar35 + (float)uVar39;
            fVar44 = (float)((ulong)uVar39 >> 0x20);
            fVar30 = (fVar30 + fVar30) / fVar37 + fVar44;
            fVar35 = 2.0 / (fVar38 - (((float)uVar41 + (float)uVar41) / fVar35 + (float)uVar39));
            fVar37 = 2.0 / (fVar30 - ((fVar43 + fVar43) / fVar37 + fVar44));
            dVar42 = dVar40 - (double)CONCAT44(fVar30 * fVar37,fVar38 * fVar35);
            fVar30 = (float)NEON_fmadd(local_230,0,local_22c * 0.0);
            fVar43 = (float)NEON_fmadd(local_220,0,local_21c * 0.0);
            fVar38 = (float)NEON_fmadd(local_210,0,local_20c * 0.0);
            fVar44 = (float)NEON_fmadd(local_200,0,local_1fc * 0.0);
            fStack_264 = (float)NEON_fmadd(local_228,0,fVar30);
            fStack_254 = (float)NEON_fmadd(local_218,0,fVar43);
            fStack_244 = (float)NEON_fmadd(local_208,0,fVar38);
            local_268 = NEON_fmadd(local_224,0,local_228 + fVar30);
            fStack_264 = local_224 + fStack_264;
            fStack_234 = (float)NEON_fmadd(local_1f8,0,fVar44);
            local_258 = NEON_fmadd(local_214,0,local_218 + fVar43);
            fStack_254 = local_214 + fStack_254;
            fVar30 = SUB84(dVar42,0);
            fVar43 = (float)((ulong)dVar42 >> 0x20);
            local_248 = NEON_fmadd(local_204,0,local_208 + fVar38);
            fStack_244 = local_204 + fStack_244;
            local_240 = CONCAT44(fVar37 * local_1fc + local_200 * 0.0 + local_1f8 * 0.0 +
                                 fVar43 * local_1f4,
                                 local_1fc * 0.0 + fVar35 * local_200 + local_1f8 * 0.0 +
                                 fVar30 * local_1f4);
            local_238 = NEON_fmadd(local_1f4,0,local_1f8 + fVar44);
            fStack_234 = local_1f4 + fStack_234;
            local_270 = CONCAT44(fVar37 * local_22c + local_230 * 0.0 + local_228 * 0.0 +
                                 fVar43 * local_224,
                                 local_22c * 0.0 + fVar35 * local_230 + local_228 * 0.0 +
                                 fVar30 * local_224);
            local_260 = CONCAT44(fVar37 * local_21c + local_220 * 0.0 + local_218 * 0.0 +
                                 fVar43 * local_214,
                                 local_21c * 0.0 + fVar35 * local_220 + local_218 * 0.0 +
                                 fVar30 * local_214);
            local_250 = CONCAT44(fVar37 * local_20c + local_210 * 0.0 + local_208 * 0.0 +
                                 fVar43 * local_204,
                                 local_20c * 0.0 + fVar35 * local_210 + local_208 * 0.0 +
                                 fVar30 * local_204);
                    /* try { // try from 00a258c8 to 00a25937 has its CatchHandler @ 00a25c70 */
            RenderDeviceManager::getInstance();
            plVar16 = (long *)RenderDeviceManager::getCurrentRenderDevice();
            lVar18 = (**(code **)(*plVar16 + 0x28))();
            if (*(char *)(lVar18 + 0x9d) == '\0') {
              this_01[0x3b0] = (RenderArgs)0x1;
              uVar33 = uVar33 - uVar36;
            }
            else {
              this_01[0x3b0] = (RenderArgs)0x0;
              local_270 = CONCAT44(-local_270._4_4_,(undefined4)local_270);
              local_260 = CONCAT44(-local_260._4_4_,(undefined4)local_260);
              local_250 = CONCAT44(-local_250._4_4_,(undefined4)local_250);
              local_240 = CONCAT44(-local_240._4_4_,(undefined4)local_240);
              iVar6 = (**(code **)(*local_290 + 0x28))();
              uVar33 = (iVar32 - uVar33) + iVar6;
            }
                    /* try { // try from 00a25ad4 to 00a25b0f has its CatchHandler @ 00a25c6c */
            RenderArgs::setupViewport(this_01,uVar4,uVar33,iVar34 - uVar4,uVar36 - iVar32);
            TransformArgs::setupFwd
                      ((TransformArgs *)this_01,(Matrix4x4 *)&local_1f0,(Matrix4x4 *)&local_270,
                       *(float *)(*(long *)(this + 0x10) + 0xc0),
                       *(float *)(*(long *)(this + 0x10) + 0xc4),(Vector3 *)0x0);
            CullingArgs::copyTransformData(this_00,(TransformArgs *)this_01);
          }
          lVar18 = *(long *)(this + 0x20);
          lVar10 = *(long *)(this + 0x28);
          lVar12 = *(long *)(this + 8);
        }
        pplVar24 = local_288;
        uVar13 = (ulong)*(uint *)(lVar12 + 0x38);
        uVar14 = (ulong)((int)uVar14 + 1);
        uVar26 = (lVar10 - lVar18 >> 5) * -0x5555555555555555;
        if (uVar26 < uVar13 || uVar26 - uVar13 == 0) {
          uVar13 = uVar26;
        }
      } while (uVar14 < uVar13);
      pplVar19 = local_280;
      if (local_288 != (long **)0x0) {
        while (pplVar22 = pplVar19, pplVar22 != pplVar24) {
          plVar16 = pplVar22[-3];
          pplVar19 = pplVar22 + -6;
          if (plVar16 != (long *)0x0) {
            pplVar22[-2] = plVar16;
            operator_delete(plVar16);
          }
        }
        local_280 = pplVar24;
        operator_delete(local_288);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


