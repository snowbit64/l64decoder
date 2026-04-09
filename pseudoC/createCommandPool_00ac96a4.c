// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCommandPool
// Entry Point: 00ac96a4
// Size: 120 bytes
// Signature: undefined __thiscall createCommandPool(VulkanCommandBuffer * this, uint param_1)


/* VulkanCommandBuffer::createCommandPool(unsigned int) */

void __thiscall VulkanCommandBuffer::createCommandPool(VulkanCommandBuffer *this,uint param_1)

{
  long lVar1;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_48[0] = 0x27;
  local_40 = 0;
  uStack_34 = param_1;
  (*vkCreateCommandPool)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_48,0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


