// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureObjectPs
// Entry Point: 00acf0e0
// Size: 16 bytes
// Signature: undefined __thiscall setTextureObjectPs(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2)


/* VulkanCommandBuffer::setTextureObjectPs(unsigned int, ITextureObject*) */

void __thiscall
VulkanCommandBuffer::setTextureObjectPs
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2)

{
  setTextureObject(this,param_1,param_2,1,0xffffffff,false);
  return;
}


