// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindComputeProgram
// Entry Point: 00aceb10
// Size: 12 bytes
// Signature: undefined __thiscall bindComputeProgram(VulkanCommandBuffer * this, IProgramObject * param_1)


/* non-virtual thunk to VulkanCommandBuffer::bindComputeProgram(IProgramObject*) */

void __thiscall
VulkanCommandBuffer::bindComputeProgram(VulkanCommandBuffer *this,IProgramObject *param_1)

{
  bindProgram(this + -8,param_1,1);
  return;
}


