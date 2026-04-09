// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processOverBudgetTextures_async
// Entry Point: 0096bbc0
// Size: 1812 bytes
// Signature: undefined processOverBudgetTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processOverBudgetTextures_async() */

void TextureStreamingManager::processOverBudgetTextures_async(void)

{
  CommonPipelineData *this;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  TextureStreamingManager *in_x0;
  ulong uVar8;
  long **pplVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long **pplVar17;
  long **pplVar18;
  long **pplVar19;
  long **pplVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  uint local_8c;
  long **local_88;
  long **local_80;
  long **local_78;
  bool local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(in_x0 + 0x220) != 0) {
    this = (CommonPipelineData *)(in_x0 + 0x218);
    uVar15 = (*(long *)(in_x0 + 0x220) + (ulong)*(uint *)(in_x0 + 0x5a8)) -
             (long)*(int *)(in_x0 + 0x828);
    uVar8 = getSafeMemoryBudget(in_x0,0xc800000,local_6c);
    if (((uVar8 <= uVar15) && (in_x0[0x7c] == (TextureStreamingManager)0x0)) &&
       (local_6c[0] == false)) {
      Event::clear();
      in_x0[0x7c] = (TextureStreamingManager)0x1;
      logFeedback("[Budget] Start over budget protection");
    }
    if ((uVar15 < uVar8) || (in_x0[9] != (TextureStreamingManager)0x0)) {
      if (uVar15 < uVar8) goto LAB_0096c1fc;
    }
    else {
      uVar8 = *(ulong *)(in_x0 + 0x208);
      local_88 = (long **)0x0;
      local_80 = (long **)0x0;
      local_78 = (long **)0x0;
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 0096c2b4 to 0096c2c3 has its CatchHandler @ 0096c2e0 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0096bc84 to 0096bc8b has its CatchHandler @ 0096c2e0 */
        local_80 = (long **)operator_new(uVar8 << 3);
        local_78 = local_80 + uVar8;
      }
      pplVar10 = local_80;
      pplVar19 = local_80;
      local_88 = local_80;
      pplVar17 = local_78;
      for (pplVar18 = *(long ***)(in_x0 + 0x200); pplVar9 = pplVar10, pplVar18 != (long **)0x0;
          pplVar18 = (long **)*pplVar18) {
        while (pplVar9 != pplVar17) {
          pplVar10 = pplVar9 + 1;
          *pplVar9 = pplVar18[2];
          pplVar18 = (long **)*pplVar18;
          pplVar9 = pplVar10;
          local_80 = pplVar10;
          if (pplVar18 == (long **)0x0) goto LAB_0096bd88;
        }
        uVar15 = (long)pplVar17 - (long)pplVar19;
        uVar8 = ((long)uVar15 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 0096c258 to 0096c25f has its CatchHandler @ 0096c308 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar8 <= (ulong)((long)uVar15 >> 2)) {
          uVar8 = (long)uVar15 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pplVar9 = (long **)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 0096c280 to 0096c28b has its CatchHandler @ 0096c308 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0096bd28 to 0096bd2b has its CatchHandler @ 0096c2fc */
          pplVar9 = (long **)operator_new(uVar8 << 3);
        }
        pplVar10 = pplVar9 + ((long)uVar15 >> 3) + 1;
        pplVar9[(long)uVar15 >> 3] = pplVar18[2];
        if (0 < (long)uVar15) {
          memcpy(pplVar9,pplVar19,uVar15);
        }
        pplVar17 = pplVar9 + uVar8;
        local_88 = pplVar9;
        local_80 = pplVar10;
        local_78 = pplVar17;
        if (pplVar19 != (long **)0x0) {
          operator_delete(pplVar19);
        }
        pplVar19 = pplVar9;
      }
LAB_0096bd88:
                    /* try { // try from 0096bd88 to 0096bd93 has its CatchHandler @ 0096c2e0 */
      FUN_00975494(pplVar19,pplVar10);
      if (pplVar19 != pplVar10) {
        pplVar17 = pplVar19;
        do {
          plVar16 = *pplVar17;
                    /* try { // try from 0096bdbc to 0096bdc7 has its CatchHandler @ 0096c314 */
          iVar7 = CommonPipelineData::getTextureStatus_async(this,(ulonglong)plVar16);
          if (iVar7 == 0) {
            plVar11 = *(long **)(in_x0 + 0x230);
            uVar22 = NEON_cnt(plVar11,1);
            uVar21 = NEON_uaddlv(uVar22,1);
            if ((uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) < 2) {
              plVar12 = (long *)((long)plVar11 - 1U & (ulong)plVar16);
            }
            else {
              plVar12 = plVar16;
              if (plVar11 <= plVar16) {
                uVar8 = 0;
                if (plVar11 != (long *)0x0) {
                  uVar8 = (ulong)plVar16 / (ulong)plVar11;
                }
                plVar12 = (long *)((long)plVar16 - uVar8 * (long)plVar11);
              }
            }
            plVar11 = *(long **)(*(long *)(in_x0 + 0x228) + (long)plVar12 * 8);
            do {
              do {
                plVar11 = (long *)*plVar11;
              } while ((long *)plVar11[1] != plVar16);
            } while ((long *)plVar11[2] != plVar16);
            uVar3 = *(uint *)(plVar11 + 0x16);
            uVar4 = *(int *)((long)plVar11 + 0x3c) - 1;
            if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
              uVar1 = 0;
              if (uVar4 <= uVar3) {
                uVar1 = uVar3 - uVar4;
              }
                    /* try { // try from 0096be44 to 0096be4f has its CatchHandler @ 0096c2e4 */
              uVar8 = DowngradePipeline::tryCreateRequest_async
                                ((DowngradePipeline *)(in_x0 + 0x688),(ulonglong)plVar16,uVar1);
                    /* try { // try from 0096be60 to 0096be6f has its CatchHandler @ 0096c2d8 */
              if (((uVar8 & 1) != 0) &&
                 (lVar13 = *(long *)(in_x0 + 0x220), uVar3 = *(uint *)(in_x0 + 0x5a8),
                 iVar7 = *(int *)(in_x0 + 0x828),
                 uVar8 = getSafeMemoryBudget(in_x0,0xc800000,local_6c),
                 (lVar13 + (ulong)uVar3) - (long)iVar7 < uVar8)) {
                bVar6 = false;
                goto LAB_0096be8c;
              }
            }
          }
          pplVar17 = pplVar17 + 1;
        } while (pplVar17 != pplVar10);
      }
      bVar6 = true;
