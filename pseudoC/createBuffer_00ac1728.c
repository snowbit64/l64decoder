// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBuffer
// Entry Point: 00ac1728
// Size: 1388 bytes
// Signature: undefined __thiscall createBuffer(VulkanResourceAllocator * this, uint param_1, BUFFER_TYPE param_2, MEMORY_TYPE param_3, QUEUE_TYPE param_4, PIXEL_FORMAT param_5)


/* VulkanResourceAllocator::createBuffer(unsigned int, VulkanResourceAllocator::BUFFER_TYPE,
   VulkanMemoryAllocator::MEMORY_TYPE, VulkanUtil::QUEUE_TYPE, PixelFormat::PIXEL_FORMAT) */

long __thiscall
VulkanResourceAllocator::createBuffer
          (VulkanResourceAllocator *this,uint param_1,BUFFER_TYPE param_2,MEMORY_TYPE param_3,
          QUEUE_TYPE param_4,PIXEL_FORMAT param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  VkBuffer_T **ppVVar8;
  void *pvVar9;
  ulong uVar10;
  uint uVar11;
  undefined *puVar12;
  void *pvVar13;
  BufferPool **ppBVar14;
  ulong uVar15;
  BufferPool **ppBVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  void **ppvVar23;
  void **ppvVar24;
  BufferPool *pBVar25;
  VkBuffer_T *local_78;
  VkBuffer_T *pVStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  Mutex::enterCriticalSection();
  uVar20 = param_2;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (param_3 < 4) {
      puVar12 = &DAT_004c4e10;
LAB_00ac17c8:
      uVar20 = *(uint *)(puVar12 + (long)(int)param_3 * 4);
      goto switchD_00ac17a0_caseD_7;
    }
    break;
  case 4:
  case 5:
    if (param_3 < 4) {
      puVar12 = &DAT_004c40a0;
      goto LAB_00ac17c8;
    }
    break;
  case 6:
    break;
  case 7:
    goto switchD_00ac17a0_caseD_7;
  default:
    uVar20 = 8;
    goto switchD_00ac17a0_caseD_7;
  }
  uVar20 = 6;
