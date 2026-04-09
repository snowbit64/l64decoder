// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRequestSuccess_main
// Entry Point: 00967d9c
// Size: 520 bytes
// Signature: undefined __thiscall onRequestSuccess_main(UpgradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::onRequestSuccess_main(TextureStreamingManager::UpgradePipeline::ReallocateRequest&)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::onRequestSuccess_main
          (UpgradePipeline *this,ReallocateRequest *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Texture *this_00;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar9 = *(ulong *)param_1;
  if (((DAT_02110160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02110160), iVar2 != 0)) {
                    /* try { // try from 00967f68 to 00967f73 has its CatchHandler @ 00967fa4 */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  Mutex::enterCriticalSection();
  uVar12 = NEON_cnt(DAT_0210fbb0,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  if ((uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) < 2) {
    uVar7 = DAT_0210fbb0 - 1 & uVar9;
  }
  else {
    uVar7 = uVar9;
    if (DAT_0210fbb0 <= uVar9) {
      uVar7 = 0;
      if (DAT_0210fbb0 != 0) {
        uVar7 = uVar9 / DAT_0210fbb0;
      }
      uVar7 = uVar9 - uVar7 * DAT_0210fbb0;
    }
  }
  plVar4 = *(long **)(DAT_0210fba8 + uVar7 * 8);
  do {
    do {
      plVar4 = (long *)*plVar4;
    } while (plVar4[1] != uVar9);
  } while (plVar4[2] != uVar9);
  this_00 = (Texture *)plVar4[3];
                    /* try { // try from 00967e58 to 00967e63 has its CatchHandler @ 00967fd4 */
  Mutex::leaveCriticalSection();
  logFeedback("[UpgradePipeline] 3ab: finish reallocate of texture [id: %llu]",uVar9);
  Texture::setITextureObject(this_00,*(ITextureObject **)(param_1 + 0x28),true);
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar13 = *(ulong *)(param_1 + 8);
  Mutex::enterCriticalSection();
  lVar5 = *(long *)(this + 0x1a8);
  uVar7 = 0;
  if (*(long *)(this + 0x1b0) - lVar5 != 0) {
    uVar7 = (*(long *)(this + 0x1b0) - lVar5 >> 3) * 0xaa - 1;
  }
  uVar8 = *(long *)(this + 0x1c8) + *(long *)(this + 0x1c0);
  if (uVar7 == uVar8) {
                    /* try { // try from 00967ecc to 00967ed3 has its CatchHandler @ 00967fc0 */
    std::__ndk1::
    deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
    ::__add_back_capacity();
    lVar5 = *(long *)(this + 0x1a8);
    uVar8 = *(long *)(this + 0x1c0) + *(long *)(this + 0x1c8);
  }
  puVar6 = (ulong *)(*(long *)(lVar5 + (uVar8 / 0xaa) * 8) + (uVar8 % 0xaa) * 0x18);
  *puVar6 = uVar9;
  puVar6[1] = uVar13;
  puVar6[2] = uVar10;
  *(long *)(this + 0x1c8) = *(long *)(this + 0x1c8) + 1;
                    /* try { // try from 00967f28 to 00967f2b has its CatchHandler @ 00967fbc */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


