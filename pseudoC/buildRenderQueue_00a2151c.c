// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildRenderQueue
// Entry Point: 00a2151c
// Size: 1504 bytes
// Signature: undefined __thiscall buildRenderQueue(RenderQueue * this, uint param_1, RenderQueueItemAllocator * param_2, RenderTargetData * param_3, vector * param_4, ICommandBuffer * param_5, uint param_6)


/* RenderQueue::buildRenderQueue(unsigned int, RenderQueueItemAllocator&,
   RenderQueue::RenderTargetData const&, std::__ndk1::vector<RenderList::ShapeViewInfo,
   std::__ndk1::allocator<RenderList::ShapeViewInfo> > const&, ICommandBuffer*, unsigned int) */

void __thiscall
RenderQueue::buildRenderQueue
          (RenderQueue *this,uint param_1,RenderQueueItemAllocator *param_2,
          RenderTargetData *param_3,vector *param_4,ICommandBuffer *param_5,uint param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  void **ppvVar5;
  uint uVar6;
  RenderPathManager *this_00;
  uint *puVar7;
  char *pcVar8;
  long *plVar9;
  TextureStreamingManager *this_01;
  IVertexBuffer *pIVar10;
  IStructBuffer *pIVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long **pplVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  void *pvVar22;
  long *plVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  ulonglong local_120;
  long *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  RenderQueue *local_f8;
  long *plStack_f0;
  undefined local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  long lStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long local_b0 [8];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if ((param_1 & 0xfffffffd) == 1) goto LAB_00a21ac0;
  this_00 = (RenderPathManager *)RenderPathManager::getInstance();
  puVar7 = (uint *)RenderPathManager::getRenderPass(this_00,param_1);
  pcVar8 = (char *)RenderPathManager::getRenderPassMaterialAttributes(this_00,*puVar7);
  lVar21 = 0;
  plVar23 = local_b0;
  do {
    lVar12 = *(long *)(this + 0x28);
    if (*(long *)(lVar12 + 0x3b8) == 0) {
      lVar12 = RenderPathManager::getRasterizerState
                         (this_00,*(bool *)(lVar12 + 0x3b0),
                          *(char *)(*(long *)(this + 8) + 0x24) != '\0' &&
                          *(char *)(puVar7 + 4) != '\0',false,(uint)lVar21);
      lVar13 = *(long *)(this + 8);
      *plVar23 = lVar12;
      lVar13 = RenderPathManager::getRasterizerState
                         (this_00,*(bool *)(*(long *)(this + 0x28) + 0x3b0),
                          *(char *)(lVar13 + 0x24) != '\0' && *(char *)(puVar7 + 4) != '\0',true,
                          (uint)lVar21);
    }
    else {
      lVar13 = *(long *)(lVar12 + 0x3c0);
      *plVar23 = *(long *)(lVar12 + 0x3b8);
    }
    plVar23[1] = lVar13;
    lVar21 = lVar21 + 1;
    plVar23 = plVar23 + 2;
  } while (lVar21 != 4);
  lVar21 = EngineManager::getInstance();
  uVar6 = *(uint *)(lVar21 + 0x1f8);
  lStack_d0 = *(long *)(this + 0x28);
  if (2 < uVar6) {
    uVar6 = 3;
  }
  uVar15 = (ulong)(0xf < *(uint *)(lVar21 + 0x1f0)) << 9 | (ulong)*(uint *)(lStack_d0 + 0x3ac) << 2
           | (ulong)(uVar6 << 7);
  if ((*(int *)(lVar21 + 0x24c) == 0) || (*(char *)(*(long *)(this + 8) + 0x51) == '\0')) {
    uVar15 = uVar15 | 0x1000;
  }
  if (((((*(uint *)(lStack_d0 + 0x3a8) >> 2 & 1) != 0) &&
       (*(char *)(*(long *)(lStack_d0 + 0x560) + 0x1878) != '\0')) &&
      ((param_1 == 4 || (param_1 == 2)))) && (*(int *)(*(long *)(lStack_d0 + 0x560) + 0x1b40) != 0))
  {
    uVar15 = uVar15 | 0x400;
  }
  uVar1 = uVar15;
  if (*(long *)(param_3 + 8) != 0) {
    uVar1 = uVar15 | 0x2000;
  }
  if (*(uint *)(param_3 + 0xac) < 2 || *(char *)(lStack_d0 + 0x39c) == '\0') {
    uVar1 = uVar15;
  }
  uVar15 = uVar1 << 0xb | 0x400000;
  if (1 < *(uint *)(lStack_d0 + 0x3d0)) {
    uVar15 = uVar1 << 0xb;
  }
  uVar1 = uVar15 | 0x1000;
  if (param_1 != 2 && param_1 != 4) {
    uVar1 = uVar15;
  }
  if ((*pcVar8 == '\0') || ((*(uint *)(lStack_d0 + 0x3a8) & 1) == 0)) {
    if ((param_1 & 0xfffffffe) == 6) {
      uStack_108 = 0x780;
      local_110 = 0x780;
    }
    else {
      local_110 = 0;
      uStack_108 = 0;
    }
  }
  else {
    uStack_108 = *(undefined8 *)(*(long *)(this + 0x18) + 0xc0);
    local_110 = *(undefined8 *)(*(long *)(this + 0x18) + 0xb8);
  }
  local_c8 = *(long *)(this + 0x30);
  local_f8 = this + 0x198;
  local_d8 = *(undefined8 *)(this + 8);
  plVar23 = (long *)(this + 0x1c0);
  local_e0[0] = 0;
  local_e8 = 0;
  uStack_c0 = *(undefined8 *)(local_c8 + 900);
  local_b8 = *(undefined4 *)(local_c8 + 0x38c);
  plStack_f0 = plVar23;
  Mutex::enterCriticalSection();
                    /* try { // try from 00a21784 to 00a21787 has its CatchHandler @ 00a21b04 */
  uVar15 = ThreadUtil::getCurrentThreadId();
  uVar14 = *(ulong *)(this + 0x1c8);
  if (uVar14 != 0) {
    uVar27 = NEON_cnt(uVar14,1);
    uVar24 = NEON_uaddlv(uVar27,1);
    uVar16 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar24) & 0xffffffff;
    if (uVar16 < 2) {
      uVar17 = uVar14 - 1 & uVar15;
    }
    else {
      uVar17 = uVar15;
      if (uVar14 <= uVar15) {
        uVar17 = 0;
        if (uVar14 != 0) {
          uVar17 = uVar15 / uVar14;
        }
        uVar17 = uVar15 - uVar17 * uVar14;
      }
    }
    pplVar18 = *(long ***)(*plVar23 + uVar17 * 8);
    if ((pplVar18 != (long **)0x0) && (plVar19 = *pplVar18, plVar19 != (long *)0x0)) {
      do {
        uVar20 = plVar19[1];
        if (uVar20 == uVar15) {
          if (plVar19[2] == uVar15) {
            plVar19 = (long *)plVar19[3];
            goto LAB_00a21864;
          }
        }
        else {
          if (uVar16 < 2) {
            uVar20 = uVar20 & uVar14 - 1;
          }
          else if (uVar14 <= uVar20) {
            uVar3 = 0;
            if (uVar14 != 0) {
              uVar3 = uVar20 / uVar14;
            }
            uVar20 = uVar20 - uVar3 * uVar14;
          }
          if (uVar20 != uVar17) break;
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
  }
                    /* try { // try from 00a2182c to 00a21833 has its CatchHandler @ 00a21afc */
  plVar19 = (long *)operator_new(0x30);
  *(undefined4 *)(plVar19 + 5) = 0;
  *(undefined4 *)(plVar19 + 4) = 0x3f800000;
  plVar19[1] = 0;
  *plVar19 = 0;
  plVar19[3] = 0;
  plVar19[2] = 0;
                    /* try { // try from 00a2184c to 00a21863 has its CatchHandler @ 00a21b08 */
  local_120 = ThreadUtil::getCurrentThreadId();
  plStack_118 = plVar19;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>>>
  ::
  __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,RenderQueue::ThreadData*>>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>>>
              *)plVar23,&local_120,(pair *)&local_120);
LAB_00a21864:
                    /* try { // try from 00a21864 to 00a2186b has its CatchHandler @ 00a21b00 */
  Mutex::leaveCriticalSection();
  uVar15 = (*(long *)(param_4 + 8) - *(long *)param_4 >> 3) * -0x5555555555555555;
  if (*(uint *)(plVar19 + 5) <= uVar15 && uVar15 - *(uint *)(plVar19 + 5) != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
    ::rehash((__hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
              *)plVar19,(long)((float)(unkuint9)uVar15 / *(float *)(plVar19 + 4)));
    *(int *)(plVar19 + 5) =
         (int)((ulong)(*(long *)(param_4 + 8) - *(long *)param_4) >> 3) * -0x55555555;
  }
  if ((param_1 & 0xfffffffe) == 6) {
LAB_00a218dc:
    *(undefined8 *)(param_2 + 0x88) = 0;
    lVar21 = *(long *)(this + 0x28);
  }
  else {
    TextureStreamingManager::getInstance();
    uVar15 = TextureStreamingManager::isPaused();
    if ((uVar15 & 1) != 0) goto LAB_00a218dc;
    *(long **)(param_2 + 0x88) = plVar19;
    uVar27 = Watch::getCurrentTicks();
    *(undefined8 *)(param_2 + 0x90) = uVar27;
    *(float *)(param_2 + 0x98) = 1.0 / *(float *)(*(long *)(this + 0x28) + 0x94);
    uVar25 = Camera::getNearClip();
    *(undefined4 *)(param_2 + 0x9c) = uVar25;
    lVar21 = *(long *)(this + 0x28);
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x3dc));
    *(float *)(param_2 + 0xa0) = fVar26 * 0.5;
  }
  *(uint *)(param_2 + 0x28) = param_1;
  *(long *)(param_2 + 0x48) = lVar21;
  *(uint **)(param_2 + 0x30) = puVar7;
  plVar23 = *(long **)param_4;
  plVar2 = *(long **)(param_4 + 8);
  if (plVar23 != plVar2) {
    do {
      lVar21 = *plVar23;
      uVar27 = *(undefined8 *)((long)plVar23 + 0xc);
      local_e0[0] = *(undefined4 *)(plVar23 + 1);
      uVar6 = *(uint *)(lVar21 + 400);
      plVar9 = *(long **)(lVar21 + 0x170);
      uVar15 = uVar1 | 0x800;
      if ((float)uVar27 == 0.0) {
        uVar15 = uVar1;
      }
      *(undefined4 *)(param_2 + 0x10) = local_e0[0];
      *(undefined8 *)(param_2 + 0x14) = uVar27;
      *(long *)(param_2 + 0x38) = lVar21;
      *(long **)(param_2 + 0x40) = plVar9;
      uVar14 = *(ulong *)((ulong)&local_110 | ((ulong)(uVar6 >> 9) & 1) << 3);
      *(long *)(param_2 + 8) =
           local_b0[((ulong)(uVar6 >> 0x16) & 3) * 2 + ((ulong)(uVar6 >> 6) & 1)];
      *(ulong *)(param_2 + 0x20) = (ulong)uVar6 & 0x7f | (uVar15 | uVar14) << 7;
      (**(code **)(*plVar9 + 0x38))(plVar9,param_2,*(undefined2 *)(lVar21 + 0x196),local_e0);
      plVar23 = plVar23 + 3;
    } while (plVar23 != plVar2);
  }
  if (plVar19[3] != 0) {
    this_01 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
    TextureStreamingManager::addTextureUsageContribution
              (this_01,(unordered_map *)plVar19,*(ulonglong *)(*(long *)(this + 8) + 0x90));
    if (plVar19[3] != 0) {
      ppvVar5 = (void **)plVar19[2];
      while (ppvVar5 != (void **)0x0) {
        pvVar22 = *ppvVar5;
        operator_delete(ppvVar5);
        ppvVar5 = (void **)pvVar22;
      }
      lVar21 = plVar19[1];
      plVar19[2] = 0;
      if (lVar21 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(*plVar19 + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar21 != lVar12);
      }
      plVar19[3] = 0;
    }
  }
  pIVar10 = (IVertexBuffer *)
            RenderController::getSbVertexBufferForThreadIx
                      (*(RenderController **)this,param_6,
                       (int)((ulong)((*(long **)(param_2 + 0x60))[1] - **(long **)(param_2 + 0x60))
                            >> 3) * 0x33333334);
  plVar23 = *(long **)(*(RenderController **)this + 0x228);
  if (*(uint *)param_2 == 0) {
    pIVar11 = (IStructBuffer *)0x0;
  }
  else {
    pIVar11 = (IStructBuffer *)
              RenderController::acquireStructBufferForThreadIx
                        (*(RenderController **)this,param_6,*(uint *)param_2);
  }
  uVar6 = (**(code **)(*plVar23 + 0x28))(plVar23);
  RenderQueueItemAllocator::sortAndMergeQueueItems
            (param_2,param_5,pIVar10,pIVar11,(GeometryRenderInfo *)local_e0,uVar6);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
LAB_00a21ac0:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


