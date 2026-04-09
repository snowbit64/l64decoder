// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lightsAdded
// Entry Point: 009fe7f8
// Size: 3508 bytes
// Signature: undefined __thiscall lightsAdded(LightList * this, bool param_1, Matrix4x4 * param_2, RenderStats * param_3)


/* LightList::lightsAdded(bool, Matrix4x4 const&, RenderStats&) */

void __thiscall
LightList::lightsAdded(LightList *this,bool param_1,Matrix4x4 *param_2,RenderStats *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  void *pvVar13;
  LightSourceQueueItem **ppLVar14;
  LightSourceQueueItem **ppLVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  void **this_00;
  ulong uVar20;
  LightSourceQueueItem **ppLVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  void *pvVar25;
  LightSourceQueueItem *pLVar26;
  size_t sVar27;
  long lVar28;
  LightSourceQueueItem **ppLVar29;
  undefined *puVar30;
  LightSourceQueueItem *pLVar31;
  int local_ac;
  undefined8 local_a0;
  LightSourceQueueItem **local_88;
  LightSourceQueueItem **local_80;
  LightSourceQueueItem **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (!param_1) {
    this[0x30] = (LightList)0x0;
  }
  lVar12 = EngineManager::getInstance();
  uVar9 = *(uint *)(lVar12 + 0x238);
  uVar10 = *(int *)(lVar12 + 0x234) - 1;
  uVar10 = uVar10 | uVar10 >> 1;
  if (3 < uVar9) {
    uVar9 = 4;
  }
  uVar24 = (ulong)uVar9;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar9 = uVar10 + 1;
  if (uVar10 == 0xffffffff) {
    uVar9 = 1;
  }
  uVar20 = (ulong)uVar9;
  std::__ndk1::__sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
            (*(LightSourceQueueItem **)(this + 0x50),*(LightSourceQueueItem **)(this + 0x58),
             (CompareLightSourceByShadingImportance *)&local_88);
  std::__ndk1::__sort<LightList::CompareLightSourceByShadingImportance&,LightSourceQueueItem*>
            (*(LightSourceQueueItem **)(this + 0x68),*(LightSourceQueueItem **)(this + 0x70),
             (CompareLightSourceByShadingImportance *)&local_88);
  lVar12 = *(long *)(this + 0x50);
  lVar22 = *(long *)(this + 0x58);
  uVar16 = (lVar22 - lVar12 >> 3) * -0x3333333333333333;
  if (uVar20 <= uVar16 && uVar16 - uVar20 != 0) {
    lVar22 = lVar12 + uVar20 * 0x28;
    *(long *)(this + 0x58) = lVar22;
  }
  lVar28 = *(long *)(this + 0x68);
  lVar17 = *(long *)(this + 0x70);
  uVar16 = (lVar17 - lVar28 >> 3) * -0x3333333333333333;
  if (uVar24 <= uVar16 && uVar16 - uVar24 != 0) {
    lVar17 = lVar28 + uVar24 * 0x28;
    *(long *)(this + 0x70) = lVar17;
  }
  this_00 = (void **)(this + 0x18);
  if (*(void **)(this + 0x20) != *this_00) {
    *(void **)(this + 0x20) = *this_00;
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  uVar24 = (lVar17 - lVar28 >> 3) * -0x3333333333333333;
  iVar23 = (int)uVar24;
  *(ulong *)(this + 0xb8) = (ulong)(uint)(iVar23 << 1);
  *(ulong *)(this + 0xc0) = (ulong)(uint)(iVar23 << 1);
  if ((this[0x30] == (LightList)0x0) || (*(long **)(*(long *)(this + 0xb0) + 0x98) == (long *)0x0))
  {
    local_ac = 0;
    local_a0._0_4_ = 0;
    local_a0 = 0;
  }
  else {
    (**(code **)(**(long **)(*(long *)(this + 0xb0) + 0x98) + 0x20))();
    (**(code **)(**(long **)(*(long *)(this + 0xb0) + 0x98) + 0x28))();
    if (iVar23 != 0) {
      lVar28 = 0;
      do {
        uVar9 = LightSource::getLightFlags();
        if ((uVar9 >> 5 & 1) != 0) {
          lVar17 = *(long *)(this + 0x68);
          plVar1 = *(long **)(this + 0x20);
          if (plVar1 < *(long **)(this + 0x28)) {
            *plVar1 = lVar17 + lVar28;
            *(long **)(this + 0x20) = plVar1 + 1;
          }
          else {
            pvVar25 = *this_00;
            sVar27 = (long)plVar1 - (long)pvVar25;
            uVar16 = ((long)sVar27 >> 3) + 1;
            if (uVar16 >> 0x3d != 0) goto LAB_009ff544;
            uVar20 = (long)*(long **)(this + 0x28) - (long)pvVar25;
            uVar18 = (long)uVar20 >> 2;
            if (uVar16 <= uVar18) {
              uVar16 = uVar18;
            }
            if (0x7ffffffffffffff7 < uVar20) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              if (uVar16 >> 0x3d != 0) goto LAB_009ff554;
              pvVar13 = operator_new(uVar16 << 3);
            }
            plVar1 = (long *)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
            *plVar1 = lVar17 + lVar28;
            if (0 < (long)sVar27) {
              memcpy(pvVar13,pvVar25,sVar27);
            }
            *(void **)(this + 0x18) = pvVar13;
            *(long **)(this + 0x20) = plVar1 + 1;
            *(void **)(this + 0x28) = (void *)((long)pvVar13 + uVar16 * 8);
            if (pvVar25 != (void *)0x0) {
              operator_delete(pvVar25);
            }
          }
        }
        lVar28 = lVar28 + 0x28;
      } while (((uVar24 & 0xffffffff) + (uVar24 & 0xffffffff) * 4) * 8 - lVar28 != 0);
    }
    uVar16 = (lVar22 - lVar12 >> 3) * -0x3333333333333333;
    if ((int)uVar16 == 0) {
      local_ac = 0;
      local_a0 = 0;
    }
    else {
      lVar12 = 0;
      local_a0 = 0;
      local_ac = 0;
      do {
        lVar22 = *(long *)(this + 0x50) + lVar12;
        if (*(int *)(*(long *)(lVar22 + 0x10) + 0x16c) == 1) {
          local_a0 = CONCAT44(local_a0._4_4_ + 1,(int)local_a0);
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + 1);
          uVar9 = LightSource::getLightFlags();
          if (((uVar9 >> 5 & 1) != 0) &&
             (uVar20 = LightSource::isMergedShadowActive(), (uVar20 & 1) == 0)) {
            plVar1 = *(long **)(this + 0x20);
            if (plVar1 < *(long **)(this + 0x28)) {
              *plVar1 = lVar22;
              *(long **)(this + 0x20) = plVar1 + 1;
            }
            else {
              pvVar25 = *this_00;
              sVar27 = (long)plVar1 - (long)pvVar25;
              uVar20 = ((long)sVar27 >> 3) + 1;
              if (uVar20 >> 0x3d != 0) {
LAB_009ff544:
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar18 = (long)*(long **)(this + 0x28) - (long)pvVar25;
              uVar19 = (long)uVar18 >> 2;
              if (uVar20 <= uVar19) {
                uVar20 = uVar19;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar20 = 0x1fffffffffffffff;
              }
              if (uVar20 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                if (uVar20 >> 0x3d != 0) {
LAB_009ff554:
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                pvVar13 = operator_new(uVar20 << 3);
              }
              plVar1 = (long *)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
              *plVar1 = lVar22;
              if (0 < (long)sVar27) {
                memcpy(pvVar13,pvVar25,sVar27);
              }
              *(void **)(this + 0x18) = pvVar13;
              *(long **)(this + 0x20) = plVar1 + 1;
              *(void **)(this + 0x28) = (void *)((long)pvVar13 + uVar20 * 8);
              if (pvVar25 != (void *)0x0) {
                operator_delete(pvVar25);
              }
            }
            local_ac = local_ac + 1;
          }
        }
        lVar12 = lVar12 + 0x28;
      } while (((uVar16 & 0xffffffff) + (uVar16 & 0xffffffff) * 4) * 8 - lVar12 != 0);
    }
    ppLVar14 = *(LightSourceQueueItem ***)(this + 0x18);
    ppLVar15 = *(LightSourceQueueItem ***)(this + 0x20);
    if ((ulong)*(uint *)(this + 8) < (ulong)((long)ppLVar15 - (long)ppLVar14 >> 3)) {
      std::__ndk1::__sort<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                (ppLVar14,ppLVar15,(CompareLightSourceByShadowImportance *)&local_88);
      ppLVar14 = *(LightSourceQueueItem ***)(this + 0x18);
      ppLVar15 = *(LightSourceQueueItem ***)(this + 0x20);
      uVar20 = (ulong)*(uint *)(this + 8);
      uVar18 = (long)ppLVar15 - (long)ppLVar14 >> 3;
      if (uVar18 < uVar20) {
        std::__ndk1::vector<LightSourceQueueItem*,std::__ndk1::allocator<LightSourceQueueItem*>>::
        __append((vector<LightSourceQueueItem*,std::__ndk1::allocator<LightSourceQueueItem*>> *)
                 this_00,uVar20 - uVar18);
        ppLVar14 = *(LightSourceQueueItem ***)(this + 0x18);
        ppLVar15 = *(LightSourceQueueItem ***)(this + 0x20);
      }
      else if (uVar20 < uVar18) {
        ppLVar15 = ppLVar14 + uVar20;
        *(LightSourceQueueItem ***)(this + 0x20) = ppLVar15;
      }
    }
    ppLVar21 = (LightSourceQueueItem **)0x0;
    local_88 = (LightSourceQueueItem **)0x0;
    local_80 = (LightSourceQueueItem **)0x0;
    local_78 = (LightSourceQueueItem **)0x0;
    if (ppLVar15 != ppLVar14) {
      uVar20 = 0;
      do {
        pLVar31 = ppLVar14[uVar20];
        pLVar26 = *(LightSourceQueueItem **)(pLVar31 + 0x10);
        if (*(int *)(pLVar26 + 0x16c) == 2) {
                    /* try { // try from 009fedc0 to 009fedd3 has its CatchHandler @ 009ff5e0 */
          uVar11 = LightSource::getDepthMapResolution();
          uVar18 = LightSource::isMergedShadowActive();
          if ((uVar18 & 1) == 0) {
            uVar2 = *(undefined4 *)(pLVar26 + 0x1c4);
                    /* try { // try from 009feddc to 009fee53 has its CatchHandler @ 009ff5bc */
            bVar8 = LightSource::isLastShadowMapSplitFixed();
            ppLVar15 = local_88;
            if (ppLVar21 < local_78) {
              *ppLVar21 = pLVar31;
              ppLVar21[1] = pLVar26;
              *(undefined4 *)(ppLVar21 + 2) = uVar11;
              *(undefined4 *)((long)ppLVar21 + 0x14) = uVar2;
              goto LAB_009feca8;
            }
            sVar27 = (long)ppLVar21 - (long)local_88;
            uVar18 = ((long)sVar27 >> 5) + 1;
            if (uVar18 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)local_78 - (long)local_88 >> 4;
            if (uVar18 <= uVar19) {
              uVar18 = uVar19;
            }
            if (0x7fffffffffffffdf < (ulong)((long)local_78 - (long)local_88)) {
              uVar18 = 0x7ffffffffffffff;
            }
            if (uVar18 >> 0x3b != 0) {
                    /* try { // try from 009ff594 to 009ff5a7 has its CatchHandler @ 009ff5b8 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            ppLVar14 = (LightSourceQueueItem **)operator_new(uVar18 << 5);
            ppLVar21 = ppLVar14 + ((long)sVar27 >> 5) * 4;
            *ppLVar21 = pLVar31;
            ppLVar21[1] = pLVar26;
            *(undefined4 *)(ppLVar21 + 2) = uVar11;
            *(undefined4 *)((long)ppLVar21 + 0x14) = uVar2;
            *(byte *)(ppLVar21 + 3) = bVar8 & 1;
            if (0 < (long)sVar27) {
              memcpy(ppLVar14,ppLVar15,sVar27);
            }
            local_78 = ppLVar14 + uVar18 * 4;
            local_88 = ppLVar14;
joined_r0x009fee94:
            ppLVar21 = ppLVar21 + 4;
            local_80 = ppLVar21;
            if (ppLVar15 != (LightSourceQueueItem **)0x0) {
              operator_delete(ppLVar15);
            }
          }
        }
        else if (*(int *)(pLVar26 + 0x16c) == 0) {
                    /* try { // try from 009fecec to 009fecf3 has its CatchHandler @ 009ff5c8 */
          uVar10 = LightSource::getDepthMapResolution();
          uVar9 = *(uint *)(pLVar26 + 0x1c4);
                    /* try { // try from 009fed04 to 009fed6f has its CatchHandler @ 009ff5dc */
          bVar8 = LightSource::isLastShadowMapSplitFixed();
          ppLVar15 = local_88;
          uVar10 = uVar10 >> (1 < uVar9);
          if (local_78 <= ppLVar21) {
            sVar27 = (long)ppLVar21 - (long)local_88;
            uVar18 = ((long)sVar27 >> 5) + 1;
            if (uVar18 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)local_78 - (long)local_88 >> 4;
            if (uVar18 <= uVar19) {
              uVar18 = uVar19;
            }
            if (0x7fffffffffffffdf < (ulong)((long)local_78 - (long)local_88)) {
              uVar18 = 0x7ffffffffffffff;
            }
            if (uVar18 >> 0x3b != 0) {
                    /* try { // try from 009ff560 to 009ff573 has its CatchHandler @ 009ff5c4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            ppLVar14 = (LightSourceQueueItem **)operator_new(uVar18 << 5);
            ppLVar21 = ppLVar14 + ((long)sVar27 >> 5) * 4;
            *(uint *)(ppLVar21 + 2) = uVar10;
            *(uint *)((long)ppLVar21 + 0x14) = uVar9;
            *ppLVar21 = pLVar31;
            ppLVar21[1] = pLVar26;
            *(byte *)(ppLVar21 + 3) = bVar8 & 1;
            if (0 < (long)sVar27) {
              memcpy(ppLVar14,ppLVar15,sVar27);
            }
            local_78 = ppLVar14 + uVar18 * 4;
            local_88 = ppLVar14;
            goto joined_r0x009fee94;
          }
          *ppLVar21 = pLVar31;
          ppLVar21[1] = pLVar26;
          *(uint *)(ppLVar21 + 2) = uVar10;
          *(uint *)((long)ppLVar21 + 0x14) = uVar9;
LAB_009feca8:
          *(byte *)(ppLVar21 + 3) = bVar8 & 1;
          *(undefined4 *)((long)ppLVar21 + 0x19) = local_70;
          *(uint *)((long)ppLVar21 + 0x1c) = CONCAT31((undefined3)uStack_6c,local_70._3_1_);
          ppLVar21 = ppLVar21 + 4;
          local_80 = ppLVar21;
        }
        ppLVar14 = *(LightSourceQueueItem ***)(this + 0x18);
        uVar20 = (ulong)((int)uVar20 + 1);
      } while (uVar20 < (ulong)(*(long *)(this + 0x20) - (long)ppLVar14 >> 3));
    }
    lVar12 = *(long *)(this + 0x98);
    ppLVar15 = local_88;
    ppLVar14 = local_88;
    if (*(long *)(this + 0xa0) != lVar12) {
      uVar20 = 0;
      do {
        ppLVar15 = local_88;
        pLVar26 = (LightSourceQueueItem *)(lVar12 + uVar20 * 0x140);
        pLVar31 = *(LightSourceQueueItem **)(pLVar26 + 0x30);
        uVar11 = *(undefined4 *)(pLVar26 + 0x24);
        if (ppLVar21 < local_78) {
          *ppLVar21 = pLVar26;
          ppLVar21[1] = pLVar31;
          *(undefined *)(ppLVar21 + 3) = 0;
          *(undefined4 *)(ppLVar21 + 2) = uVar11;
          *(undefined4 *)((long)ppLVar21 + 0x14) = 1;
          *(undefined4 *)((long)ppLVar21 + 0x19) = local_70;
          *(uint *)((long)ppLVar21 + 0x1c) = CONCAT31((undefined3)uStack_6c,local_70._3_1_);
          ppLVar21 = ppLVar21 + 4;
          local_80 = ppLVar21;
        }
        else {
          sVar27 = (long)ppLVar21 - (long)local_88;
          uVar18 = ((long)sVar27 >> 5) + 1;
          if (uVar18 >> 0x3b != 0) {
                    /* try { // try from 009ff530 to 009ff543 has its CatchHandler @ 009ff5e8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar19 = (long)local_78 - (long)local_88 >> 4;
          if (uVar18 <= uVar19) {
            uVar18 = uVar19;
          }
          if (0x7fffffffffffffdf < (ulong)((long)local_78 - (long)local_88)) {
            uVar18 = 0x7ffffffffffffff;
          }
          if (uVar18 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009fef64 to 009fef67 has its CatchHandler @ 009ff5d8 */
          ppLVar14 = (LightSourceQueueItem **)operator_new(uVar18 << 5);
          ppLVar21 = ppLVar14 + ((long)sVar27 >> 5) * 4;
          *ppLVar21 = pLVar26;
          ppLVar21[1] = pLVar31;
          *(undefined4 *)(ppLVar21 + 2) = uVar11;
          *(undefined4 *)((long)ppLVar21 + 0x14) = 1;
          *(undefined *)(ppLVar21 + 3) = 0;
          if (0 < (long)sVar27) {
            memcpy(ppLVar14,ppLVar15,sVar27);
          }
          ppLVar21 = ppLVar21 + 4;
          local_78 = ppLVar14 + uVar18 * 4;
          local_88 = ppLVar14;
          local_80 = ppLVar21;
          if (ppLVar15 != (LightSourceQueueItem **)0x0) {
            operator_delete(ppLVar15);
          }
        }
        lVar12 = *(long *)(this + 0x98);
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar18 = (*(long *)(this + 0xa0) - lVar12 >> 6) * -0x3333333333333333;
        ppLVar15 = local_88;
        ppLVar14 = local_88;
      } while (uVar20 <= uVar18 && uVar18 - uVar20 != 0);
    }
    for (; ppLVar29 = local_88, local_88 = ppLVar14, ppLVar15 != ppLVar21; ppLVar15 = ppLVar15 + 4)
    {
      uVar10 = *(uint *)((long)ppLVar15 + 0x14);
      lVar12 = *(long *)(this + 0xb0);
      uVar9 = uVar10;
      if (7 < uVar10) {
        uVar9 = 8;
      }
      if (uVar10 == 0) {
        uVar9 = 1;
      }
      uVar10 = *(uint *)(lVar12 + 0x28);
      if (uVar9 <= *(uint *)(lVar12 + 0x28)) {
        uVar10 = uVar9;
      }
      if (uVar10 - 2 < 6) {
        bVar7 = *(long *)(lVar12 + 0xe8) != 0;
LAB_009ff030:
                    /* try { // try from 009ff05c to 009ff063 has its CatchHandler @ 009ff5f0 */
        for (lVar22 = 0;
            PersistentShadowMap::requestRegion
                      (*(PersistentShadowMap **)(lVar12 + 0x30),*(uint *)(ppLVar15 + 2),
                       (LightSource *)ppLVar15[1],(uint)lVar22,
                       *(uint *)(&DAT_0051d3b0 + lVar22 * 4 + (ulong)(uVar10 - 1) * 0x14)),
            (ulong)uVar10 - 1 != lVar22; lVar22 = lVar22 + 1) {
          lVar12 = *(long *)(this + 0xb0);
        }
        if (bVar7) {
                    /* try { // try from 009ff090 to 009ff09b has its CatchHandler @ 009ff5d0 */
          PersistentShadowMap::requestRegion
                    (*(PersistentShadowMap **)(*(long *)(this + 0xb0) + 0x30),
                     *(uint *)(ppLVar15 + 2) >> 1,(LightSource *)ppLVar15[1],uVar10,0xffffffff);
        }
      }
      else if (uVar10 != 0) {
        bVar7 = false;
        goto LAB_009ff030;
      }
      ppLVar14 = local_88;
      local_88 = ppLVar29;
    }
                    /* try { // try from 009ff0a8 to 009ff0ab has its CatchHandler @ 009ff5b0 */
    PersistentShadowMap::processRequests();
    if (ppLVar29 != ppLVar21) {
      uVar20 = 0;
      do {
        ppLVar29 = ppLVar29 + uVar20 * 4;
        lVar12 = *(long *)(this + 0xb0);
        uVar10 = *(uint *)((long)ppLVar29 + 0x14);
        cVar5 = *(char *)(ppLVar29 + 3);
        uVar3 = *(uint *)(lVar12 + 0x28);
        uVar9 = uVar10;
        if (7 < uVar10) {
          uVar9 = 8;
        }
        if (uVar10 == 0) {
          uVar9 = 1;
        }
        uVar10 = uVar3;
        if (uVar9 <= uVar3) {
          uVar10 = uVar9;
        }
        if (uVar10 - 2 < 6) {
          bVar7 = *(long *)(lVar12 + 0xe8) != 0;
        }
        else {
          bVar7 = false;
        }
        lVar22 = *(long *)(this + 0x10);
        pLVar26 = *ppLVar29;
        puVar30 = (undefined *)(lVar22 + uVar20 * 0x78);
        *puVar30 = (char)uVar10;
        puVar30[1] = uVar9 <= uVar3 && cVar5 != '\0';
        puVar30[2] = 0;
        if (uVar10 != 0) {
          lVar28 = 0;
          while( true ) {
                    /* try { // try from 009ff17c to 009ff183 has its CatchHandler @ 009ff5ec */
            lVar12 = PersistentShadowMap::findRegion
                               (*(PersistentShadowMap **)(lVar12 + 0x30),(LightSource *)ppLVar29[1],
                                (uint)lVar28);
            *(long *)(lVar22 + uVar20 * 0x78 + 8 + lVar28 * 8) = lVar12;
            if (lVar12 == 0) break;
            if ((ulong)uVar10 - 1 == lVar28) goto LAB_009ff1ac;
            lVar12 = *(long *)(this + 0xb0);
            lVar28 = lVar28 + 1;
          }
          *(undefined8 *)(lVar22 + uVar20 * 0x78 + 8) = 0;
        }
LAB_009ff1ac:
        if (bVar7) {
                    /* try { // try from 009ff1c0 to 009ff1c7 has its CatchHandler @ 009ff5d4 */
          lVar12 = PersistentShadowMap::findRegion
                             (*(PersistentShadowMap **)(*(long *)(this + 0xb0) + 0x30),
                              (LightSource *)ppLVar29[1],uVar10);
          *(long *)(lVar22 + uVar20 * 0x78 + (ulong)uVar10 * 8 + 8) = lVar12;
          if (lVar12 != 0) {
            puVar30[2] = 1;
          }
        }
        if (*(long *)(lVar22 + uVar20 * 0x78 + 8) != 0) {
          *(undefined **)(pLVar26 + 8) = puVar30;
        }
        uVar20 = (ulong)((int)uVar20 + 1);
        ppLVar29 = local_88;
      } while (uVar20 < (ulong)((long)local_80 - (long)local_88 >> 5));
    }
                    /* try { // try from 009ff204 to 009ff20b has its CatchHandler @ 009ff5b0 */
    std::__ndk1::__sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
              (*(LightSourceQueueItem **)(this + 0x68),*(LightSourceQueueItem **)(this + 0x70),
               (CompareLightSourceShadowsFirst *)&local_70);
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    if (*(long *)(this + 0x20) != *(long *)(this + 0x18)) {
      *(long *)(this + 0x20) = *(long *)(this + 0x18);
    }
    if (iVar23 != 0) {
      lVar12 = 0;
      do {
        lVar22 = *(long *)(this + 0x68) + lVar12;
        lVar28 = *(long *)(lVar22 + 8);
        if (lVar28 == 0) break;
        iVar4 = *(int *)(this + 0x34);
        *(int *)(this + 0x34) = iVar4 + 1;
        bVar7 = *(char *)(lVar28 + 2) != '\0';
        if (bVar7) {
          *(ulong *)(this + 0xb8) = *(ulong *)(this + 0xb8) | 0x80;
        }
        plVar1 = *(long **)(this + 0x20);
        *(ulong *)(this + 0xc0) =
             *(ulong *)(this + 0xc0) | (ulong)bVar7 << ((ulong)(iVar4 + 7) & 0x3f);
        if (plVar1 < *(long **)(this + 0x28)) {
          *plVar1 = lVar22;
          *(long **)(this + 0x20) = plVar1 + 1;
        }
        else {
          pvVar25 = *this_00;
          sVar27 = (long)plVar1 - (long)pvVar25;
          uVar20 = ((long)sVar27 >> 3) + 1;
          if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 009ff54c to 009ff553 has its CatchHandler @ 009ff5cc */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar18 = (long)*(long **)(this + 0x28) - (long)pvVar25;
          uVar19 = (long)uVar18 >> 2;
          if (uVar20 <= uVar19) {
            uVar20 = uVar19;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar20 = 0x1fffffffffffffff;
          }
          if (uVar20 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 009ff57c to 009ff587 has its CatchHandler @ 009ff5cc */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 009ff2fc to 009ff2ff has its CatchHandler @ 009ff5b4 */
            pvVar13 = operator_new(uVar20 << 3);
          }
          plVar1 = (long *)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
          *plVar1 = lVar22;
          if (0 < (long)sVar27) {
            memcpy(pvVar13,pvVar25,sVar27);
          }
          *(void **)(this + 0x18) = pvVar13;
          *(long **)(this + 0x20) = plVar1 + 1;
          *(void **)(this + 0x28) = (void *)((long)pvVar13 + uVar20 * 8);
          if (pvVar25 != (void *)0x0) {
            operator_delete(pvVar25);
          }
        }
        lVar12 = lVar12 + 0x28;
      } while (((uVar24 & 0xffffffff) + (uVar24 & 0xffffffff) * 4) * 8 - lVar12 != 0);
    }
    if ((int)uVar16 != 0) {
      lVar12 = 0;
      do {
                    /* try { // try from 009ff38c to 009ff38f has its CatchHandler @ 009ff5e4 */
        uVar20 = LightSource::isMergedShadowActive();
        if ((uVar20 & 1) == 0) {
          lVar22 = *(long *)(this + 0x50) + lVar12;
          if (*(long *)(lVar22 + 8) != 0) {
            plVar1 = *(long **)(this + 0x20);
            *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
            if (plVar1 < *(long **)(this + 0x28)) {
              *plVar1 = lVar22;
              *(long **)(this + 0x20) = plVar1 + 1;
            }
            else {
              pvVar25 = *this_00;
              sVar27 = (long)plVar1 - (long)pvVar25;
              uVar20 = ((long)sVar27 >> 3) + 1;
              if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 009ff574 to 009ff57b has its CatchHandler @ 009ff5c0 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar18 = (long)*(long **)(this + 0x28) - (long)pvVar25;
              uVar19 = (long)uVar18 >> 2;
              if (uVar20 <= uVar19) {
                uVar20 = uVar19;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar20 = 0x1fffffffffffffff;
              }
              if (uVar20 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 009ff588 to 009ff593 has its CatchHandler @ 009ff5c0 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 009ff410 to 009ff413 has its CatchHandler @ 009ff5ac */
                pvVar13 = operator_new(uVar20 << 3);
              }
              plVar1 = (long *)((long)pvVar13 + ((long)sVar27 >> 3) * 8);
              *plVar1 = lVar22;
              if (0 < (long)sVar27) {
                memcpy(pvVar13,pvVar25,sVar27);
              }
              *(void **)(this + 0x18) = pvVar13;
              *(long **)(this + 0x20) = plVar1 + 1;
              *(void **)(this + 0x28) = (void *)((long)pvVar13 + uVar20 * 8);
              if (pvVar25 != (void *)0x0) {
                operator_delete(pvVar25);
              }
            }
          }
        }
        else {
          *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
        }
        lVar12 = lVar12 + 0x28;
      } while (((uVar16 & 0xffffffff) + (uVar16 & 0xffffffff) * 4) * 8 - lVar12 != 0);
    }
    *(ulong *)(this + 0xc0) =
         *(ulong *)(this + 0xc0) | (ulong)(*(uint *)(this + 0x34) << 4) |
         (ulong)((*(uint *)(this + 0x34) | *(uint *)(this + 0x38)) != 0 ||
                *(long *)(this + 0xa0) != *(long *)(this + 0x98));
    if (local_88 != (LightSourceQueueItem **)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
  }
  if (iVar23 == 0) {
    lVar12 = *(long *)(this + 0x68);
  }
  else {
    lVar12 = 0;
    do {
      uVar9 = LightSource::getLightFlags();
      if ((uVar9 >> 7 & 1) != 0) {
        *(long *)(this + 0x40) = *(long *)(this + 0x68) + lVar12;
        lVar12 = *(long *)(this + 0x68);
        goto joined_r0x009febec;
      }
      lVar12 = lVar12 + 0x28;
    } while (((uVar24 & 0xffffffff) + (uVar24 & 0xffffffff) * 4) * 8 - lVar12 != 0);
    lVar12 = *(long *)(this + 0x68);
joined_r0x009febec:
    if (iVar23 != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(lVar12 + lVar22 + 8) != 0) {
          *(long *)(this + 0x48) = lVar12 + lVar22;
          break;
        }
        lVar22 = lVar22 + 0x28;
      } while (((uVar24 & 0xffffffff) + (uVar24 & 0xffffffff) * 4) * 8 - lVar22 != 0);
    }
  }
  local_a0._4_4_ = (int)((ulong)local_a0 >> 0x20);
  *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + local_a0._4_4_;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (int)local_a0;
  lVar22 = *(long *)(this + 0x70);
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + local_ac;
  *(int *)(param_3 + 0x10) =
       *(int *)(param_3 + 0x10) + (int)((ulong)(lVar22 - lVar12) >> 3) * -0x33333333;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + *(int *)(this + 0x34);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


