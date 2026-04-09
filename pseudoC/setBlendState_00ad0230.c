// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlendState
// Entry Point: 00ad0230
// Size: 28 bytes
// Signature: undefined __thiscall setBlendState(VulkanCommandBuffer * this, IBlendState * param_1)


/* VulkanCommandBuffer::setBlendState(IBlendState*) */

void __thiscall VulkanCommandBuffer::setBlendState(VulkanCommandBuffer *this,IBlendState *param_1)

{
  *(IBlendState **)(this + 0xd8) = param_1;
  *(ulong *)(this + 0x5f8) =
       *(ulong *)(this + 0x5f8) & 0xffffffc1ffffffff | (ulong)*(uint *)(param_1 + 8) << 0x21;
  return;
}