LAB_0096be8c:
      if (pplVar19 != (long **)0x0) {
        operator_delete(pplVar19);
      }
      if (!bVar6) goto LAB_0096c1fc;
    }
    lVar13 = *(long *)(in_x0 + 0x1a8);
    lVar14 = *(long *)(in_x0 + 0x1b0);
    local_88 = (long **)0x0;
    local_80 = (long **)0x0;
    local_78 = (long **)0x0;
    uVar8 = (lVar14 - lVar13 >> 3) * -0x5555555555555555 +
            (*(long *)(in_x0 + 0x180) - *(long *)(in_x0 + 0x178) >> 3) * -0x5555555555555555;
    if (uVar8 == 0) {
      pplVar17 = (long **)0x0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 0096c2c4 to 0096c2cf has its CatchHandler @ 0096c2d4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0096bee0 to 0096bee3 has its CatchHandler @ 0096c2d4 */
      local_80 = (long **)operator_new(uVar8 * 8);
      pplVar17 = local_80 + uVar8;
    }
    pplVar18 = local_80;
    local_88 = local_80;
    FUN_00975e64(lVar13,lVar14);
    lVar13 = *(long *)(in_x0 + 0x1a8);
    lVar14 = *(long *)(in_x0 + 0x1b0);
    pplVar10 = local_88;
    pplVar19 = pplVar18;
    pplVar20 = pplVar18;
    pplVar9 = pplVar18;
    if (lVar14 != lVar13) {
      do {
        plVar16 = *(long **)(lVar14 + -8);
        if (pplVar18 == pplVar17) {
          uVar15 = (long)pplVar18 - (long)pplVar20;
          uVar8 = ((long)uVar15 >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
            local_88 = pplVar10;
            local_78 = pplVar18;
                    /* try { // try from 0096c268 to 0096c26f has its CatchHandler @ 0096c304 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)uVar15 >> 2)) {
            uVar8 = (long)uVar15 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pplVar10 = (long **)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) {
              local_88 = pplVar10;
              local_78 = pplVar18;
                    /* try { // try from 0096c294 to 0096c29f has its CatchHandler @ 0096c304 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0096bf80 to 0096bf83 has its CatchHandler @ 0096c2ec */
            pplVar10 = (long **)operator_new(uVar8 << 3);
          }
          pplVar19 = pplVar10 + ((long)uVar15 >> 3) + 1;
          pplVar10[(long)uVar15 >> 3] = plVar16;
          if (0 < (long)uVar15) {
            memcpy(pplVar10,pplVar20,uVar15);
          }
          pplVar17 = pplVar10 + uVar8;
          pplVar9 = pplVar10;
          local_80 = pplVar19;
          if (pplVar20 != (long **)0x0) {
            operator_delete(pplVar20);
            lVar13 = *(long *)(in_x0 + 0x1a8);
          }
        }
        else {
          pplVar19 = pplVar18 + 1;
          *pplVar18 = plVar16;
          pplVar9 = pplVar20;
          local_80 = pplVar19;
        }
        lVar14 = lVar14 + -0x18;
        pplVar18 = pplVar19;
        pplVar20 = pplVar9;
      } while (lVar14 != lVar13);
    }
    local_88 = pplVar10;
    lVar13 = *(long *)(in_x0 + 0x178);
    lVar14 = *(long *)(in_x0 + 0x180);
    pplVar18 = local_88;
    pplVar10 = pplVar19;
    pplVar20 = pplVar9;
    if (lVar14 != lVar13) {
      do {
        plVar16 = *(long **)(lVar14 + -8);
        if (pplVar19 == pplVar17) {
          uVar15 = (long)pplVar19 - (long)pplVar9;
          uVar8 = ((long)uVar15 >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
            local_88 = pplVar18;
            local_78 = pplVar19;
                    /* try { // try from 0096c278 to 0096c27f has its CatchHandler @ 0096c300 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)uVar15 >> 2)) {
            uVar8 = (long)uVar15 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pplVar18 = (long **)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) {
              local_88 = pplVar18;
              local_78 = pplVar19;
                    /* try { // try from 0096c2a8 to 0096c2b3 has its CatchHandler @ 0096c300 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0096c050 to 0096c053 has its CatchHandler @ 0096c2e8 */
            pplVar18 = (long **)operator_new(uVar8 << 3);
          }
          pplVar10 = pplVar18 + ((long)uVar15 >> 3) + 1;
          pplVar18[(long)uVar15 >> 3] = plVar16;
          if (0 < (long)uVar15) {
            memcpy(pplVar18,pplVar9,uVar15);
          }
          pplVar17 = pplVar18 + uVar8;
          pplVar20 = pplVar18;
          local_80 = pplVar10;
          if (pplVar9 != (long **)0x0) {
            operator_delete(pplVar9);
            lVar13 = *(long *)(in_x0 + 0x178);
          }
        }
        else {
          pplVar10 = pplVar19 + 1;
          *pplVar19 = plVar16;
          pplVar20 = pplVar9;
          local_80 = pplVar10;
        }
        lVar14 = lVar14 + -0x18;
        pplVar19 = pplVar10;
        pplVar9 = pplVar20;
      } while (lVar14 != lVar13);
    }
    local_88 = pplVar18;
    local_78 = pplVar17;
    if (pplVar20 != pplVar10) {
      bVar6 = true;
      pplVar17 = pplVar20;
      do {
        plVar16 = *pplVar17;
                    /* try { // try from 0096c0c4 to 0096c0ef has its CatchHandler @ 0096c328 */
        iVar7 = CommonPipelineData::getTextureStatus_async(this,(ulonglong)plVar16);
        if (iVar7 == 1) {
          UpgradePipeline::cancelRequest_async
                    ((UpgradePipeline *)(in_x0 + 0x3d8),(ulonglong)plVar16);
          iVar7 = CommonPipelineData::getTextureStatus_async(this,(ulonglong)plVar16);
        }
        if (iVar7 == 0) {
          plVar11 = *(long **)(in_x0 + 0x230);
          uVar22 = NEON_cnt(plVar11,1);
          uVar21 = NEON_uaddlv(uVar22,1);
          if ((uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) < 2) {
            plVar12 = (long *)((long)plVar11 - 1U & (ulong)plVar16);
          }
          else {
            plVar12 = plVar16;
            if (plVar11 <= plVar16) {
              uVar8 = 0;
              if (plVar11 != (long *)0x0) {
                uVar8 = (ulong)plVar16 / (ulong)plVar11;
              }
              plVar12 = (long *)((long)plVar16 - uVar8 * (long)plVar11);
            }
          }
          plVar11 = *(long **)(*(long *)(in_x0 + 0x228) + (long)plVar12 * 8);
          do {
            do {
              plVar11 = (long *)*plVar11;
            } while ((long *)plVar11[1] != plVar16);
          } while ((long *)plVar11[2] != plVar16);
          uVar3 = *(uint *)(plVar11 + 0x16);
          if (*(uint *)((long)plVar11 + 0x3c) < uVar3 + 1) {
            puVar2 = &local_8c;
            if (uVar3 < 2) {
              puVar2 = (uint *)(plVar11 + 0x16);
            }
            local_8c = 1;
                    /* try { // try from 0096c1b4 to 0096c1bf has its CatchHandler @ 0096c2dc */
            if ((*puVar2 != 0) &&
               (uVar8 = DowngradePipeline::tryCreateRequest_async
                                  ((DowngradePipeline *)(in_x0 + 0x688),(ulonglong)plVar16,*puVar2),
               (uVar8 & 1) != 0)) {
              bVar6 = false;
              goto LAB_0096c0f4;
            }
          }
        }
        else {
LAB_0096c0f4:
          lVar13 = *(long *)(in_x0 + 0x220);
          uVar3 = *(uint *)(in_x0 + 0x5a8);
          iVar7 = *(int *)(in_x0 + 0x828);
                    /* try { // try from 0096c100 to 0096c10f has its CatchHandler @ 0096c310 */
          uVar8 = getSafeMemoryBudget(in_x0,0xc800000,local_6c);
          if ((lVar13 + (ulong)uVar3) - (long)iVar7 < uVar8) break;
        }
        pplVar17 = pplVar17 + 1;
      } while ((pplVar17 != pplVar10) ||
              ((!bVar6 && (bVar6 = true, pplVar17 = pplVar20, pplVar20 != pplVar10))));
    }
    if (pplVar20 != (long **)0x0) {
      operator_delete(pplVar20);
    }
  }
LAB_0096c1fc:
  if ((in_x0[0x7c] != (TextureStreamingManager)0x0) && (*(int *)(in_x0 + 0x82c) < 1)) {
    in_x0[0x7c] = (TextureStreamingManager)0x0;
    Event::post();
    logFeedback("[Budget] Stop over budget protection");
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


