// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOutputTextureCs
// Entry Point: 00acf434
// Size: 20 bytes
// Signature: undefined __thiscall setOutputTextureCs(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2, uint param_3)


/* non-virtual thunk to VulkanCommandBuffer::setOutputTextureCs(unsigned int, ITextureObject*,
   unsigned int) */

void __thiscall
VulkanCommandBuffer::setOutputTextureCs
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2,uint param_3)

{
  setTextureObject(this + -8,param_1,param_2,2,param_3,true);
  return;
}


