// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRasterizerState
// Entry Point: 00ad0214
// Size: 28 bytes
// Signature: undefined __thiscall setRasterizerState(VulkanCommandBuffer * this, IRasterizerState * param_1)


/* VulkanCommandBuffer::setRasterizerState(IRasterizerState*) */

void __thiscall
VulkanCommandBuffer::setRasterizerState(VulkanCommandBuffer *this,IRasterizerState *param_1)

{
  *(IRasterizerState **)(this + 200) = param_1;
  *(ulong *)(this + 0x5f8) =
       *(ulong *)(this + 0x5f8) & 0xffffffffc1ffffff | (ulong)*(uint *)(param_1 + 8) << 0x19;
  return;
}


