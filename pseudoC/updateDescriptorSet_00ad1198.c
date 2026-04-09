// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDescriptorSet
// Entry Point: 00ad1198
// Size: 1292 bytes
// Signature: undefined __thiscall updateDescriptorSet(VulkanCommandBuffer * this, PIPELINE_TYPE param_1, uint * param_2, uint param_3)


/* VulkanCommandBuffer::updateDescriptorSet(VulkanCommandBuffer::PIPELINE_TYPE, unsigned int const*,
   unsigned int) */

void __thiscall
VulkanCommandBuffer::updateDescriptorSet
          (VulkanCommandBuffer *this,PIPELINE_TYPE param_1,uint *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  Logger *this_00;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  void *__src;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  undefined4 local_8a0 [2];
  undefined8 local_898 [2];
  uint local_888;
  undefined8 local_884;
  undefined4 local_87c;
  long local_878 [251];
  long local_a0 [6];
  
  lVar5 = tpidr_el0;
  uVar20 = (ulong)param_3;
  local_a0[4] = *(long *)(lVar5 + 0x28);
  uVar19 = (ulong)param_1;
  if (param_3 != 0) {
    puVar10 = (undefined8 *)(this + 0x928);
    puVar24 = param_2;
    do {
      uVar20 = uVar20 - 1;
      *puVar10 = *(undefined8 *)(this + (ulong)*puVar24 * 0x40 + uVar19 * 0x100 + 0x698);
      puVar10 = puVar10 + 1;
      puVar24 = puVar24 + 1;
    } while (uVar20 != 0);
  }
  bVar7 = true;
  while( true ) {
    lVar13 = *(long *)(this + 0x568);
    if (lVar13 == 0) {
      lVar13 = VulkanResourceAllocator::getDescriptorPool();
      *(long *)(this + 0x568) = lVar13;
      FUN_00f27700(1,lVar13 + 8);
      lVar13 = *(long *)(this + 0x568);
    }
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    *(uint *)(this + 0x918) = param_3;
    *(undefined8 *)(this + 0x910) = uVar9;
    iVar8 = (*vkAllocateDescriptorSets)
                      (*(undefined8 *)(*(long *)(this + 0x98) + 0x18),this + 0x900,local_a0);
    if ((iVar8 != -0xc) && (iVar8 != -0x3b9bd788)) break;
    Mutex::enterCriticalSection();
    puVar10 = *(undefined8 **)(this + 0x578);
    if (puVar10 == *(undefined8 **)(this + 0x580)) {
      __src = *(void **)(this + 0x570);
      uVar22 = (long)puVar10 - (long)__src;
      uVar20 = ((long)uVar22 >> 3) + 1;
      if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar20 <= (ulong)((long)uVar22 >> 2)) {
        uVar20 = (long)uVar22 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        uVar20 = 0x1fffffffffffffff;
      }
      if (uVar20 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar20 << 3);
      }
      puVar10 = (undefined8 *)((long)__dest + ((long)uVar22 >> 3) * 8);
      *puVar10 = *(undefined8 *)(this + 0x568);
      if (0 < (long)uVar22) {
        memcpy(__dest,__src,uVar22);
      }
      *(void **)(this + 0x570) = __dest;
      *(undefined8 **)(this + 0x578) = puVar10 + 1;
      *(void **)(this + 0x580) = (void *)((long)__dest + uVar20 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar10 = *(undefined8 *)(this + 0x568);
      *(undefined8 **)(this + 0x578) = puVar10 + 1;
    }
    lVar13 = VulkanResourceAllocator::getDescriptorPool();
    *(long *)(this + 0x568) = lVar13;
    FUN_00f27700(1,lVar13 + 8);
    Mutex::leaveCriticalSection();
    if (((iVar8 != -0xc) && (iVar8 != -0x3b9bd788)) || (bVar6 = !bVar7, bVar7 = false, bVar6))
    break;
  }
  uVar22 = (ulong)param_3;
  uVar20 = uVar22;
  if (param_3 == 0) goto LAB_00ad162c;
  if (param_3 == 1) {
    uVar11 = 0;
LAB_00ad1410:
    lVar13 = uVar22 - uVar11;
    puVar24 = param_2 + uVar11;
    plVar16 = local_a0 + uVar11;
    do {
      lVar13 = lVar13 + -1;
      *(long *)(this + (ulong)*puVar24 * 8 + uVar19 * 0x20 + 0x878) = *plVar16;
      puVar24 = puVar24 + 1;
      plVar16 = plVar16 + 1;
    } while (lVar13 != 0);
  }
  else {
    uVar11 = uVar22 & 0xfffffffe;
    plVar16 = local_a0 + 1;
    puVar24 = param_2 + 1;
    uVar23 = uVar11;
    do {
      puVar18 = puVar24 + -1;
      uVar4 = *puVar24;
      plVar1 = plVar16 + -1;
      lVar13 = *plVar16;
      puVar24 = puVar24 + 2;
      plVar16 = plVar16 + 2;
      uVar23 = uVar23 - 2;
      lVar14 = uVar19 * 0x20 + 0x878;
      *(long *)(this + (ulong)*puVar18 * 8 + lVar14) = *plVar1;
      *(long *)(this + (ulong)uVar4 * 8 + lVar14) = lVar13;
    } while (uVar23 != 0);
    if (uVar11 != uVar22) goto LAB_00ad1410;
  }
  if (param_3 != 0) {
    uVar23 = 0;
    uVar20 = 0;
    do {
      uVar4 = param_2[uVar23];
      lVar13 = (ulong)uVar4 * 0x40 + uVar19 * 0x100;
      uVar11 = (ulong)*(uint *)(this + lVar13 + 0x6b0);
      if (*(uint *)(this + lVar13 + 0x6b0) == 0) {
        uVar21 = 0;
      }
      else {
        lVar14 = *(long *)(this + lVar13 + 0x688);
        lVar17 = *(long *)(this + lVar13 + 0x680);
        uVar21 = 0;
        puVar24 = *(uint **)(this + lVar13 + 0x6a8);
        do {
          uVar2 = *puVar24;
          uVar12 = (ulong)uVar2;
          if ((uVar2 < (uint)((int)((ulong)(lVar14 - lVar17) >> 3) * -0x33333333)) &&
             (lVar15 = *(long *)(this + lVar13 + 0x680),
             *(char *)(lVar15 + uVar12 * 0x28 + 0x24) != '\0')) {
            if ((uint)uVar20 < 0x20) {
              puVar18 = (uint *)(lVar15 + uVar12 * 0x28);
              uVar9 = *(undefined8 *)(this + (ulong)uVar4 * 8 + uVar19 * 0x20 + 0x878);
              uVar3 = *puVar18;
              local_8a0[uVar20 * 0x10] = 0x23;
              (&local_884)[uVar20 * 8] = 0x100000000;
              local_898[uVar20 * 8] = 0;
              local_898[uVar20 * 8 + 1] = uVar9;
              (&local_888)[uVar20 * 0x10] = puVar18[8];
              (&local_87c)[uVar20 * 0x10] = *(undefined4 *)(s_descriptorTypes + (ulong)uVar3 * 4);
              if (uVar3 < 7) {
                uVar3 = 1 << (ulong)(uVar3 & 0x1f);
                lVar15 = lVar15 + uVar12 * 0x28 + 8;
                if ((uVar3 & 0x70) == 0) {
                  if ((uVar3 & 3) == 0) {
                    local_878[uVar20 * 8 + 2] = lVar15;
                  }
                  else {
                    local_878[uVar20 * 8 + 1] = lVar15;
                  }
                }
                else {
                  local_878[uVar20 * 8] = lVar15;
                }
              }
              uVar20 = (ulong)((uint)uVar20 + 1);
              if (uVar21 <= uVar2) {
                uVar21 = uVar2;
              }
            }
            else {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar8 != 0)) {
                    /* try { // try from 00ad15e4 to 00ad15ef has its CatchHandler @ 00ad16b4 */
                this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00ad15f0 to 00ad15f7 has its CatchHandler @ 00ad16a4 */
                Logger::Logger(this_00);
                LogManager::getInstance()::singletonLogManager = this_00;
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                                "Vulkan error: array overflow, please adjust MAX_NUM_DESC\n");
            }
          }
          puVar24 = puVar24 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar23 = uVar23 + 1;
      *(uint *)(this + lVar13 + 0x678) = uVar21;
      *(undefined2 *)(this + lVar13 + 0x67c) = 1;
    } while (uVar23 != uVar22);
  }
LAB_00ad162c:
  (*vkUpdateDescriptorSets)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),uVar20,local_8a0,0,0);
  if (*(long *)(lVar5 + 0x28) != local_a0[4]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


