// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processWorkerResults_main
// Entry Point: 00967318
// Size: 688 bytes
// Signature: undefined upgradePipeline_processWorkerResults_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processWorkerResults_main() */

void TextureStreamingManager::upgradePipeline_processWorkerResults_main(void)

{
  UpgradePipeline *this;
  long lVar1;
  ulonglong uVar2;
  void *pvVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  ulonglong uVar6;
  long *plVar7;
  long lVar8;
  ulonglong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong uStack_70;
  void *local_68;
  ulonglong uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  this = (UpgradePipeline *)(in_x0 + 0x3d8);
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = UpgradePipeline::tryPopRequest_main(this,(WorkerResult *)&local_80);
  if ((uVar5 & 1) != 0) {
    uVar5 = RegistryPipeline::isTextureRegistered_any((RegistryPipeline *)(in_x0 + 0x2d0),local_80);
    pvVar3 = local_68;
    if ((uVar5 & 1) == 0) {
      UpgradePipeline::invalidateResult_any(this,(WorkerResult *)&local_80);
    }
    else {
      uVar2 = CONCAT44(uStack_74,local_78);
      if (((DAT_02110160 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02110160), iVar4 != 0)) {
                    /* try { // try from 0096758c to 00967597 has its CatchHandler @ 009675c8 */
        TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
        __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&DAT_02110160);
      }
      Mutex::enterCriticalSection();
      uVar14 = NEON_cnt(DAT_0210fbb0,1);
      uVar13 = NEON_uaddlv(uVar14,1);
      if ((uint)CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) < 2) {
        uVar5 = DAT_0210fbb0 - 1 & local_80;
      }
      else {
        uVar5 = local_80;
        if (DAT_0210fbb0 <= local_80) {
          uVar5 = 0;
          if (DAT_0210fbb0 != 0) {
            uVar5 = local_80 / DAT_0210fbb0;
          }
          uVar5 = local_80 - uVar5 * DAT_0210fbb0;
        }
      }
      plVar7 = *(long **)(DAT_0210fba8 + uVar5 * 8);
      do {
        do {
          plVar7 = (long *)*plVar7;
        } while (plVar7[1] != local_80);
      } while (plVar7[2] != local_80);
      lVar11 = plVar7[3];
                    /* try { // try from 00967410 to 0096741b has its CatchHandler @ 009675e8 */
      Mutex::leaveCriticalSection();
      uVar12 = *(undefined8 *)(lVar11 + 0x68);
      RenderDeviceManager::getInstance();
      plVar7 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      uVar14 = (**(code **)(*plVar7 + 0x138))();
      uVar6 = (**(code **)(*plVar7 + 0x158))(plVar7,uVar14,uVar12,local_78,local_68);
      Mutex::enterCriticalSection();
      if (local_68 == *(void **)(in_x0 + 0x680)) {
        *(undefined *)(in_x0 + 0x678) = 0;
                    /* try { // try from 00967494 to 0096749b has its CatchHandler @ 009675e0 */
        Mutex::leaveCriticalSection();
      }
      else {
                    /* try { // try from 00967478 to 0096747f has its CatchHandler @ 009675e4 */
        Mutex::leaveCriticalSection();
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
        }
      }
      if (uVar6 == 0) {
        UpgradePipeline::onStartReallocateFail_any(this,(WorkerResult *)&local_80);
      }
      else {
        logFeedback("[UpgradePipeline] 2ab: start reallocate texture [id: %llu]",local_80);
        lVar8 = *(long *)(in_x0 + 0x528);
        lVar11 = *(long *)(in_x0 + 0x530) - lVar8;
        uVar5 = 0;
        if (lVar11 != 0) {
          uVar5 = (lVar11 >> 3) * 0x55 - 1;
        }
        uVar10 = *(long *)(in_x0 + 0x548) + *(long *)(in_x0 + 0x540);
        if (uVar5 == uVar10) {
          std::__ndk1::
          deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
          ::__add_back_capacity();
          lVar8 = *(long *)(in_x0 + 0x528);
          uVar10 = *(long *)(in_x0 + 0x540) + *(long *)(in_x0 + 0x548);
        }
        puVar9 = (ulonglong *)(*(long *)(lVar8 + (uVar10 / 0x55) * 8) + (uVar10 % 0x55) * 0x30);
        puVar9[2] = uStack_70;
        puVar9[1] = uVar2;
        *puVar9 = local_80;
        puVar9[4] = uStack_60;
        puVar9[3] = (ulonglong)pvVar3;
        puVar9[5] = uVar6;
        *(long *)(in_x0 + 0x548) = *(long *)(in_x0 + 0x548) + 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


