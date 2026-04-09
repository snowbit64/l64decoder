// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSemaphore
// Entry Point: 00ac9798
// Size: 120 bytes
// Signature: undefined createSemaphore(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::createSemaphore() */

void VulkanCommandBuffer::createSemaphore(void)

{
  long lVar1;
  long in_x0;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48[0] = 9;
  local_40 = 0;
  local_38 = 0;
  (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_48,0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


