// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitQueue
// Entry Point: 00acc82c
// Size: 1484 bytes
// Signature: undefined __thiscall submitQueue(VulkanCommandBuffer * this, QUEUE_TYPE param_1, bool param_2, bool param_3)


/* VulkanCommandBuffer::submitQueue(VulkanUtil::QUEUE_TYPE, bool, bool) */

void __thiscall
VulkanCommandBuffer::submitQueue
          (VulkanCommandBuffer *this,QUEUE_TYPE param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  __wrap_iter _Var12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  ulong uVar16;
  long lVar17;
  void **ppvVar18;
  undefined8 uVar19;
  undefined4 local_cc;
  undefined4 auStack_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  undefined4 *puStack_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar16 = (ulong)param_1;
  lVar13 = *(long *)(this + (ulong)param_1 * 8 + 0x550);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  if (param_1 == 1) {
    _Var12 = 0;
    lVar17 = 2;
    uVar19 = *(undefined8 *)(*(long *)(this + 0x98) + 0x450);
  }
  else if (param_1 == 0) {
    if (this[0x460] == (VulkanCommandBuffer)0x0) {
      _Var12 = 0;
    }
    else {
                    /* try { // try from 00acc894 to 00acc89b has its CatchHandler @ 00acce18 */
      endRenderPass();
      _Var12 = (__wrap_iter)local_78;
    }
                    /* try { // try from 00acc8d4 to 00acc8df has its CatchHandler @ 00acce10 */
    std::__ndk1::vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>>::
    insert<std::__ndk1::__wrap_iter<VkCommandBuffer_T**>>
              ((vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>> *)&local_80,
               _Var12,(__wrap_iter)*(undefined8 *)(this + 0x4e8),
               (__wrap_iter)*(undefined8 *)(this + 0x4f0));
    if (*(long *)(this + 0x4c0) != 0) {
                    /* try { // try from 00acc8f4 to 00acc95b has its CatchHandler @ 00acce18 */
      (*vkEndCommandBuffer)();
      puVar11 = local_80;
      if (local_78 == local_70) {
        uVar14 = (long)local_78 - (long)local_80;
        uVar1 = ((long)uVar14 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar14 >> 2)) {
          uVar1 = (long)uVar14 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00accddc to 00accde7 has its CatchHandler @ 00acce18 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          puVar8 = (undefined8 *)operator_new(uVar1 << 3);
        }
        puVar9 = puVar8 + ((long)uVar14 >> 3);
        *puVar9 = *(undefined8 *)(this + 0x4c0);
        if (0 < (long)uVar14) {
          memcpy(puVar8,puVar11,uVar14);
        }
        local_80 = puVar8;
        local_78 = puVar9 + 1;
        local_70 = puVar8 + uVar1;
        if (puVar11 != (undefined8 *)0x0) {
          operator_delete(puVar11);
        }
      }
      else {
        *local_78 = *(undefined8 *)(this + 0x4c0);
        local_78 = local_78 + 1;
      }
    }
    *(undefined8 *)(this + 0x4c0) = 0;
    lVar17 = 0;
    _Var12 = (__wrap_iter)local_78;
    *(undefined8 *)(this + 0x4f0) = *(undefined8 *)(this + 0x4e8);
    uVar19 = *(undefined8 *)(*(long *)(this + 0x98) + 0x440);
  }
  else {
    _Var12 = 0;
    uVar19 = 0;
    lVar17 = 0;
  }
                    /* try { // try from 00acc9d0 to 00acc9d7 has its CatchHandler @ 00acce14 */
  std::__ndk1::vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>>::
  insert<std::__ndk1::__wrap_iter<VkCommandBuffer_T**>>
            ((vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>> *)&local_80,
             _Var12,(__wrap_iter)*(undefined8 *)(this + lVar17 * 0x18 + 0x4d0),
             (__wrap_iter)*(undefined8 *)(this + lVar17 * 0x18 + 0x4d8));
  puVar11 = (undefined8 *)(this + lVar17 * 8 + 0x4b8);
  if (*(long *)(this + lVar17 * 8 + 0x4b8) != 0) {
                    /* try { // try from 00acc9fc to 00acca6f has its CatchHandler @ 00acce18 */
    (*vkEndCommandBuffer)();
    puVar8 = local_80;
    if (local_78 == local_70) {
      uVar14 = (long)local_78 - (long)local_80;
      uVar1 = ((long)uVar14 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00accdb8 to 00accdd3 has its CatchHandler @ 00acce18 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar14 >> 2)) {
        uVar1 = (long)uVar14 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        puVar9 = (undefined8 *)operator_new(uVar1 << 3);
      }
      puVar2 = puVar9 + ((long)uVar14 >> 3);
      *puVar2 = *puVar11;
      if (0 < (long)uVar14) {
        memcpy(puVar9,puVar8,uVar14);
      }
      local_80 = puVar9;
      local_78 = puVar2 + 1;
      local_70 = puVar9 + uVar1;
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(puVar8);
      }
    }
    else {
      *local_78 = *puVar11;
      local_78 = local_78 + 1;
    }
  }
  *puVar11 = 0;
  *(undefined8 *)(this + lVar17 * 0x18 + 0x4d8) = *(undefined8 *)(this + lVar17 * 0x18 + 0x4d0);
  if ((local_78 != local_80) || (puVar11 = local_78, param_2)) {
    ppvVar18 = *(void ***)(this + uVar16 * 8 + 0x518);
    if (ppvVar18 == (void **)0x0) {
                    /* try { // try from 00accb14 to 00accb1b has its CatchHandler @ 00acce0c */
      ppvVar18 = (void **)VulkanResourceAllocator::getFence
                                    (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                                     param_1);
      *(void ***)(this + uVar16 * 8 + 0x518) = ppvVar18;
    }
    local_b0 = 0;
    local_b8 = 0;
    *(undefined8 *)(this + uVar16 * 8 + 0x518) = 0;
    local_c0 = 0;
    local_cc = 0;
    auStack_c8[0] = 4;
    if (param_2) {
      puStack_a8 = (undefined4 *)0x0;
      local_88 = 0;
      if (*(long *)(this + 0xa80) != 0) {
        local_b8 = 1;
        puStack_a8 = &local_cc;
        local_b0 = *(long *)(this + 0x5f0) + 8;
        local_88 = *(long *)(this + 0x5f0) + 0x18;
        local_cc = 0x400;
        this[0xa5a] = (VulkanCommandBuffer)0x1;
      }
    }
    else {
      puStack_a8 = (undefined4 *)0x0;
      local_88 = 0;
    }
    local_98 = local_80;
    local_a0 = (undefined4)((ulong)((long)local_78 - (long)local_80) >> 3);
                    /* try { // try from 00accbb0 to 00accc73 has its CatchHandler @ 00acce1c */
    local_90 = local_b8;
    uVar6 = (*vkQueueSubmit)(uVar19,1,auStack_c8,ppvVar18[3]);
    if (uVar6 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00accd80 to 00accd8b has its CatchHandler @ 00accdf8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: %u\n",
                         (ulong)uVar6);
    }
    uVar4 = *(undefined4 *)(*(long *)(this + 0x98) + 0x3b4);
    *(bool *)(ppvVar18 + 5) = param_2;
    *(undefined4 *)((long)ppvVar18 + 0x24) = uVar4;
    if (!param_3) {
      if (lVar13 != 0) {
        plVar3 = (long *)ppvVar18[1];
        if (plVar3 == (long *)ppvVar18[2]) {
          pvVar10 = *ppvVar18;
          uVar14 = (long)plVar3 - (long)pvVar10;
          uVar1 = ((long)uVar14 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00accdd4 to 00accddb has its CatchHandler @ 00acce1c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar14 >> 2)) {
            uVar1 = (long)uVar14 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar15 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00accde8 to 00accdf3 has its CatchHandler @ 00acce1c */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar15 = operator_new(uVar1 << 3);
          }
          plVar3 = (long *)((long)pvVar15 + ((long)uVar14 >> 3) * 8);
          *plVar3 = lVar13;
          if (0 < (long)uVar14) {
            memcpy(pvVar15,pvVar10,uVar14);
          }
          *ppvVar18 = pvVar15;
          ppvVar18[1] = plVar3 + 1;
          ppvVar18[2] = (void *)((long)pvVar15 + uVar1 * 8);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        else {
          *plVar3 = lVar13;
          ppvVar18[1] = plVar3 + 1;
        }
      }
                    /* try { // try from 00acccbc to 00accce3 has its CatchHandler @ 00acce1c */
      Mutex::enterCriticalSection();
      uVar19 = VulkanResourceAllocator::getFenceStatus();
      *(undefined8 *)(this + (ulong)param_1 * 8 + 0x550) = uVar19;
      Mutex::leaveCriticalSection();
    }
    do {
      pvVar15 = *(void **)(this + uVar16 * 0x28 + 0x28);
      ppvVar18[6] = pvVar15;
      pvVar10 = (void *)FUN_00f275d0(pvVar15,ppvVar18,this + uVar16 * 0x28 + 0x28);
    } while (pvVar15 != pvVar10);
    FUN_00f27700(1,this + uVar16 * 0x28 + 0x30);
                    /* try { // try from 00accd28 to 00accd2b has its CatchHandler @ 00acce1c */
    Semaphore::post();
    puVar11 = local_80;
  }
  if (puVar11 != (undefined8 *)0x0) {
    local_78 = puVar11;
    operator_delete(puVar11);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


