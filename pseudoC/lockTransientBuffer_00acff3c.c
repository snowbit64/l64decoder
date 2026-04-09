// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockTransientBuffer
// Entry Point: 00acff3c
// Size: 384 bytes
// Signature: undefined __thiscall lockTransientBuffer(VulkanCommandBuffer * this, uint param_1, TRANSIENT_BUFFER_TYPE param_2, QUEUE_TYPE param_3, BufferInfo * param_4, uchar * * param_5)


/* VulkanCommandBuffer::lockTransientBuffer(unsigned int,
   VulkanCommandBuffer::TRANSIENT_BUFFER_TYPE, VulkanUtil::QUEUE_TYPE,
   VulkanResourceAllocator::BufferInfo*, unsigned char*&) */

void __thiscall
VulkanCommandBuffer::lockTransientBuffer
          (VulkanCommandBuffer *this,uint param_1,TRANSIENT_BUFFER_TYPE param_2,QUEUE_TYPE param_3,
          BufferInfo *param_4,uchar **param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Buffer *pBVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = (ulong)param_2 * 0x18 + (ulong)param_3 * 0x60;
  uVar7 = (ulong)param_2;
  uVar8 = (ulong)param_3;
  pBVar4 = *(Buffer **)(this + lVar6 + 0x120);
  if (pBVar4 != (Buffer *)0x0) {
    iVar5 = *(int *)(this + uVar7 * 0x18 + uVar8 * 0x60 + 0x128);
    if (iVar5 + param_1 < 0x200001) {
      lVar6 = *(long *)(this + uVar7 * 0x18 + uVar8 * 0x60 + 0x130);
      goto LAB_00ad0054;
    }
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),pBVar4,
               *(FenceStatus **)(this + uVar8 * 8 + 0x550));
  }
  pBVar4 = (Buffer *)
           VulkanResourceAllocator::createBuffer
                     (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),0x200000,
                      *(BUFFER_TYPE *)(this + uVar7 * 0x10 + 0xe4),
                      *(MEMORY_TYPE *)(this + uVar7 * 0x10 + 0xe8),param_3,0);
  *(Buffer **)(this + lVar6 + 0x120) = pBVar4;
  if (pBVar4 == (Buffer *)0x0) {
    pBVar4 = (Buffer *)
             VulkanResourceAllocator::createBuffer
                       (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),0x200000,
                        *(BUFFER_TYPE *)(this + uVar7 * 0x10 + 0xe4),
                        *(MEMORY_TYPE *)(this + uVar7 * 0x10 + 0xec),param_3,0);
    *(Buffer **)(this + lVar6 + 0x120) = pBVar4;
  }
  iVar5 = 0;
  lVar3 = uVar7 * 0x18 + uVar8 * 0x60;
  lVar6 = *(long *)(pBVar4 + 0x18);
  *(undefined4 *)(this + lVar3 + 0x128) = 0;
  *(long *)(this + lVar3 + 0x130) = lVar6;
LAB_00ad0054:
  iVar1 = *(int *)(pBVar4 + 0x20);
  iVar2 = *(int *)(this + uVar7 * 0x10 + 0xe0);
  *(undefined8 *)param_4 = *(undefined8 *)(pBVar4 + 8);
  *(int *)(param_4 + 0x18) = iVar5 + iVar1;
  *(uint *)(param_4 + 0x1c) = param_1;
  *param_5 = (uchar *)(lVar6 + (ulong)(uint)(iVar5 + iVar1));
  *(uint *)(this + uVar7 * 0x18 + uVar8 * 0x60 + 0x128) = ((param_1 + iVar2) - 1 & -iVar2) + iVar5;
  return;
}


