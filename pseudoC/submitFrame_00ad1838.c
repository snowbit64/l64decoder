// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitFrame
// Entry Point: 00ad1838
// Size: 1024 bytes
// Signature: undefined submitFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::submitFrame() */

void VulkanCommandBuffer::submitFrame(void)

{
  long lVar1;
  int iVar2;
  VulkanCommandBuffer *in_x0;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  undefined4 *puStack_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x1f0) == 0) {
    lVar3 = *(long *)(in_x0 + 0x578);
    if (lVar3 != *(long *)(in_x0 + 0x570)) {
      uVar6 = 0;
      lVar3 = *(long *)(in_x0 + 0x570);
      do {
        iVar2 = FUN_00f27700(0xffffffff,*(long *)(lVar3 + uVar6 * 8) + 8);
        if (iVar2 < 2) {
          VulkanResourceAllocator::releaseDescriptorPool
                    (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                     *(DescriptorPool **)(*(long *)(in_x0 + 0x570) + uVar6 * 8),
                     *(FenceStatus **)(in_x0 + 0x550));
        }
        uVar6 = (ulong)((int)uVar6 + 1);
        lVar3 = *(long *)(in_x0 + 0x570);
      } while (uVar6 < (ulong)(*(long *)(in_x0 + 0x578) - lVar3 >> 3));
    }
    lVar4 = 0;
    lVar5 = 0x168;
    *(long *)(in_x0 + 0x578) = lVar3;
    do {
      if (*(Buffer **)(in_x0 + lVar5 + -0x48) != (Buffer *)0x0) {
        VulkanResourceAllocator::releaseBuffer
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                   *(Buffer **)(in_x0 + lVar5 + -0x48),*(FenceStatus **)(in_x0 + lVar4 * 8 + 0x550))
        ;
        *(undefined8 *)(in_x0 + lVar5 + -0x48) = 0;
      }
      if (*(Buffer **)(in_x0 + lVar5 + -0x30) != (Buffer *)0x0) {
        VulkanResourceAllocator::releaseBuffer
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                   *(Buffer **)(in_x0 + lVar5 + -0x30),*(FenceStatus **)(in_x0 + lVar4 * 8 + 0x550))
        ;
        *(undefined8 *)(in_x0 + lVar5 + -0x30) = 0;
      }
      if (*(Buffer **)(in_x0 + lVar5 + -0x18) != (Buffer *)0x0) {
        VulkanResourceAllocator::releaseBuffer
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                   *(Buffer **)(in_x0 + lVar5 + -0x18),*(FenceStatus **)(in_x0 + lVar4 * 8 + 0x550))
        ;
        *(undefined8 *)(in_x0 + lVar5 + -0x18) = 0;
      }
      if (*(Buffer **)(in_x0 + lVar5) != (Buffer *)0x0) {
        VulkanResourceAllocator::releaseBuffer
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                   *(Buffer **)(in_x0 + lVar5),*(FenceStatus **)(in_x0 + lVar4 * 8 + 0x550));
        *(undefined8 *)(in_x0 + lVar5) = 0;
      }
      if (*(long *)(in_x0 + lVar4 * 8 + 0x4a8) != 0) {
        iVar2 = FUN_00f27700(0xffffffff,*(long *)(in_x0 + lVar4 * 8 + 0x4a8) + 8);
        if (iVar2 < 2) {
          VulkanResourceAllocator::releaseCommandPool
                    (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                     *(CommandPool **)(in_x0 + lVar4 * 8 + 0x4a8),(QUEUE_TYPE)lVar4,
                     *(FenceStatus **)(in_x0 + lVar4 * 8 + 0x550));
        }
        *(undefined8 *)(in_x0 + lVar4 * 8 + 0x4a8) = 0;
      }
      submitQueue(in_x0,(QUEUE_TYPE)lVar4,lVar4 == 0,false);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar4 != 2);
    if ((in_x0[0xa59] != (VulkanCommandBuffer)0x0) && (*(long *)(in_x0 + 0xa80) != 0)) {
      local_68 = *(long *)(in_x0 + 0x5f0);
      local_4c = 0x10000;
      local_98[0] = 4;
      local_80 = local_68 + 0x18;
      puStack_78 = &local_4c;
      local_88 = 1;
      local_70 = 1;
      local_58 = local_68 + 0x10;
      local_60 = 1;
      local_90 = 0;
      (*vkQueueSubmit)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x448),1,local_98,0);
    }
    VulkanRenderDevice::onQueriesSubmitted();
    goto LAB_00ad1c0c;
  }
  Mutex::enterCriticalSection();
  in_x0[0x560] = (VulkanCommandBuffer)0x0;
  in_x0[0x562] = (VulkanCommandBuffer)0x0;
  if (*(long *)(in_x0 + 0x4a8) != 0) {
    iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(0);
    if ((((iVar2 == 0) && (*(long *)(in_x0 + 0x4b8) != 0)) ||
        ((iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(1), iVar2 == 0 &&
         (*(long *)(in_x0 + 0x4c0) != 0)))) ||
       ((iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(2), iVar2 == 0 &&
        (*(long *)(in_x0 + 0x4c8) != 0)))) {
      in_x0[0x560] = (VulkanCommandBuffer)0x1;
    }
    else if (in_x0[0x560] == (VulkanCommandBuffer)0x0) {
      iVar2 = FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0x4a8) + 8);
      if (iVar2 < 2) {
        VulkanResourceAllocator::releaseCommandPool
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                   *(CommandPool **)(in_x0 + 0x4a8),0,*(FenceStatus **)(in_x0 + 0x550));
      }
      *(undefined8 *)(in_x0 + 0x4a8) = 0;
    }
  }
  *(undefined2 *)(in_x0 + 0x561) = 0;
  if (*(long *)(in_x0 + 0x4b0) == 0) {
LAB_00ad1b90:
    lVar3 = *(long *)(in_x0 + 0x578);
    if (lVar3 != *(long *)(in_x0 + 0x570)) {
      uVar6 = 0;
      lVar3 = *(long *)(in_x0 + 0x570);
      do {
        iVar2 = FUN_00f27700(0xffffffff,*(long *)(lVar3 + uVar6 * 8) + 8);
        if (iVar2 < 2) {
          VulkanResourceAllocator::releaseDescriptorPool
                    (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                     *(DescriptorPool **)(*(long *)(in_x0 + 0x570) + uVar6 * 8),
                     *(FenceStatus **)(in_x0 + uVar6 * 8 + 0x550));
        }
        uVar6 = (ulong)((int)uVar6 + 1);
        lVar3 = *(long *)(in_x0 + 0x570);
      } while (uVar6 < (ulong)(*(long *)(in_x0 + 0x578) - lVar3 >> 3));
    }
    *(long *)(in_x0 + 0x578) = lVar3;
  }
  else {
    iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(0);
    if ((((iVar2 == 1) && (*(long *)(in_x0 + 0x4b8) != 0)) ||
        ((iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(1), iVar2 == 1 &&
         (*(long *)(in_x0 + 0x4c0) != 0)))) ||
       ((iVar2 = VulkanUtil::getQueueTypeByCommandBufferType(2), iVar2 == 1 &&
        (*(long *)(in_x0 + 0x4c8) != 0)))) {
      *(undefined2 *)(in_x0 + 0x561) = 0x101;
    }
    else {
      if (in_x0[0x561] == (VulkanCommandBuffer)0x0) {
        iVar2 = FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0x4b0) + 8);
        if (iVar2 < 2) {
          VulkanResourceAllocator::releaseCommandPool
                    (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),
                     *(CommandPool **)(in_x0 + 0x4b0),1,*(FenceStatus **)(in_x0 + 0x558));
        }
        *(undefined8 *)(in_x0 + 0x4b0) = 0;
      }
      if (in_x0[0x562] == (VulkanCommandBuffer)0x0) goto LAB_00ad1b90;
    }
  }
  Mutex::leaveCriticalSection();
LAB_00ad1c0c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


