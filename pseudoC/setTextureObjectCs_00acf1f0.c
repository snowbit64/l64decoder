// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureObjectCs
// Entry Point: 00acf1f0
// Size: 16 bytes
// Signature: undefined __thiscall setTextureObjectCs(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2, uint param_3)


/* VulkanCommandBuffer::setTextureObjectCs(unsigned int, ITextureObject*, unsigned int) */

void __thiscall
VulkanCommandBuffer::setTextureObjectCs
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2,uint param_3)

{
  setTextureObject(this,param_1,param_2,2,param_3,false);
  return;
}


