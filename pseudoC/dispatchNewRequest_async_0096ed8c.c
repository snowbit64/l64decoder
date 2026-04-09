// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dispatchNewRequest_async
// Entry Point: 0096ed8c
// Size: 480 bytes
// Signature: undefined __thiscall dispatchNewRequest_async(DowngradePipeline * this, ChangeRequest param_1)


/* TextureStreamingManager::DowngradePipeline::dispatchNewRequest_async(TextureStreamingManager::ChangeRequest)
    */

void __thiscall
TextureStreamingManager::DowngradePipeline::dispatchNewRequest_async
          (DowngradePipeline *this,undefined8 *param_2)

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
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (((DAT_02110160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02110160), iVar3 != 0)) {
                    /* try { // try from 0096ef30 to 0096ef3b has its CatchHandler @ 0096ef6c */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  if (DAT_021100e0 == '\0') {
    Mutex::enterCriticalSection();
    lVar5 = *(long *)(this + 0x68);
    uVar1 = 0;
    if (*(long *)(this + 0x70) - lVar5 != 0) {
      uVar1 = (*(long *)(this + 0x70) - lVar5 >> 3) * 0xaa - 1;
    }
    uVar7 = *(long *)(this + 0x88) + *(long *)(this + 0x80);
    if (uVar1 == uVar7) {
                    /* try { // try from 0096ee9c to 0096eea3 has its CatchHandler @ 0096ef84 */
      std::__ndk1::
      deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
      ::__add_back_capacity();
      lVar5 = *(long *)(this + 0x68);
      uVar7 = *(long *)(this + 0x80) + *(long *)(this + 0x88);
    }
    uVar9 = param_2[1];
    uVar8 = *param_2;
    puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
    puVar6[2] = param_2[2];
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    *(long *)(this + 0x88) = *(long *)(this + 0x88) + 1;
                    /* try { // try from 0096eef0 to 0096eef7 has its CatchHandler @ 0096ef98 */
    Mutex::leaveCriticalSection();
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar1 = 0;
    if (*(long *)(this + 0x18) - lVar5 != 0) {
      uVar1 = (*(long *)(this + 0x18) - lVar5 >> 3) * 0xaa - 1;
    }
    uVar7 = *(long *)(this + 0x30) + *(long *)(this + 0x28);
    if (uVar1 == uVar7) {
      std::__ndk1::
      deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
      ::__add_back_capacity();
      lVar5 = *(long *)(this + 0x10);
      uVar7 = *(long *)(this + 0x28) + *(long *)(this + 0x30);
    }
    uVar9 = param_2[1];
    uVar8 = *param_2;
    puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
    puVar6[2] = param_2[2];
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


