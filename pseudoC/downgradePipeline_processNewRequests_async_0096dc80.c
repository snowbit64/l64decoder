// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_processNewRequests_async
// Entry Point: 0096dc80
// Size: 1084 bytes
// Signature: undefined downgradePipeline_processNewRequests_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_processNewRequests_async() */

undefined4 TextureStreamingManager::downgradePipeline_processNewRequests_async(void)

{
  ulonglong *puVar1;
  long lVar2;
  __deque_iterator _Var3;
  uint uVar4;
  long in_x0;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulonglong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined2 uVar15;
  double dVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined auVar20 [16];
  ulonglong local_f8;
  undefined4 local_94;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar5 = Watch::getCurrentTicks();
  _Var3 = (int)in_x0 + 0x690;
  plVar12 = (long *)(*(long *)(in_x0 + 0x698) + (*(ulong *)(in_x0 + 0x6b0) / 0xaa) * 8);
  if (*(long *)(in_x0 + 0x6a0) == *(long *)(in_x0 + 0x698)) {
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar12 + (*(ulong *)(in_x0 + 0x6b0) % 0xaa) * 0x18;
  }
  auVar20._8_8_ = lVar14;
  auVar20._0_8_ = plVar12;
  local_94 = 0;
LAB_0096dd48:
  do {
    lVar10 = auVar20._8_8_;
    plVar12 = auVar20._0_8_;
    lVar14 = 0;
    do {
      Mutex::enterCriticalSection();
      uVar4 = *(uint *)(in_x0 + 0x2c8);
                    /* try { // try from 0096dd58 to 0096dd5f has its CatchHandler @ 0096e0e0 */
      Mutex::leaveCriticalSection();
      if (9 < uVar4) {
LAB_0096e07c:
        if (*(long *)(lVar2 + 0x28) == lVar7) {
          return local_94;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(long *)(in_x0 + 0x6a0) == *(long *)(in_x0 + 0x698)) {
        lVar8 = 0;
      }
      else {
        uVar6 = *(long *)(in_x0 + 0x6b0) + *(long *)(in_x0 + 0x6b8);
        lVar8 = *(long *)(*(long *)(in_x0 + 0x698) + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18;
      }
      if (lVar10 + lVar14 == lVar8) goto LAB_0096e07c;
      dVar16 = (double)Watch::convertTicksToMs(lVar5 - *(long *)(lVar10 + lVar14 + 0x10));
      if ((*(char *)(in_x0 + 0x7c) != '\0') || (*(float *)(in_x0 + 0x1c4) <= (float)dVar16)) {
        uVar6 = CommonPipelineData::tryChangeTextureStatus_any
                          ((CommonPipelineData *)(in_x0 + 0x218),*(ulonglong *)(lVar10 + lVar14),3,4
                          );
        if ((uVar6 & 1) == 0) {
          logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",
                      *(undefined8 *)(lVar10 + lVar14));
          DAT_0210ee54 = DAT_0210ee54 + -1;
          DAT_0210ee5c = DAT_0210ee5c + 1;
          FUN_00f27700(*(undefined4 *)((long)(undefined8 *)(lVar10 + lVar14) + 0xc),in_x0 + 0x828);
          DAT_0210ee60 = *(undefined4 *)(in_x0 + 0x828);
          FUN_00f27700(0xffffffff,in_x0 + 0x82c);
          auVar20 = std::__ndk1::
                    deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                    ::erase(_Var3);
        }
        else {
          Mutex::enterCriticalSection();
          *(int *)(in_x0 + 0x2c8) = *(int *)(in_x0 + 0x2c8) + 1;
                    /* try { // try from 0096de94 to 0096de9b has its CatchHandler @ 0096e0c4 */
          Mutex::leaveCriticalSection();
          puVar1 = (ulonglong *)(lVar10 + lVar14);
          auVar20._8_8_ = puVar1;
          auVar20._0_8_ = plVar12;
          uVar9 = *puVar1;
          uVar19 = puVar1[2];
          uVar17 = puVar1[1];
          Mutex::enterCriticalSection();
                    /* try { // try from 0096dec8 to 0096df17 has its CatchHandler @ 0096e0cc */
          uVar4 = RegistryPipeline::isTextureRegistered_any
                            ((RegistryPipeline *)(in_x0 + 0x2d0),*puVar1);
          if ((uVar4 & 1) == 0) {
            DowngradePipeline::invalidateRequest_any
                      ((DowngradePipeline *)(in_x0 + 0x688),(ChangeRequest *)puVar1);
                    /* try { // try from 0096df1c to 0096df27 has its CatchHandler @ 0096e0bc */
            auVar20 = std::__ndk1::
                      deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                      ::erase(_Var3);
          }
          else {
            uVar11 = *(ulong *)(in_x0 + 0x310);
            uVar6 = *puVar1;
            uVar18 = NEON_cnt(uVar11,1);
            uVar15 = NEON_uaddlv(uVar18,1);
            if ((uint)CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar15) < 2) {
              uVar13 = uVar11 - 1 & uVar6;
            }
            else {
              uVar13 = uVar6;
              if (uVar11 <= uVar6) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar6 / uVar11;
                }
                uVar13 = uVar6 - uVar13 * uVar11;
              }
            }
            plVar12 = *(long **)(*(long *)(in_x0 + 0x308) + uVar13 * 8);
            do {
              do {
                plVar12 = (long *)*plVar12;
              } while (plVar12[1] != uVar6);
            } while (plVar12[2] != uVar6);
            uVar18 = *(undefined8 *)(plVar12[3] + 0x68);
                    /* try { // try from 0096df78 to 0096df9f has its CatchHandler @ 0096e0c8 */
            RenderDeviceManager::getInstance();
            plVar12 = (long *)RenderDeviceManager::getCurrentRenderDevice();
            local_f8 = (**(code **)(*plVar12 + 0x158))
                                 (plVar12,*(undefined8 *)(in_x0 + 0x848),uVar18,
                                  *(undefined4 *)(lVar10 + lVar14 + 8),0);
          }
                    /* try { // try from 0096dfa8 to 0096dfaf has its CatchHandler @ 0096e0c0 */
          Mutex::leaveCriticalSection();
          if ((uVar4 & 1) != 0) {
            if (local_f8 == 0) {
              DowngradePipeline::onStartReallocateFail_any
                        ((DowngradePipeline *)(in_x0 + 0x688),(ChangeRequest *)puVar1);
            }
            else {
              logFeedback("[DowngradePipeline] 1: start reallocate texture [id: %llu]",uVar9);
              lVar10 = *(long *)(in_x0 + 0x720);
              lVar14 = *(long *)(in_x0 + 0x728) - lVar10;
              uVar6 = 0;
              if (lVar14 != 0) {
                uVar6 = lVar14 * 0x10 - 1;
              }
              uVar11 = *(long *)(in_x0 + 0x740) + *(long *)(in_x0 + 0x738);
              if (uVar6 == uVar11) {
                std::__ndk1::
                deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                ::__add_back_capacity();
                lVar10 = *(long *)(in_x0 + 0x720);
                uVar11 = *(long *)(in_x0 + 0x738) + *(long *)(in_x0 + 0x740);
              }
              puVar1 = (ulonglong *)
                       (*(long *)(lVar10 + (uVar11 >> 4 & 0xffffffffffffff8)) +
                       (uVar11 & 0x7f) * 0x20);
              *puVar1 = uVar9;
              puVar1[2] = uVar19;
              puVar1[1] = uVar17;
              puVar1[3] = local_f8;
              *(long *)(in_x0 + 0x740) = *(long *)(in_x0 + 0x740) + 1;
            }
            auVar20 = std::__ndk1::
                      deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                      ::erase(_Var3);
            local_94 = 1;
          }
        }
        goto LAB_0096dd48;
      }
      lVar14 = lVar14 + 0x18;
    } while (lVar10 + (lVar14 - *plVar12) != 0xff0);
    auVar20._8_8_ = plVar12[1];
    auVar20._0_8_ = plVar12 + 1;
  } while( true );
}


