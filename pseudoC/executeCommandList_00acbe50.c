// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCommandList
// Entry Point: 00acbe50
// Size: 1460 bytes
// Signature: undefined __thiscall executeCommandList(VulkanCommandBuffer * this, ICommandList * param_1)


/* VulkanCommandBuffer::executeCommandList(ICommandList*) */

ulong __thiscall
VulkanCommandBuffer::executeCommandList(VulkanCommandBuffer *this,ICommandList *param_1)

{
  TransitionData *pTVar1;
  TransitionData *pTVar2;
  long *plVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  type tVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  void *pvVar12;
  ICommandList **ppIVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  ICommandList *pIVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  ICommandList **ppIVar21;
  ulong uVar22;
  void **ppvVar23;
  
  VulkanTextureObject::synchronizeSubResources
            (this,0,*(uint *)(param_1 + 0xf0),(SubResourceTransitionData *)(param_1 + 0xf8));
  pTVar1 = *(TransitionData **)(param_1 + 0x90);
  if (pTVar1 != *(TransitionData **)(param_1 + 0x98)) {
    VulkanTextureObject::synchronizeTextures
              (this,0,(int)((ulong)((long)*(TransitionData **)(param_1 + 0x98) - (long)pTVar1) >> 3)
                      * -0x55555555,pTVar1);
  }
  pTVar2 = *(TransitionData **)(param_1 + 0xc0);
  if (pTVar2 != *(TransitionData **)(param_1 + 200)) {
    VulkanBufferResource::synchronizeBuffers
              (this,0,(int)((ulong)((long)*(TransitionData **)(param_1 + 200) - (long)pTVar2) >> 3)
                      * -0x55555555,pTVar2);
  }
  ppIVar21 = *(ICommandList ***)(param_1 + 0xa8);
  while (ppIVar21 != (ICommandList **)(param_1 + 0xb0)) {
    VulkanTextureObject::setLayout
              ((VulkanTextureObject *)ppIVar21[4],*(LAYOUT *)(ppIVar21 + 5),0xffffffff,0xffffffff);
    ppIVar13 = (ICommandList **)ppIVar21[1];
    if ((ICommandList **)ppIVar21[1] == (ICommandList **)0x0) {
      ppIVar13 = ppIVar21 + 2;
      bVar6 = *(ICommandList ***)*ppIVar13 != ppIVar21;
      ppIVar21 = (ICommandList **)*ppIVar13;
      if (bVar6) {
        do {
          pIVar17 = *ppIVar13;
          ppIVar13 = (ICommandList **)(pIVar17 + 0x10);
          ppIVar21 = (ICommandList **)*ppIVar13;
        } while (*ppIVar21 != pIVar17);
      }
    }
    else {
      do {
        ppIVar21 = ppIVar13;
        ppIVar13 = (ICommandList **)*ppIVar21;
      } while ((ICommandList **)*ppIVar21 != (ICommandList **)0x0);
    }
  }
  ppIVar21 = *(ICommandList ***)(param_1 + 0xd8);
  while (ppIVar21 != (ICommandList **)(param_1 + 0xe0)) {
    ppIVar13 = (ICommandList **)ppIVar21[1];
    *(undefined4 *)(ppIVar21[4] + 0x90) = *(undefined4 *)(ppIVar21 + 5);
    if (ppIVar13 == (ICommandList **)0x0) {
      ppIVar13 = ppIVar21 + 2;
      bVar6 = *(ICommandList ***)*ppIVar13 != ppIVar21;
      ppIVar21 = (ICommandList **)*ppIVar13;
      if (bVar6) {
        do {
          pIVar17 = *ppIVar13;
          ppIVar13 = (ICommandList **)(pIVar17 + 0x10);
          ppIVar21 = (ICommandList **)*ppIVar13;
        } while (*ppIVar21 != pIVar17);
      }
    }
    else {
      do {
        ppIVar21 = ppIVar13;
        ppIVar13 = (ICommandList **)*ppIVar21;
      } while ((ICommandList **)*ppIVar21 != (ICommandList **)0x0);
    }
  }
  lVar14 = *(long *)(param_1 + 0x80);
  if (lVar14 != *(long *)(param_1 + 0x78)) {
    uVar18 = 0;
    lVar14 = *(long *)(param_1 + 0x78);
    do {
      lVar14 = *(long *)(lVar14 + uVar18 * 8);
      if ((lVar14 != 0) && (iVar7 = FUN_00f27700(0xffffffff,lVar14 + 8), iVar7 < 2)) {
        VulkanResourceAllocator::releaseDescriptorPool
                  (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                   *(DescriptorPool **)(*(long *)(param_1 + 0x78) + uVar18 * 8),
                   *(FenceStatus **)(this + 0x550));
      }
      lVar14 = *(long *)(param_1 + 0x78);
      uVar18 = (ulong)((int)uVar18 + 1);
    } while (uVar18 < (ulong)(*(long *)(param_1 + 0x80) - lVar14 >> 3));
  }
  bVar6 = false;
  lVar19 = 0;
  *(long *)(param_1 + 0x80) = lVar14;
  bVar5 = true;
  do {
    bVar16 = bVar5;
    if (*(long *)(param_1 + lVar19 * 8 + 0x68) != 0) {
      iVar7 = FUN_00f27700(0xffffffff,*(long *)(param_1 + lVar19 * 8 + 0x68) + 8);
      if (iVar7 < 2) {
        VulkanResourceAllocator::releaseCommandPool
                  (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                   *(CommandPool **)(param_1 + lVar19 * 8 + 0x68),(QUEUE_TYPE)lVar19,
                   *(FenceStatus **)(this + 0x550));
      }
      *(undefined8 *)(param_1 + lVar19 * 8 + 0x68) = 0;
    }
    if ((bVar6) && (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
      (*(undefined8 **)(param_1 + 0x60))[1] = **(undefined8 **)(param_1 + 0x60);
      Mutex::enterCriticalSection();
      VulkanResourceAllocator::releaseFenceStatus
                (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                 *(FenceStatus **)(param_1 + 0x60));
      Mutex::leaveCriticalSection();
      *(undefined8 *)(param_1 + lVar19 * 8 + 0x58) = 0;
      break;
    }
    ppvVar23 = *(void ***)(this + lVar19 * 8 + 0x518);
    if (ppvVar23 == (void **)0x0) {
      ppvVar23 = (void **)VulkanResourceAllocator::getFence
                                    (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                                     (QUEUE_TYPE)lVar19);
      *(void ***)(this + lVar19 * 8 + 0x518) = ppvVar23;
      lVar14 = *(long *)(param_1 + lVar19 * 8 + 0x58);
    }
    else {
      lVar14 = *(long *)(param_1 + lVar19 * 8 + 0x58);
    }
    if (lVar14 != 0) {
      plVar3 = (long *)ppvVar23[1];
      if (plVar3 == (long *)ppvVar23[2]) {
        pvVar20 = *ppvVar23;
        uVar22 = (long)plVar3 - (long)pvVar20;
        uVar18 = ((long)uVar22 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar18 <= (ulong)((long)uVar22 >> 2)) {
          uVar18 = (long)uVar22 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          if (uVar18 >> 0x3d != 0) goto LAB_00acc3e4;
          pvVar12 = operator_new(uVar18 << 3);
        }
        plVar3 = (long *)((long)pvVar12 + ((long)uVar22 >> 3) * 8);
        *plVar3 = lVar14;
        if (0 < (long)uVar22) {
          memcpy(pvVar12,pvVar20,uVar22);
        }
        *ppvVar23 = pvVar12;
        ppvVar23[1] = plVar3 + 1;
        ppvVar23[2] = (void *)((long)pvVar12 + uVar18 * 8);
        if (pvVar20 != (void *)0x0) {
          operator_delete(pvVar20);
        }
      }
      else {
        *plVar3 = lVar14;
        ppvVar23[1] = plVar3 + 1;
      }
    }
    *(undefined8 *)(param_1 + lVar19 * 8 + 0x58) = 0;
    bVar6 = true;
    lVar19 = 1;
    bVar5 = false;
  } while (bVar16);
  lVar14 = 0;
  lVar19 = 0x4b8;
  do {
    lVar11 = *(long *)(this + lVar19);
    if ((lVar11 != 0) && (*(long *)(param_1 + lVar14 + 0x10) != *(long *)(param_1 + lVar14 + 0x18)))
    {
      if ((lVar14 == 0) && (this[0x460] != (VulkanCommandBuffer)0x0)) {
        endRenderPass();
        lVar11 = *(long *)(this + lVar19);
      }
      (*vkEndCommandBuffer)(lVar11);
      puVar15 = *(undefined8 **)(this + lVar14 + 0x4d8);
      if (puVar15 == *(undefined8 **)(this + lVar14 + 0x4e0)) {
        pvVar20 = *(void **)(this + lVar14 + 0x4d0);
        uVar22 = (long)puVar15 - (long)pvVar20;
        uVar18 = ((long)uVar22 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar18 <= (ulong)((long)uVar22 >> 2)) {
          uVar18 = (long)uVar22 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar22) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          if (uVar18 >> 0x3d != 0) {
LAB_00acc3e4:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar12 = operator_new(uVar18 << 3);
        }
        puVar15 = (undefined8 *)((long)pvVar12 + ((long)uVar22 >> 3) * 8);
        *puVar15 = *(undefined8 *)(this + lVar19);
        if (0 < (long)uVar22) {
          memcpy(pvVar12,pvVar20,uVar22);
        }
        *(undefined8 **)(this + lVar14 + 0x4d8) = puVar15 + 1;
        *(void **)(this + lVar14 + 0x4d0) = pvVar12;
        *(void **)(this + lVar14 + 0x4e0) = (void *)((long)pvVar12 + uVar18 * 8);
        if (pvVar20 != (void *)0x0) {
          operator_delete(pvVar20);
        }
      }
      else {
        *puVar15 = *(undefined8 *)(this + lVar19);
        *(undefined8 **)(this + lVar14 + 0x4d8) = puVar15 + 1;
      }
      *(undefined8 *)(this + lVar19) = 0;
    }
    tVar8 = std::__ndk1::vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>>::
            insert<std::__ndk1::__wrap_iter<VkCommandBuffer_T**>>
                      ((vector<VkCommandBuffer_T*,std::__ndk1::allocator<VkCommandBuffer_T*>> *)
                       (this + lVar14 + 0x4d0),(__wrap_iter)*(undefined8 *)(this + lVar14 + 0x4d8),
                       (__wrap_iter)*(undefined8 *)(param_1 + lVar14 + 0x10),
                       (__wrap_iter)*(undefined8 *)(param_1 + lVar14 + 0x18));
    uVar18 = (ulong)tVar8;
    lVar14 = lVar14 + 0x18;
    lVar19 = lVar19 + 8;
    if (lVar14 == 0x48) {
      if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) {
        uVar18 = submitQueue(this,1,false,false);
      }
      if (*(int *)(param_1 + 0x1e8) != 0) {
        uVar22 = 0;
        puVar15 = (undefined8 *)(param_1 + 0x1f8);
        do {
          plVar3 = (long *)puVar15[-1];
          uVar4 = *puVar15;
          uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3);
          uVar10 = (**(code **)(*plVar3 + 0x28))(plVar3);
          uVar18 = (**(code **)(*(long *)this + 0x128))
                             (this,plVar3,0,0,0,0,uVar9,uVar10,uVar4,0,0,0,0);
          uVar22 = uVar22 + 1;
          puVar15 = puVar15 + 3;
        } while (uVar22 < *(uint *)(param_1 + 0x1e8));
      }
      return uVar18;
    }
  } while( true );
}


