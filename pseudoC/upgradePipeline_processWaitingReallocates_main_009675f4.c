// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processWaitingReallocates_main
// Entry Point: 009675f4
// Size: 548 bytes
// Signature: undefined upgradePipeline_processWaitingReallocates_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processWaitingReallocates_main() */

void TextureStreamingManager::upgradePipeline_processWaitingReallocates_main(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(in_x0 + 0x548) != 0) {
    uVar9 = *(ulong *)(in_x0 + 0x540) % 0x55;
    lVar5 = *(long *)(*(long *)(in_x0 + 0x528) + (*(ulong *)(in_x0 + 0x540) / 0x55) * 8);
    puVar4 = (ulong *)(lVar5 + uVar9 * 0x30);
    uVar7 = *puVar4;
    uVar2 = RegistryPipeline::isTextureRegistered_any((RegistryPipeline *)(in_x0 + 0x2d0),uVar7);
    if ((uVar2 & 1) == 0) {
      UpgradePipeline::invalidateReallocate_main
                ((UpgradePipeline *)(in_x0 + 0x3d8),(ReallocateRequest *)puVar4);
      uVar2 = *(long *)(in_x0 + 0x540) + 1;
      *(long *)(in_x0 + 0x548) = *(long *)(in_x0 + 0x548) + -1;
      *(ulong *)(in_x0 + 0x540) = uVar2;
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + uVar9 * 0x30 + 0x28);
      if (((DAT_02110160 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02110160), iVar1 != 0)) {
                    /* try { // try from 009677e0 to 009677eb has its CatchHandler @ 00967818 */
        TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
        __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&DAT_02110160);
      }
      Mutex::enterCriticalSection();
      uVar11 = NEON_cnt(DAT_0210fbb0,1);
      uVar10 = NEON_uaddlv(uVar11,1);
      if ((uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) < 2) {
        uVar2 = DAT_0210fbb0 - 1 & uVar7;
      }
      else {
        uVar2 = uVar7;
        if (DAT_0210fbb0 <= uVar7) {
          uVar2 = 0;
          if (DAT_0210fbb0 != 0) {
            uVar2 = uVar7 / DAT_0210fbb0;
          }
          uVar2 = uVar7 - uVar2 * DAT_0210fbb0;
        }
      }
      plVar3 = *(long **)(DAT_0210fba8 + uVar2 * 8);
      do {
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3[1] != uVar7);
      } while (plVar3[2] != uVar7);
      lVar5 = plVar3[3];
                    /* try { // try from 00967720 to 0096772b has its CatchHandler @ 00967830 */
      Mutex::leaveCriticalSection();
      uVar8 = *(undefined8 *)(lVar5 + 0x68);
      RenderDeviceManager::getInstance();
      plVar3 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      uVar11 = (**(code **)(*plVar3 + 0x138))();
      uVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,uVar11,uVar8,uVar6,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      UpgradePipeline::onRequestSuccess_main
                ((UpgradePipeline *)(in_x0 + 0x3d8),(ReallocateRequest *)puVar4);
      uVar2 = *(long *)(in_x0 + 0x540) + 1;
      *(long *)(in_x0 + 0x548) = *(long *)(in_x0 + 0x548) + -1;
      *(ulong *)(in_x0 + 0x540) = uVar2;
    }
    if (0xa9 < uVar2) {
      operator_delete(**(void ***)(in_x0 + 0x528));
      *(long *)(in_x0 + 0x528) = *(long *)(in_x0 + 0x528) + 8;
      *(long *)(in_x0 + 0x540) = *(long *)(in_x0 + 0x540) + -0x55;
    }
  }
  return;
}


