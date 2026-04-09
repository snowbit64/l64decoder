// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onReallocateSuccess_main
// Entry Point: 009689e4
// Size: 472 bytes
// Signature: undefined __thiscall onReallocateSuccess_main(DowngradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::onReallocateSuccess_main(TextureStreamingManager::DowngradePipeline::ReallocateRequest&)
    */

void __thiscall
TextureStreamingManager::DowngradePipeline::onReallocateSuccess_main
          (DowngradePipeline *this,ReallocateRequest *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Texture *this_00;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar8 = *(ulong *)param_1;
  logFeedback("[DowngradePipeline] 2: finish reallocate for texture [id: %llu]",uVar8);
  if (((DAT_02110160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02110160), iVar3 != 0)) {
                    /* try { // try from 00968b80 to 00968b8b has its CatchHandler @ 00968bbc */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  Mutex::enterCriticalSection();
  uVar10 = NEON_cnt(DAT_0210fbb0,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  if ((uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) < 2) {
    uVar7 = DAT_0210fbb0 - 1 & uVar8;
  }
  else {
    uVar7 = uVar8;
    if (DAT_0210fbb0 <= uVar8) {
      uVar7 = 0;
      if (DAT_0210fbb0 != 0) {
        uVar7 = uVar8 / DAT_0210fbb0;
      }
      uVar7 = uVar8 - uVar7 * DAT_0210fbb0;
    }
  }
  plVar5 = *(long **)(DAT_0210fba8 + uVar7 * 8);
  do {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5[1] != uVar8);
  } while (plVar5[2] != uVar8);
  this_00 = (Texture *)plVar5[3];
                    /* try { // try from 00968aac to 00968ab7 has its CatchHandler @ 00968bec */
  Mutex::leaveCriticalSection();
  Texture::setITextureObject(this_00,*(ITextureObject **)(param_1 + 0x18),true);
  Mutex::enterCriticalSection();
  lVar6 = *(long *)(this + 0x178);
  uVar8 = 0;
  if (*(long *)(this + 0x180) - lVar6 != 0) {
    uVar8 = (*(long *)(this + 0x180) - lVar6) * 0x10 - 1;
  }
  uVar7 = *(long *)(this + 0x198) + *(long *)(this + 400);
  if (uVar8 == uVar7) {
                    /* try { // try from 00968b04 to 00968b0b has its CatchHandler @ 00968bd4 */
    std::__ndk1::
    deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
    ::__add_back_capacity();
    lVar6 = *(long *)(this + 0x178);
    uVar7 = *(long *)(this + 400) + *(long *)(this + 0x198);
  }
  uVar12 = *(undefined8 *)param_1;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)
           (*(long *)(lVar6 + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar12;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  *(long *)(this + 0x198) = *(long *)(this + 0x198) + 1;
                    /* try { // try from 00968b40 to 00968b47 has its CatchHandler @ 00968be8 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


