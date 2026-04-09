// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryCancelRequest_async
// Entry Point: 0096c458
// Size: 752 bytes
// Signature: undefined __thiscall tryCancelRequest_async(DowngradePipeline * this, ulonglong param_1)


/* TextureStreamingManager::DowngradePipeline::tryCancelRequest_async(unsigned long long) */

void __thiscall
TextureStreamingManager::DowngradePipeline::tryCancelRequest_async
          (DowngradePipeline *this,ulonglong param_1)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulonglong **ppuVar7;
  ulonglong *puVar8;
  long lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  logFeedback("[DowngradePipeline] 0: cancel request for texture [id: %llu]");
  uVar5 = CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,param_1,3,0);
  if (((DAT_02110160 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02110160), iVar4 != 0)) {
                    /* try { // try from 0096c70c to 0096c717 has its CatchHandler @ 0096c748 */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  if (DAT_021100e0 == '\0') {
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      goto LAB_0096c654;
    }
    Mutex::enterCriticalSection();
    uVar5 = *(ulong *)(this + 0x80);
    ppuVar7 = (ulonglong **)(*(long *)(this + 0x68) + (uVar5 / 0xaa) * 8);
    puVar11 = *ppuVar7;
    puVar10 = (ulonglong *)
              (*(long *)(*(long *)(this + 0x68) + ((*(long *)(this + 0x88) + uVar5) / 0xaa) * 8) +
              ((*(long *)(this + 0x88) + uVar5) % 0xaa) * 0x18);
    puVar8 = puVar11 + (uVar5 % 0xaa) * 3;
    puVar1 = puVar11 + (uVar5 % 0xaa) * 3;
    while ((puVar1 != puVar10 && (puVar8 = puVar1, *puVar1 != param_1))) {
      puVar1 = puVar1 + 3;
      puVar8 = puVar10;
      if ((long)puVar1 - (long)puVar11 == 0xff0) {
        ppuVar7 = ppuVar7 + 1;
        puVar11 = *ppuVar7;
        puVar1 = puVar11;
      }
    }
    uVar12 = *puVar8;
    uVar2 = *(undefined4 *)((long)puVar8 + 0xc);
                    /* try { // try from 0096c690 to 0096c6a7 has its CatchHandler @ 0096c764 */
    std::__ndk1::
    deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
    ::erase((int)this + 0x60);
    logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",uVar12);
    DAT_0210ee54 = DAT_0210ee54 + -1;
    DAT_0210ee5c = DAT_0210ee5c + 1;
    FUN_00f27700(uVar2,this + 0x1a0);
    DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
    FUN_00f27700(0xffffffff,this + 0x1a4);
                    /* try { // try from 0096c6f4 to 0096c6f7 has its CatchHandler @ 0096c760 */
    Mutex::leaveCriticalSection();
  }
  else {
    uVar5 = *(ulong *)(this + 0x28);
    ppuVar7 = (ulonglong **)(*(long *)(this + 0x10) + (uVar5 / 0xaa) * 8);
    puVar11 = *ppuVar7;
    puVar10 = (ulonglong *)
              (*(long *)(*(long *)(this + 0x10) + ((*(long *)(this + 0x30) + uVar5) / 0xaa) * 8) +
              ((*(long *)(this + 0x30) + uVar5) % 0xaa) * 0x18);
    puVar8 = puVar11 + (uVar5 % 0xaa) * 3;
    puVar1 = puVar11 + (uVar5 % 0xaa) * 3;
    while ((puVar1 != puVar10 && (puVar8 = puVar1, *puVar1 != param_1))) {
      puVar1 = puVar1 + 3;
      puVar8 = puVar10;
      if ((long)puVar1 - (long)puVar11 == 0xff0) {
        ppuVar7 = ppuVar7 + 1;
        puVar11 = *ppuVar7;
        puVar1 = puVar11;
      }
    }
    uVar12 = *puVar8;
    uVar2 = *(undefined4 *)((long)puVar8 + 0xc);
    std::__ndk1::
    deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
    ::erase((int)this + 8);
    logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",uVar12);
    DAT_0210ee54 = DAT_0210ee54 + -1;
    DAT_0210ee5c = DAT_0210ee5c + 1;
    FUN_00f27700(uVar2,this + 0x1a0);
    DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
    FUN_00f27700(0xffffffff,this + 0x1a4);
  }
  uVar6 = 1;
LAB_0096c654:
  if (*(long *)(lVar3 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


