// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startRenderPass
// Entry Point: 00acd6c0
// Size: 132 bytes
// Signature: undefined startRenderPass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::startRenderPass() */

void VulkanCommandBuffer::startRenderPass(void)

{
  VulkanCommandBuffer *in_x0;
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = acquireVkCommandBuffer(in_x0,0);
  (*vkCmdBeginRenderPass)(uVar1,in_x0 + 0x1f8,0);
  if ((*(int *)(in_x0 + 0x1f0) == 0) && (*(int *)(in_x0 + 0x360) != 0)) {
    uVar2 = 0;
    puVar3 = (uint *)(in_x0 + 0x378);
    do {
      VulkanTextureObject::setLayout
                (*(VulkanTextureObject **)(puVar3 + -4),puVar3[-2],puVar3[-1],*puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 6;
    } while (uVar2 < *(uint *)(in_x0 + 0x360));
  }
  in_x0[0x460] = (VulkanCommandBuffer)0x1;
  return;
}


