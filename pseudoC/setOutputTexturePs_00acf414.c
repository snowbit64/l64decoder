// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOutputTexturePs
// Entry Point: 00acf414
// Size: 16 bytes
// Signature: undefined __thiscall setOutputTexturePs(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2, uint param_3)


/* VulkanCommandBuffer::setOutputTexturePs(unsigned int, ITextureObject*, unsigned int) */

void __thiscall
VulkanCommandBuffer::setOutputTexturePs
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2,uint param_3)

{
  setTextureObject(this,param_1,param_2,1,param_3,true);
  return;
}


