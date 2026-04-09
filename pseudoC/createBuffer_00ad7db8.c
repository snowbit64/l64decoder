// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBuffer
// Entry Point: 00ad7db8
// Size: 308 bytes
// Signature: undefined __cdecl createBuffer(VulkanRenderDevice * param_1, uint param_2, uint param_3, uint param_4, bool param_5, VkBuffer_T * * param_6, Allocation * * param_7)


/* VulkanUtil::createBuffer(VulkanRenderDevice*, unsigned int, unsigned int, unsigned int, bool,
   VkBuffer_T*&, VulkanMemoryAllocator::Allocation*&) */

void VulkanUtil::createBuffer
               (VulkanRenderDevice *param_1,uint param_2,uint param_3,uint param_4,bool param_5,
               VkBuffer_T **param_6,Allocation **param_7)

{
  long lVar1;
  Allocation *pAVar2;
  uint local_98 [2];
  uint local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = (ulong)param_2;
  local_80[0] = 0xc;
  local_78 = 0;
  local_70 = 0;
  local_5c = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = param_3;
  (*vkCreateBuffer)(*(undefined8 *)(param_1 + 0x18),local_80,0,param_6);
  (*vkGetBufferMemoryRequirements)(*(undefined8 *)(param_1 + 0x18),*param_6,local_98);
  pAVar2 = (Allocation *)
           VulkanMemoryAllocator::allocateBufferMemory
                     (*(VulkanMemoryAllocator **)(param_1 + 0x378),local_98[0],local_90,param_4,
                      param_5);
  *param_7 = pAVar2;
  if (pAVar2 == (Allocation *)0x0) {
    (*vkDestroyBuffer)(*(undefined8 *)(param_1 + 0x18),*param_6,0);
    *param_6 = (VkBuffer_T *)0x0;
  }
  else {
    (*vkBindBufferMemory)
              (*(undefined8 *)(param_1 + 0x18),*param_6,*(undefined8 *)(pAVar2 + 0x18),
               *(undefined4 *)(pAVar2 + 0x28));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pAVar2 != (Allocation *)0x0);
}


