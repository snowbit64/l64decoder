// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processWorkerResults_async
// Entry Point: 0096cf24
// Size: 760 bytes
// Signature: undefined upgradePipeline_processWorkerResults_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processWorkerResults_async() */

void TextureStreamingManager::upgradePipeline_processWorkerResults_async(void)

{
  long lVar1;
  ulonglong uVar2;
  void *pvVar3;
  long in_x0;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulonglong *puVar11;
  ulonglong unaff_x27;
  undefined2 uVar12;
  undefined8 uVar13;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong local_90;
  long local_80;
  long lStack_78;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(in_x0 + 0x438);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    do {
      uVar10 = *(ulong *)(in_x0 + 0x430);
      puVar11 = (ulonglong *)
                ((long)(*(void ***)(in_x0 + 0x418))[uVar10 / 0x66] + (uVar10 % 0x66) * 0x28);
      uStack_a8 = puVar11[1];
      local_b0 = *puVar11;
      local_98 = (void *)puVar11[3];
      uStack_a0 = puVar11[2];
      local_90 = puVar11[4];
      *(long *)(in_x0 + 0x438) = lVar5 + -1;
      *(ulong *)(in_x0 + 0x430) = uVar10 + 1;
      if (0xcb < uVar10 + 1) {
        operator_delete(**(void ***)(in_x0 + 0x418));
        *(long *)(in_x0 + 0x418) = *(long *)(in_x0 + 0x418) + 8;
        *(long *)(in_x0 + 0x430) = *(long *)(in_x0 + 0x430) + -0x66;
      }
      uVar2 = local_b0;
      local_70 = 0;
      local_80 = in_x0 + 0x2d8;
      lStack_78 = in_x0 + 0x300;
      Mutex::enterCriticalSection();
                    /* try { // try from 0096d038 to 0096d07f has its CatchHandler @ 0096d22c */
      uVar10 = RegistryPipeline::isTextureRegistered_any((RegistryPipeline *)(in_x0 + 0x2d0),uVar2);
      if ((uVar10 & 1) == 0) {
        UpgradePipeline::invalidateResult_any
                  ((UpgradePipeline *)(in_x0 + 0x3d8),(WorkerResult *)&local_b0);
      }
      else {
        uVar6 = *(ulong *)(in_x0 + 0x310);
        uVar13 = NEON_cnt(uVar6,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if ((uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) < 2) {
          uVar9 = uVar6 - 1 & uVar2;
        }
        else {
          uVar9 = uVar2;
          if (uVar6 <= uVar2) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar2 / uVar6;
            }
            uVar9 = uVar2 - uVar9 * uVar6;
          }
        }
        plVar7 = *(long **)(*(long *)(in_x0 + 0x308) + uVar9 * 8);
        do {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7[1] != uVar2);
        } while (plVar7[2] != uVar2);
        uVar13 = *(undefined8 *)(plVar7[3] + 0x68);
                    /* try { // try from 0096d0c4 to 0096d0e7 has its CatchHandler @ 0096d228 */
        RenderDeviceManager::getInstance();
        plVar7 = (long *)RenderDeviceManager::getCurrentRenderDevice();
        unaff_x27 = (**(code **)(*plVar7 + 0x158))
                              (plVar7,*(undefined8 *)(in_x0 + 0x848),uVar13,uStack_a8 & 0xffffffff,
                               local_98);
      }
                    /* try { // try from 0096d0ec to 0096d0f3 has its CatchHandler @ 0096d224 */
      Mutex::leaveCriticalSection();
      pvVar3 = local_98;
      if ((uVar10 & 1) != 0) {
        Mutex::enterCriticalSection();
        if (pvVar3 == *(void **)(in_x0 + 0x680)) {
          *(undefined *)(in_x0 + 0x678) = 0;
                    /* try { // try from 0096d12c to 0096d133 has its CatchHandler @ 0096d21c */
          Mutex::leaveCriticalSection();
        }
        else {
                    /* try { // try from 0096d110 to 0096d117 has its CatchHandler @ 0096d220 */
          Mutex::leaveCriticalSection();
          if (pvVar3 != (void *)0x0) {
            operator_delete__(pvVar3);
          }
        }
        if (unaff_x27 == 0) {
          UpgradePipeline::onStartReallocateFail_any
                    ((UpgradePipeline *)(in_x0 + 0x3d8),(WorkerResult *)&local_b0);
        }
        else {
          logFeedback("[UpgradePipeline] 2ab: start reallocate texture [id: %llu]",uVar2);
          lVar8 = *(long *)(in_x0 + 0x4a0);
          lVar5 = *(long *)(in_x0 + 0x4a8) - lVar8;
          uVar10 = 0;
          if (lVar5 != 0) {
            uVar10 = (lVar5 >> 3) * 0x55 - 1;
          }
          uVar6 = *(long *)(in_x0 + 0x4c0) + *(long *)(in_x0 + 0x4b8);
          if (uVar10 == uVar6) {
            std::__ndk1::
            deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
            ::__add_back_capacity();
            lVar8 = *(long *)(in_x0 + 0x4a0);
            uVar6 = *(long *)(in_x0 + 0x4b8) + *(long *)(in_x0 + 0x4c0);
          }
          puVar11 = (ulonglong *)(*(long *)(lVar8 + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30);
          *puVar11 = uVar2;
          puVar11[2] = uStack_a0;
          puVar11[1] = uStack_a8;
          puVar11[4] = local_90;
          puVar11[3] = (ulonglong)local_98;
          puVar11[5] = unaff_x27;
          *(long *)(in_x0 + 0x4c0) = *(long *)(in_x0 + 0x4c0) + 1;
        }
      }
      lVar5 = *(long *)(in_x0 + 0x438);
    } while (lVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 != 0);
}


