// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthStencilState
// Entry Point: 00ad01f8
// Size: 28 bytes
// Signature: undefined __thiscall setDepthStencilState(VulkanCommandBuffer * this, IDepthStencilState * param_1)


/* VulkanCommandBuffer::setDepthStencilState(IDepthStencilState*) */

void __thiscall
VulkanCommandBuffer::setDepthStencilState(VulkanCommandBuffer *this,IDepthStencilState *param_1)

{
  *(IDepthStencilState **)(this + 0xd0) = param_1;
  *(ulong *)(this + 0x5f8) =
       *(ulong *)(this + 0x5f8) & 0xfffffffe3fffffff | (ulong)*(uint *)(param_1 + 8) << 0x1e;
  return;
}


