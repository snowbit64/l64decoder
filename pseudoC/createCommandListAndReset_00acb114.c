// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCommandListAndReset
// Entry Point: 00acb114
// Size: 1948 bytes
// Signature: undefined createCommandListAndReset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::createCommandListAndReset() */

undefined8 * VulkanCommandBuffer::createCommandListAndReset(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  long in_x0;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  void *pvVar17;
  ulong __n;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(char *)(in_x0 + 0x460) != '\0') {
    endRenderPass();
  }
  puVar5 = (undefined8 *)operator_new(0x268);
  uVar7 = *(undefined8 *)(in_x0 + 0x98);
  puVar12 = puVar5 + 0x16;
  *puVar12 = 0;
  puVar5[0x15] = puVar12;
  puVar5[10] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  puVar5[0x14] = 0;
  puVar5[0x13] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  *puVar5 = &PTR__VulkanCommandList_00fe68b8;
  puVar5[1] = uVar7;
  puVar5[0x1d] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = (void *)0x0;
  puVar13 = puVar5 + 0x1c;
  *puVar13 = 0;
  puVar5[0x1b] = puVar13;
  Mutex::enterCriticalSection();
  lVar8 = *(long *)(in_x0 + 0x4a8);
  puVar5[0xd] = lVar8;
  if ((lVar8 != 0) && (FUN_00f27700(1,lVar8 + 8), *(char *)(in_x0 + 0x560) != '\0')) {
    FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0x4a8) + 8);
    *(undefined8 *)(in_x0 + 0x4a8) = 0;
    *(undefined *)(in_x0 + 0x560) = 0;
  }
  lVar8 = *(long *)(in_x0 + 0x4b0);
  puVar5[0xe] = lVar8;
  if ((lVar8 != 0) && (FUN_00f27700(1,lVar8 + 8), *(char *)(in_x0 + 0x561) != '\0')) {
    FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0x4b0) + 8);
    *(undefined8 *)(in_x0 + 0x4b0) = 0;
    *(undefined *)(in_x0 + 0x561) = 0;
  }
  lVar8 = *(long *)(in_x0 + 0x578);
  lVar9 = *(long *)(in_x0 + 0x570);
  if (lVar8 == lVar9) {
    cVar4 = *(char *)(in_x0 + 0x562);
    lVar9 = lVar8;
  }
  else {
    uVar18 = 0;
    do {
      puVar10 = (undefined8 *)puVar5[0x10];
      if (puVar10 == (undefined8 *)puVar5[0x11]) {
        pvVar17 = (void *)puVar5[0xf];
        __n = (long)puVar10 - (long)pvVar17;
        uVar16 = ((long)__n >> 3) + 1;
        if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar16 <= (ulong)((long)__n >> 2)) {
          uVar16 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar16 = 0x1fffffffffffffff;
        }
        if (uVar16 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar16 >> 0x3d != 0) goto LAB_00acb890;
          pvVar6 = operator_new(uVar16 << 3);
        }
        puVar10 = (undefined8 *)((long)pvVar6 + ((long)__n >> 3) * 8);
        *puVar10 = *(undefined8 *)(lVar9 + uVar18 * 8);
        if (0 < (long)__n) {
          memcpy(pvVar6,pvVar17,__n);
        }
        puVar5[0xf] = pvVar6;
        puVar5[0x10] = puVar10 + 1;
        puVar5[0x11] = (void *)((long)pvVar6 + uVar16 * 8);
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
        }
      }
      else {
        *puVar10 = *(undefined8 *)(lVar9 + uVar18 * 8);
        puVar5[0x10] = puVar10 + 1;
      }
      FUN_00f27700(1,*(long *)(*(long *)(in_x0 + 0x570) + uVar18 * 8) + 8);
      lVar8 = *(long *)(in_x0 + 0x578);
      uVar18 = (ulong)((int)uVar18 + 1);
      lVar9 = *(long *)(in_x0 + 0x570);
    } while (uVar18 < (ulong)(lVar8 - lVar9 >> 3));
    cVar4 = *(char *)(in_x0 + 0x562);
  }
  if (cVar4 != '\0') {
    if (lVar8 != lVar9) {
      uVar18 = 0;
      do {
        FUN_00f27700(0xffffffff,*(long *)(lVar9 + uVar18 * 8) + 8);
        uVar18 = (ulong)((int)uVar18 + 1);
        lVar9 = *(long *)(in_x0 + 0x570);
      } while (uVar18 < (ulong)(*(long *)(in_x0 + 0x578) - lVar9 >> 3));
    }
    *(long *)(in_x0 + 0x578) = lVar9;
    *(undefined *)(in_x0 + 0x562) = 0;
  }
  Mutex::leaveCriticalSection();
  if (*(Buffer **)(in_x0 + 0x120) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x120),*(FenceStatus **)(in_x0 + 0x550));
    *(undefined8 *)(in_x0 + 0x120) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x138) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x138),*(FenceStatus **)(in_x0 + 0x550));
    *(undefined8 *)(in_x0 + 0x138) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x150) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x150),*(FenceStatus **)(in_x0 + 0x550));
    *(undefined8 *)(in_x0 + 0x150) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x168) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x168),*(FenceStatus **)(in_x0 + 0x550));
    *(undefined8 *)(in_x0 + 0x168) = 0;
  }
  puVar5[0xb] = *(undefined8 *)(in_x0 + 0x550);
  uVar7 = VulkanResourceAllocator::getFenceStatus();
  *(undefined8 *)(in_x0 + 0x550) = uVar7;
  if (*(Buffer **)(in_x0 + 0x180) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x180),*(FenceStatus **)(in_x0 + 0x558));
    *(undefined8 *)(in_x0 + 0x180) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x198) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x198),*(FenceStatus **)(in_x0 + 0x558));
    *(undefined8 *)(in_x0 + 0x198) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x1b0) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x1b0),*(FenceStatus **)(in_x0 + 0x558));
    *(undefined8 *)(in_x0 + 0x1b0) = 0;
  }
  if (*(Buffer **)(in_x0 + 0x1c8) != (Buffer *)0x0) {
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
               *(Buffer **)(in_x0 + 0x1c8),*(FenceStatus **)(in_x0 + 0x558));
    *(undefined8 *)(in_x0 + 0x1c8) = 0;
  }
  puVar5[0xc] = *(undefined8 *)(in_x0 + 0x558);
  uVar7 = VulkanResourceAllocator::getFenceStatus();
  lVar8 = 0;
  lVar9 = 0x4b8;
  *(undefined8 *)(in_x0 + 0x558) = uVar7;
  do {
    if (*(long *)(in_x0 + lVar9) != 0) {
      (*vkEndCommandBuffer)();
      lVar11 = in_x0 + lVar8;
      puVar10 = *(undefined8 **)(lVar11 + 0x4d8);
      if (puVar10 == *(undefined8 **)(lVar11 + 0x4e0)) {
        pvVar17 = *(void **)(lVar11 + 0x4d0);
        uVar16 = (long)puVar10 - (long)pvVar17;
        uVar18 = ((long)uVar16 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar18 <= (ulong)((long)uVar16 >> 2)) {
          uVar18 = (long)uVar16 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar16) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar18 >> 0x3d != 0) {
LAB_00acb890:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar6 = operator_new(uVar18 << 3);
        }
        puVar10 = (undefined8 *)((long)pvVar6 + ((long)uVar16 >> 3) * 8);
        *puVar10 = *(undefined8 *)(in_x0 + lVar9);
        if (0 < (long)uVar16) {
          memcpy(pvVar6,pvVar17,uVar16);
        }
        *(undefined8 **)(lVar11 + 0x4d8) = puVar10 + 1;
        *(void **)(lVar11 + 0x4d0) = pvVar6;
        *(void **)(lVar11 + 0x4e0) = (void *)((long)pvVar6 + uVar18 * 8);
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
        }
      }
      else {
        *puVar10 = *(undefined8 *)(in_x0 + lVar9);
        *(undefined8 **)(lVar11 + 0x4d8) = puVar10 + 1;
      }
    }
    puVar10 = (undefined8 *)((long)puVar5 + lVar8 + 0x20);
    lVar11 = in_x0 + lVar8;
    lVar8 = lVar8 + 0x18;
    uVar7 = puVar10[-2];
    uVar14 = *puVar10;
    uVar20 = *(undefined8 *)(lVar11 + 0x4d8);
    uVar19 = *(undefined8 *)(lVar11 + 0x4d0);
    *(undefined8 *)(lVar11 + 0x4d0) = uVar7;
    uVar15 = *(undefined8 *)(lVar11 + 0x4e0);
    *(undefined8 *)(lVar11 + 0x4e0) = uVar14;
    *(undefined8 *)(lVar11 + 0x4d8) = uVar7;
    *(undefined8 *)(in_x0 + lVar9) = 0;
    lVar9 = lVar9 + 8;
    puVar10[-1] = uVar20;
    puVar10[-2] = uVar19;
    *puVar10 = uVar15;
    if (lVar8 == 0x48) {
      puVar10 = (undefined8 *)(in_x0 + 0xad8);
      uVar7 = puVar5[0x12];
      uVar20 = puVar5[0x15];
      uVar19 = puVar5[0x14];
      puVar5[0x12] = *(undefined8 *)(in_x0 + 0xab8);
      lVar9 = *(long *)(in_x0 + 0xad8);
      *(undefined8 *)(in_x0 + 0xab8) = uVar7;
      lVar8 = *(long *)(in_x0 + 0xae0);
      uVar7 = *(undefined8 *)(in_x0 + 0xad0);
      puVar1 = (undefined8 *)(in_x0 + 0xb08);
      uVar15 = *(undefined8 *)(in_x0 + 0xac8);
      uVar14 = *(undefined8 *)(in_x0 + 0xac0);
      *(undefined8 *)(in_x0 + 0xad0) = uVar20;
      *(undefined8 *)(in_x0 + 0xac8) = uVar19;
      puVar2 = puVar5 + 0x15;
      if (lVar8 != 0) {
        puVar2 = (undefined8 *)(lVar9 + 0x10);
      }
      uVar19 = puVar5[0x16];
      lVar11 = puVar5[0x17];
      puVar5[0x15] = uVar7;
      puVar5[0x16] = lVar9;
      puVar5[0x14] = uVar15;
      puVar5[0x13] = uVar14;
      puVar5[0x17] = lVar8;
      *(undefined8 *)(in_x0 + 0xad8) = uVar19;
      *puVar2 = puVar12;
      *(long *)(in_x0 + 0xae0) = lVar11;
      lVar8 = *(long *)(in_x0 + 0xb10);
      puVar12 = (undefined8 *)(in_x0 + 0xad0);
      if (lVar11 != 0) {
        puVar12 = (undefined8 *)(*(long *)(in_x0 + 0xad8) + 0x10);
      }
      *puVar12 = puVar10;
      uVar7 = puVar5[0x19];
      uVar14 = *(undefined8 *)(in_x0 + 0xae8);
      uVar21 = puVar5[0x1b];
      uVar20 = puVar5[0x1a];
      *(undefined8 *)(in_x0 + 0xae8) = puVar5[0x18];
      uVar15 = *(undefined8 *)(in_x0 + 0xb00);
      puVar5[0x18] = uVar14;
      lVar11 = *(long *)(in_x0 + 0xb08);
      uVar19 = *(undefined8 *)(in_x0 + 0xaf8);
      uVar14 = *(undefined8 *)(in_x0 + 0xaf0);
      *(undefined8 *)(in_x0 + 0xaf0) = uVar7;
      *(undefined8 *)(in_x0 + 0xb00) = uVar21;
      *(undefined8 *)(in_x0 + 0xaf8) = uVar20;
      uVar7 = puVar5[0x1c];
      lVar9 = puVar5[0x1d];
      puVar5[0x1b] = uVar15;
      puVar5[0x1c] = lVar11;
      puVar5[0x1a] = uVar19;
      puVar5[0x19] = uVar14;
      puVar5[0x1d] = lVar8;
      *(undefined8 *)(in_x0 + 0xb08) = uVar7;
      puVar12 = puVar5 + 0x1b;
      if (lVar8 != 0) {
        puVar12 = (undefined8 *)(lVar11 + 0x10);
      }
      *(long *)(in_x0 + 0xb10) = lVar9;
      *puVar12 = puVar13;
      puVar12 = (undefined8 *)(in_x0 + 0xb00);
      if (lVar9 != 0) {
        puVar12 = (undefined8 *)(*(long *)(in_x0 + 0xb08) + 0x10);
      }
      *puVar12 = puVar1;
      *(undefined8 *)(in_x0 + 0xac0) = *(undefined8 *)(in_x0 + 0xab8);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
      ::destroy((__tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
                 *)(undefined8 *)(in_x0 + 0xad0),*(__tree_node **)(in_x0 + 0xad8));
      *(undefined8 **)(in_x0 + 0xad0) = puVar10;
      *(undefined8 *)(in_x0 + 0xaf0) = *(undefined8 *)(in_x0 + 0xae8);
      *(undefined8 *)(in_x0 + 0xae0) = 0;
      *puVar10 = 0;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
      ::destroy((__tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
                 *)(undefined8 *)(in_x0 + 0xb00),*(__tree_node **)(in_x0 + 0xb08));
      uVar3 = *(uint *)(in_x0 + 0x360);
      *(undefined8 **)(in_x0 + 0xb00) = puVar1;
      *(uint *)(puVar5 + 0x1e) = uVar3;
      *(undefined8 *)(in_x0 + 0xb10) = 0;
      *puVar1 = 0;
      __memcpy_chk(puVar5 + 0x1f,in_x0 + 0x368,(ulong)uVar3 * 0x18,0x170);
      uVar3 = *(uint *)(in_x0 + 0x2e4);
      *(uint *)(puVar5 + 0x3d) = uVar3;
      __memcpy_chk(puVar5 + 0x3e,in_x0 + 0x2e8,(ulong)uVar3 * 0x18,0x78);
      *(undefined8 *)(in_x0 + 0xa0) = 0;
      *(undefined8 *)(in_x0 + 0x688) = *(undefined8 *)(in_x0 + 0x680);
      *(undefined8 *)(in_x0 + 0x608) = 0xffffffffffffffff;
      *(undefined8 *)(in_x0 + 0x610) = 0xffffffffffffffff;
      *(undefined8 *)(in_x0 + 0x880) = 0;
      *(undefined8 *)(in_x0 + 0x878) = 0;
      *(undefined8 *)(in_x0 + 0xb8) = 0;
      *(undefined8 *)(in_x0 + 0xb0) = 0;
      *(undefined8 *)(in_x0 + 200) = 0;
      *(undefined8 *)(in_x0 + 0xc0) = 0;
      *(undefined8 *)(in_x0 + 0x788) = *(undefined8 *)(in_x0 + 0x780);
      *(undefined8 *)(in_x0 + 0x6c8) = *(undefined8 *)(in_x0 + 0x6c0);
      *(undefined8 *)(in_x0 + 0xd8) = 0;
      *(undefined8 *)(in_x0 + 0xd0) = 0;
      *(undefined8 *)(in_x0 + 0x7c8) = *(undefined8 *)(in_x0 + 0x7c0);
      *(undefined8 *)(in_x0 + 0x708) = *(undefined8 *)(in_x0 + 0x700);
      *(undefined8 *)(in_x0 + 0x618) = 0;
      *(undefined8 *)(in_x0 + 0x5f8) = 0;
      *(undefined8 *)(in_x0 + 0x890) = 0;
      *(undefined8 *)(in_x0 + 0x888) = 0;
      *(undefined8 *)(in_x0 + 0x808) = *(undefined8 *)(in_x0 + 0x800);
      *(undefined4 *)(in_x0 + 0x678) = 0;
      *(undefined2 *)(in_x0 + 0x67c) = 1;
      *(undefined4 *)(in_x0 + 0x6b8) = 0;
      *(undefined8 *)(in_x0 + 0x6a0) = 0;
      *(undefined8 *)(in_x0 + 0x698) = 0;
      *(undefined2 *)(in_x0 + 0x6bc) = 1;
      *(undefined4 *)(in_x0 + 0x6f8) = 0;
      *(undefined8 *)(in_x0 + 0x6e0) = 0;
      *(undefined8 *)(in_x0 + 0x6d8) = 0;
      *(undefined2 *)(in_x0 + 0x6fc) = 1;
      *(undefined4 *)(in_x0 + 0x738) = 0;
      *(undefined8 *)(in_x0 + 0x720) = 0;
      *(undefined8 *)(in_x0 + 0x718) = 0;
      *(undefined2 *)(in_x0 + 0x73c) = 1;
      *(undefined8 *)(in_x0 + 0x748) = *(undefined8 *)(in_x0 + 0x740);
      *(undefined8 *)(in_x0 + 0x620) = 0;
      *(undefined8 *)(in_x0 + 0x600) = 0;
      *(undefined8 *)(in_x0 + 0x760) = 0;
      *(undefined8 *)(in_x0 + 0x758) = 0;
      *(undefined4 *)(in_x0 + 0x778) = 0;
      *(undefined2 *)(in_x0 + 0x77c) = 1;
      *(undefined8 *)(in_x0 + 0x898) = 0;
      *(undefined4 *)(in_x0 + 0x7b8) = 0;
      *(undefined8 *)(in_x0 + 0x7a0) = 0;
      *(undefined8 *)(in_x0 + 0x798) = 0;
      *(undefined2 *)(in_x0 + 0x7bc) = 1;
      *(undefined8 *)(in_x0 + 0x8a0) = 0;
      *(undefined4 *)(in_x0 + 0x7f8) = 0;
      *(undefined8 *)(in_x0 + 0x7e0) = 0;
      *(undefined8 *)(in_x0 + 0x7d8) = 0;
      *(undefined2 *)(in_x0 + 0x7fc) = 1;
      *(undefined8 *)(in_x0 + 0x8a8) = 0;
      *(undefined4 *)(in_x0 + 0x838) = 0;
      *(undefined8 *)(in_x0 + 0x820) = 0;
      *(undefined8 *)(in_x0 + 0x818) = 0;
      *(undefined2 *)(in_x0 + 0x83c) = 1;
      *(undefined8 *)(in_x0 + 0x848) = *(undefined8 *)(in_x0 + 0x840);
      *(undefined8 *)(in_x0 + 0x8b0) = 0;
      *(undefined4 *)(in_x0 + 0x458) = 0;
      *(undefined4 *)(in_x0 + 0x2e4) = 0;
      *(undefined4 *)(in_x0 + 0x360) = 0;
      *(undefined4 *)(in_x0 + 0xaa8) = 0;
      *(undefined8 *)(in_x0 + 0x860) = 0;
      *(undefined8 *)(in_x0 + 0x858) = 0;
      return puVar5;
    }
  } while( true );
}


