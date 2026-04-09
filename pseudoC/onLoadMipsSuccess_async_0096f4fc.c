// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onLoadMipsSuccess_async
// Entry Point: 0096f4fc
// Size: 540 bytes
// Signature: undefined __thiscall onLoadMipsSuccess_async(UpgradePipeline * this, WorkerResult * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextureStreamingManager::UpgradePipeline::onLoadMipsSuccess_async(TextureStreamingManager::UpgradePipeline::WorkerResult
   const&) */

void __thiscall
TextureStreamingManager::UpgradePipeline::onLoadMipsSuccess_async
          (UpgradePipeline *this,WorkerResult *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (((DAT_02110160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02110160), iVar3 != 0)) {
                    /* try { // try from 0096f6dc to 0096f6e7 has its CatchHandler @ 0096f718 */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  if (DAT_021100e0 == '\0') {
    Mutex::enterCriticalSection();
    lVar5 = *(long *)(this + 0x98);
    uVar1 = 0;
    if (*(long *)(this + 0xa0) - lVar5 != 0) {
      uVar1 = (*(long *)(this + 0xa0) - lVar5 >> 3) * 0x66 - 1;
    }
    uVar7 = *(long *)(this + 0xb8) + *(long *)(this + 0xb0);
    if (uVar1 == uVar7) {
                    /* try { // try from 0096f614 to 0096f61b has its CatchHandler @ 0096f730 */
      std::__ndk1::
      deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
      ::__add_back_capacity();
      lVar5 = *(long *)(this + 0x98);
      uVar7 = *(long *)(this + 0xb0) + *(long *)(this + 0xb8);
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
    puVar6[4] = *(undefined8 *)(param_1 + 0x20);
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    puVar6[3] = uVar9;
    puVar6[2] = uVar8;
    *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 1;
                    /* try { // try from 0096f670 to 0096f677 has its CatchHandler @ 0096f744 */
    Mutex::leaveCriticalSection();
  }
  else {
    lVar5 = *(long *)(this + 0x40);
    uVar1 = 0;
    if (*(long *)(this + 0x48) - lVar5 != 0) {
      uVar1 = (*(long *)(this + 0x48) - lVar5 >> 3) * 0x66 - 1;
    }
    uVar7 = *(long *)(this + 0x60) + *(long *)(this + 0x58);
    if (uVar1 == uVar7) {
      std::__ndk1::
      deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
      ::__add_back_capacity();
      lVar5 = *(long *)(this + 0x40);
      uVar7 = *(long *)(this + 0x58) + *(long *)(this + 0x60);
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28);
    puVar6[4] = *(undefined8 *)(param_1 + 0x20);
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    puVar6[3] = uVar9;
    puVar6[2] = uVar8;
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
  }
  _DAT_0210ee40 = CONCAT44((int)((ulong)_DAT_0210ee40 >> 0x20) + 1,(int)_DAT_0210ee40 + -1);
  logFeedback("[UpgradePipeline] 1ab: finish mip(s) load [id: %llu]",*(undefined8 *)param_1);
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


