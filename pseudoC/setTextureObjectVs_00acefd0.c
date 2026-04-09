// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureObjectVs
// Entry Point: 00acefd0
// Size: 16 bytes
// Signature: undefined __thiscall setTextureObjectVs(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2)


/* VulkanCommandBuffer::setTextureObjectVs(unsigned int, ITextureObject*) */

void __thiscall
VulkanCommandBuffer::setTextureObjectVs
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2)

{
  setTextureObject(this,param_1,param_2,0,0xffffffff,false);
  return;
}


