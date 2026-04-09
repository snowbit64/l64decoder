// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processNewReallocateRequests_async
// Entry Point: 009693f4
// Size: 744 bytes
// Signature: undefined processNewReallocateRequests_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processNewReallocateRequests_async() */

void TextureStreamingManager::processNewReallocateRequests_async(void)

{
  ulong uVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ICommandList *local_88;
  long local_80;
  SmallVector<ICommandList*,5u> *local_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(ulong *)(in_x0 + 0x4c0) | *(ulong *)(in_x0 + 0x740)) != 0) {
    if (*(char *)(in_x0 + 0x841) != '\0') {
      local_88 = (ICommandList *)(**(code **)(**(long **)(in_x0 + 0x848) + 0x20))();
      local_80 = in_x0 + 0x850;
      local_70 = 0;
      local_78 = (SmallVector<ICommandList*,5u> *)(in_x0 + 0x878);
      Mutex::enterCriticalSection();
                    /* try { // try from 00969468 to 00969473 has its CatchHandler @ 009696e0 */
      SmallVector<ICommandList*,5u>::push_back
                ((SmallVector<ICommandList*,5u> *)(in_x0 + 0x878),&local_88);
                    /* try { // try from 00969474 to 0096947b has its CatchHandler @ 009696dc */
      Mutex::leaveCriticalSection();
    }
    local_80 = in_x0 + 0x4c8;
    local_78 = (SmallVector<ICommandList*,5u> *)(in_x0 + 0x4f0);
    local_70 = 0;
    Mutex::enterCriticalSection();
    if (*(long *)(in_x0 + 0x4c0) != 0) {
      uVar8 = *(ulong *)(in_x0 + 0x4b8);
      do {
        lVar3 = *(long *)(in_x0 + 0x4f8);
        lVar5 = *(long *)(in_x0 + 0x500) - lVar3;
        lVar9 = *(long *)(*(long *)(in_x0 + 0x4a0) + (uVar8 / 0x55) * 8);
        uVar1 = 0;
        if (lVar5 != 0) {
          uVar1 = (lVar5 >> 3) * 0x55 - 1;
        }
        uVar6 = *(long *)(in_x0 + 0x518) + *(long *)(in_x0 + 0x510);
        if (uVar1 == uVar6) {
                    /* try { // try from 009694f8 to 009694ff has its CatchHandler @ 00969710 */
          std::__ndk1::
          deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
          ::__add_back_capacity();
          lVar3 = *(long *)(in_x0 + 0x4f8);
          uVar6 = *(long *)(in_x0 + 0x510) + *(long *)(in_x0 + 0x518);
        }
        puVar7 = (undefined8 *)(lVar9 + (uVar8 % 0x55) * 0x30);
        uVar12 = puVar7[2];
        uVar11 = puVar7[5];
        uVar10 = puVar7[4];
        puVar4 = (undefined8 *)(*(long *)(lVar3 + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30);
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar4[3] = puVar7[3];
        puVar4[2] = uVar12;
        puVar4[5] = uVar11;
        puVar4[4] = uVar10;
        puVar4[1] = uVar14;
        *puVar4 = uVar13;
        lVar5 = *(long *)(in_x0 + 0x4c0) + -1;
        uVar8 = *(long *)(in_x0 + 0x4b8) + 1;
        *(long *)(in_x0 + 0x518) = *(long *)(in_x0 + 0x518) + 1;
        *(long *)(in_x0 + 0x4c0) = lVar5;
        *(ulong *)(in_x0 + 0x4b8) = uVar8;
        if (0xa9 < uVar8) {
          operator_delete(**(void ***)(in_x0 + 0x4a0));
          lVar5 = *(long *)(in_x0 + 0x4c0);
          uVar8 = *(long *)(in_x0 + 0x4b8) - 0x55;
          *(long *)(in_x0 + 0x4a0) = *(long *)(in_x0 + 0x4a0) + 8;
          *(ulong *)(in_x0 + 0x4b8) = uVar8;
        }
      } while (lVar5 != 0);
    }
                    /* try { // try from 0096959c to 009695a3 has its CatchHandler @ 009696f8 */
    Mutex::leaveCriticalSection();
    local_80 = in_x0 + 0x748;
    local_78 = (SmallVector<ICommandList*,5u> *)(in_x0 + 0x770);
    local_70 = 0;
    Mutex::enterCriticalSection();
    if (*(long *)(in_x0 + 0x740) != 0) {
      uVar8 = *(ulong *)(in_x0 + 0x738);
      do {
        lVar3 = *(long *)(in_x0 + 0x778);
        lVar5 = *(long *)(in_x0 + 0x780) - lVar3;
        lVar9 = *(long *)(*(long *)(in_x0 + 0x720) + (uVar8 >> 4 & 0xffffffffffffff8));
        uVar1 = 0;
        if (lVar5 != 0) {
          uVar1 = lVar5 * 0x10 - 1;
        }
        uVar6 = *(long *)(in_x0 + 0x798) + *(long *)(in_x0 + 0x790);
        if (uVar1 == uVar6) {
                    /* try { // try from 0096960c to 00969613 has its CatchHandler @ 009696fc */
          std::__ndk1::
          deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
          ::__add_back_capacity();
          lVar3 = *(long *)(in_x0 + 0x778);
          uVar6 = *(long *)(in_x0 + 0x790) + *(long *)(in_x0 + 0x798);
        }
        puVar4 = (undefined8 *)(lVar9 + (uVar8 & 0x7f) * 0x20);
        uVar12 = *puVar4;
        uVar11 = puVar4[3];
        uVar10 = puVar4[2];
        puVar7 = (undefined8 *)
                 (*(long *)(lVar3 + (uVar6 >> 4 & 0xffffffffffffff8)) + (uVar6 & 0x7f) * 0x20);
        puVar7[1] = puVar4[1];
        *puVar7 = uVar12;
        puVar7[3] = uVar11;
        puVar7[2] = uVar10;
        lVar5 = *(long *)(in_x0 + 0x740) + -1;
        uVar8 = *(long *)(in_x0 + 0x738) + 1;
        *(long *)(in_x0 + 0x798) = *(long *)(in_x0 + 0x798) + 1;
        *(long *)(in_x0 + 0x740) = lVar5;
        *(ulong *)(in_x0 + 0x738) = uVar8;
        if (0xff < uVar8) {
          operator_delete(**(void ***)(in_x0 + 0x720));
          lVar5 = *(long *)(in_x0 + 0x740);
          uVar8 = *(long *)(in_x0 + 0x738) - 0x80;
          *(long *)(in_x0 + 0x720) = *(long *)(in_x0 + 0x720) + 8;
          *(ulong *)(in_x0 + 0x738) = uVar8;
        }
      } while (lVar5 != 0);
    }
                    /* try { // try from 009696a0 to 009696a7 has its CatchHandler @ 009696f4 */
    Mutex::leaveCriticalSection();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


