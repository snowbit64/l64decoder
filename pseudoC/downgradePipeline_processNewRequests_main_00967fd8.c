// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_processNewRequests_main
// Entry Point: 00967fd8
// Size: 512 bytes
// Signature: undefined downgradePipeline_processNewRequests_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_processNewRequests_main() */

void TextureStreamingManager::downgradePipeline_processNewRequests_main(void)

{
  DowngradePipeline *this;
  ulonglong *puVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  ulonglong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = (DowngradePipeline *)(in_x0 + 0x688);
  fVar12 = *(float *)(in_x0 + 0x1c4);
  if (*(char *)(in_x0 + 0x7c) != '\0') {
    fVar12 = 0.0;
  }
  uVar3 = DowngradePipeline::tryPopRequest_main(this,(ChangeRequest *)&local_70,fVar12);
  if ((uVar3 & 1) != 0) {
    uVar3 = RegistryPipeline::isTextureRegistered_any((RegistryPipeline *)(in_x0 + 0x2d0),local_70);
    if ((uVar3 & 1) == 0) {
      DowngradePipeline::invalidateRequest_any(this,(ChangeRequest *)&local_70);
    }
    else {
      Mutex::enterCriticalSection();
      uVar3 = *(ulong *)(in_x0 + 0x310);
      uVar11 = NEON_cnt(uVar3,1);
      uVar10 = NEON_uaddlv(uVar11,1);
      if ((uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) < 2) {
        uVar7 = uVar3 - 1 & local_70;
      }
      else {
        uVar7 = local_70;
        if (uVar3 <= local_70) {
          uVar7 = 0;
          if (uVar3 != 0) {
            uVar7 = local_70 / uVar3;
          }
          uVar7 = local_70 - uVar7 * uVar3;
        }
      }
      plVar5 = *(long **)(*(long *)(in_x0 + 0x308) + uVar7 * 8);
      do {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5[1] != local_70);
      } while (plVar5[2] != local_70);
      lVar9 = plVar5[3];
                    /* try { // try from 009680c8 to 009680cf has its CatchHandler @ 009681d8 */
      Mutex::leaveCriticalSection();
      uVar8 = *(undefined8 *)(lVar9 + 0x68);
      RenderDeviceManager::getInstance();
      plVar5 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      uVar11 = (**(code **)(*plVar5 + 0x138))();
      uVar4 = (**(code **)(*plVar5 + 0x158))(plVar5,uVar11,uVar8,local_68,0);
      if (uVar4 == 0) {
        DowngradePipeline::onStartReallocateFail_any(this,(ChangeRequest *)&local_70);
      }
      else {
        logFeedback("[DowngradePipeline] 1: start reallocate texture [id: %llu]",local_70);
        lVar6 = *(long *)(in_x0 + 0x7a8);
        lVar9 = *(long *)(in_x0 + 0x7b0) - lVar6;
        uVar3 = 0;
        if (lVar9 != 0) {
          uVar3 = lVar9 * 0x10 - 1;
        }
        uVar7 = *(long *)(in_x0 + 0x7c8) + *(long *)(in_x0 + 0x7c0);
        if (uVar3 == uVar7) {
          std::__ndk1::
          deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
          ::__add_back_capacity();
          lVar6 = *(long *)(in_x0 + 0x7a8);
          uVar7 = *(long *)(in_x0 + 0x7c0) + *(long *)(in_x0 + 0x7c8);
        }
        puVar1 = (ulonglong *)
                 (*(long *)(lVar6 + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20);
        *puVar1 = local_70;
        puVar1[2] = uStack_60;
        puVar1[1] = CONCAT44(uStack_64,local_68);
        puVar1[3] = uVar4;
        *(long *)(in_x0 + 0x7c8) = *(long *)(in_x0 + 0x7c8) + 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