switchD_00ac17a0_caseD_7:
  uVar11 = 1;
  if (0x2000 < param_1) {
    uVar11 = 2;
  }
  if (param_1 < 0x101) {
    uVar11 = 0;
  }
  uVar2 = uVar20 * 3 + uVar11;
  uVar17 = (ulong)uVar2;
  lVar21 = uVar17 * 0x18 + (ulong)param_4 * 0x240;
  ppvVar23 = (void **)(this + lVar21 + 8);
  pvVar13 = *ppvVar23;
  ppvVar24 = (void **)(this + lVar21 + 0x10);
  uVar4 = *(uint *)(this + (ulong)uVar20 * 4 + 0x908);
  uVar15 = (long)*ppvVar24 - (long)pvVar13;
  uVar3 = (param_1 + *(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc + 8)) - 1 &
          -*(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc + 8);
  if ((int)(uVar15 >> 3) == 0) {
LAB_00ac18a8:
    uVar15 = (ulong)param_4;
    lVar21 = uVar17 * 0x18 + uVar15 * 0x240;
    lVar7 = *(long *)(this + lVar21 + 0x488);
    uVar18 = *(long *)(this + lVar21 + 0x490) - lVar7;
    uVar19 = (uint)(uVar18 >> 3);
    if (uVar19 == 0) {
LAB_00ac193c:
      uVar19 = *(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc + 4) *
               *(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc);
      if ((uint)(*(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc + 4) *
                *(int *)(s_bufferPoolInfos + (ulong)uVar11 * 0xc)) <= uVar3) {
        uVar19 = uVar3;
      }
      if (uVar20 < 8) {
        uVar11 = (&DAT_00517640)[(int)uVar20];
      }
      else {
        uVar11 = 0;
      }
      uVar20 = *(uint *)(this + (ulong)uVar20 * 4 + 0x928);
                    /* try { // try from 00ac1998 to 00ac199f has its CatchHandler @ 00ac1cb4 */
      bVar6 = VulkanMemoryAllocator::getIsMemoryTypeMappable
                        (*(VulkanMemoryAllocator **)(*(long *)(this + 0x980) + 0x378),uVar20);
                    /* try { // try from 00ac19a4 to 00ac19c3 has its CatchHandler @ 00ac1cb0 */
      uVar18 = VulkanUtil::createBuffer
                         (*(VulkanRenderDevice **)(this + 0x980),uVar19,uVar11,uVar20,
                          (bool)(bVar6 & 1),&pVStack_70,(Allocation **)&local_78);
      if ((uVar18 & 1) == 0) {
        lVar7 = 0;
      }
      else {
                    /* try { // try from 00ac19c8 to 00ac19cf has its CatchHandler @ 00ac1cac */
        ppVVar8 = (VkBuffer_T **)operator_new(0x50);
        *ppVVar8 = pVStack_70;
        ppVVar8[1] = local_78;
                    /* try { // try from 00ac19e0 to 00ac19eb has its CatchHandler @ 00ac1c9c */
        SubAllocator::SubAllocator((SubAllocator *)(ppVVar8 + 2),uVar19,1);
        ppBVar14 = (BufferPool **)*ppvVar24;
        ppBVar16 = *(BufferPool ***)(this + uVar17 * 0x18 + uVar15 * 0x240 + 0x18);
        *(uint *)((long)ppVVar8 + 0x44) = uVar2;
        *(QUEUE_TYPE *)(ppVVar8 + 9) = param_4;
        if (ppBVar14 == ppBVar16) {
          pvVar13 = *ppvVar23;
          uVar10 = (long)ppBVar14 - (long)pvVar13;
          uVar18 = ((long)uVar10 >> 3) + 1;
          if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ac1c6c to 00ac1c6f has its CatchHandler @ 00ac1cac */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar18 <= (ulong)((long)uVar10 >> 2)) {
            uVar18 = (long)uVar10 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar10) {
            uVar18 = 0x1fffffffffffffff;
          }
          if (uVar18 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar18 >> 0x3d != 0) {
                    /* try { // try from 00ac1c78 to 00ac1c83 has its CatchHandler @ 00ac1cac */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00ac1b00 to 00ac1b03 has its CatchHandler @ 00ac1cac */
            pvVar9 = operator_new(uVar18 << 3);
          }
          ppBVar14 = (BufferPool **)((long)pvVar9 + ((long)uVar10 >> 3) * 8);
          *ppBVar14 = (BufferPool *)ppVVar8;
          if (0 < (long)uVar10) {
            memcpy(pvVar9,pvVar13,uVar10);
          }
          *(void **)(this + uVar17 * 0x18 + uVar15 * 0x240 + 0x18) =
               (void *)((long)pvVar9 + uVar18 * 8);
          *ppvVar23 = pvVar9;
          *ppvVar24 = ppBVar14 + 1;
          if (pvVar13 != (void *)0x0) {
            operator_delete(pvVar13);
          }
        }
        else {
          *ppBVar14 = (BufferPool *)ppVVar8;
          *ppvVar24 = ppBVar14 + 1;
        }
                    /* try { // try from 00ac1bc0 to 00ac1bdb has its CatchHandler @ 00ac1c98 */
        lVar7 = allocateBufferInPool(this,(BufferPool *)ppVVar8,uVar3,uVar4,param_2,param_5);
      }
    }
    else {
      lVar22 = 0;
      plVar1 = (long *)(this + lVar21 + 0x490);
      while( true ) {
        pBVar25 = *(BufferPool **)(lVar7 + lVar22 * 8);
                    /* try { // try from 00ac1904 to 00ac191f has its CatchHandler @ 00ac1cbc */
        lVar7 = allocateBufferInPool(this,pBVar25,uVar3,uVar4,param_2,param_5);
        if (lVar7 != 0) break;
        if ((uVar18 >> 3 & 0xffffffff) - 1 == lVar22) goto LAB_00ac193c;
        lVar7 = *(long *)(this + lVar21 + 0x488);
        lVar22 = lVar22 + 1;
      }
      if ((int)lVar22 + 1U < uVar19) {
        *(undefined8 *)(*(long *)(this + lVar21 + 0x488) + lVar22 * 8) =
             *(undefined8 *)(*plVar1 + -8);
      }
      ppBVar14 = (BufferPool **)*ppvVar24;
      ppBVar16 = *(BufferPool ***)(this + uVar17 * 0x18 + uVar15 * 0x240 + 0x18);
      *plVar1 = *plVar1 + -8;
      if (ppBVar14 == ppBVar16) {
        pvVar13 = *ppvVar23;
        uVar10 = (long)ppBVar14 - (long)pvVar13;
        uVar18 = ((long)uVar10 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* try { // try from 00ac1c70 to 00ac1c77 has its CatchHandler @ 00ac1c94 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar18 <= (ulong)((long)uVar10 >> 2)) {
          uVar18 = (long)uVar10 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (uVar18 >> 0x3d != 0) {
                    /* try { // try from 00ac1c84 to 00ac1c8f has its CatchHandler @ 00ac1c94 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00ac1b60 to 00ac1b63 has its CatchHandler @ 00ac1c94 */
          pvVar9 = operator_new(uVar18 << 3);
        }
        ppBVar14 = (BufferPool **)((long)pvVar9 + ((long)uVar10 >> 3) * 8);
        *ppBVar14 = pBVar25;
        if (0 < (long)uVar10) {
          memcpy(pvVar9,pvVar13,uVar10);
        }
        *(void **)(this + uVar17 * 0x18 + uVar15 * 0x240 + 0x18) =
             (void *)((long)pvVar9 + uVar18 * 8);
        *ppvVar23 = pvVar9;
        *ppvVar24 = ppBVar14 + 1;
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      else {
        *ppBVar14 = pBVar25;
        *ppvVar24 = ppBVar14 + 1;
      }
    }
  }
  else {
    lVar21 = 0;
                    /* try { // try from 00ac1874 to 00ac188b has its CatchHandler @ 00ac1cc0 */
    while (lVar7 = allocateBufferInPool
                             (this,*(BufferPool **)((long)pvVar13 + lVar21),uVar3,uVar4,param_2,
                              param_5), lVar7 == 0) {
      if ((uVar15 >> 3 & 0xffffffff) * 8 + -8 == lVar21) goto LAB_00ac18a8;
      pvVar13 = *ppvVar23;
      lVar21 = lVar21 + 8;
    }
  }
                    /* try { // try from 00ac1be0 to 00ac1be7 has its CatchHandler @ 00ac1cb8 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}


