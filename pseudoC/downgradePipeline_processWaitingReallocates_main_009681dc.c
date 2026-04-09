// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_processWaitingReallocates_main
// Entry Point: 009681dc
// Size: 520 bytes
// Signature: undefined downgradePipeline_processWaitingReallocates_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_processWaitingReallocates_main() */

void TextureStreamingManager::downgradePipeline_processWaitingReallocates_main(void)

{
  ulong *puVar1;
  int iVar2;
  long in_x0;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(in_x0 + 0x7c8) != 0) {
    puVar1 = (ulong *)(*(long *)(*(long *)(in_x0 + 0x7a8) +
                                (*(ulong *)(in_x0 + 0x7c0) >> 4 & 0xffffffffffffff8)) +
                      (*(ulong *)(in_x0 + 0x7c0) & 0x7f) * 0x20);
    uVar6 = *puVar1;
    uVar3 = RegistryPipeline::isTextureRegistered_any((RegistryPipeline *)(in_x0 + 0x2d0),uVar6);
    if ((uVar3 & 1) == 0) {
      DowngradePipeline::invalidateReallocate_main
                ((DowngradePipeline *)(in_x0 + 0x688),(ReallocateRequest *)puVar1);
      uVar3 = *(long *)(in_x0 + 0x7c0) + 1;
      *(long *)(in_x0 + 0x7c8) = *(long *)(in_x0 + 0x7c8) + -1;
      *(ulong *)(in_x0 + 0x7c0) = uVar3;
    }
    else {
      uVar3 = puVar1[3];
      if (((DAT_02110160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02110160), iVar2 != 0)) {
                    /* try { // try from 009683ac to 009683b7 has its CatchHandler @ 009683e4 */
        TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
        __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&DAT_02110160);
      }
      Mutex::enterCriticalSection();
      uVar10 = NEON_cnt(DAT_0210fbb0,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      if ((uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) < 2) {
        uVar5 = DAT_0210fbb0 - 1 & uVar6;
      }
      else {
        uVar5 = uVar6;
        if (DAT_0210fbb0 <= uVar6) {
          uVar5 = 0;
          if (DAT_0210fbb0 != 0) {
            uVar5 = uVar6 / DAT_0210fbb0;
          }
          uVar5 = uVar6 - uVar5 * DAT_0210fbb0;
        }
      }
      plVar4 = *(long **)(DAT_0210fba8 + uVar5 * 8);
      do {
        do {
          plVar4 = (long *)*plVar4;
        } while (plVar4[1] != uVar6);
      } while (plVar4[2] != uVar6);
      lVar7 = plVar4[3];
                    /* try { // try from 009682ec to 009682f7 has its CatchHandler @ 009683fc */
      Mutex::leaveCriticalSection();
      uVar8 = *(undefined8 *)(lVar7 + 0x68);
      RenderDeviceManager::getInstance();
      plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      uVar10 = (**(code **)(*plVar4 + 0x138))();
      uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,uVar10,uVar8,uVar3,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      DowngradePipeline::onReallocateSuccess_main
                ((DowngradePipeline *)(in_x0 + 0x688),(ReallocateRequest *)puVar1);
      uVar3 = *(long *)(in_x0 + 0x7c0) + 1;
      *(long *)(in_x0 + 0x7c8) = *(long *)(in_x0 + 0x7c8) + -1;
      *(ulong *)(in_x0 + 0x7c0) = uVar3;
    }
    if (0xff < uVar3) {
      operator_delete(**(void ***)(in_x0 + 0x7a8));
      *(long *)(in_x0 + 0x7a8) = *(long *)(in_x0 + 0x7a8) + 8;
      *(long *)(in_x0 + 0x7c0) = *(long *)(in_x0 + 0x7c0) + -0x80;
    }
  }
  return;
}


