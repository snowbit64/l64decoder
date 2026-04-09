// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIndexBuffer
// Entry Point: 00acec08
// Size: 92 bytes
// Signature: undefined __thiscall setIndexBuffer(VulkanCommandBuffer * this, IIndexBuffer * param_1)


/* VulkanCommandBuffer::setIndexBuffer(IIndexBuffer*) */

void __thiscall VulkanCommandBuffer::setIndexBuffer(VulkanCommandBuffer *this,IIndexBuffer *param_1)

{
  undefined8 *puVar1;
  
  *(IIndexBuffer **)(this + 0xb0) = param_1;
  if (param_1 != (IIndexBuffer *)0x0) {
    puVar1 = (undefined8 *)VulkanIndexBuffer::acquireBufferForRendering();
                    /* WARNING: Could not recover jumptable at 0x00acec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*vkCmdBindIndexBuffer)
              (*(undefined8 *)(this + 0x4b8),*puVar1,*(undefined4 *)(puVar1 + 3),
               *(undefined *)(*(long *)(this + 0xb0) + 0x14));
    return;
  }
  return;
}


