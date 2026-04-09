// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureObject
// Entry Point: 00ab71a4
// Size: 92 bytes
// Signature: undefined __thiscall createTextureObject(VulkanRenderDevice * this, ICommandBuffer * param_1, TextureObjectDesc * param_2)


/* VulkanRenderDevice::createTextureObject(ICommandBuffer*, TextureObjectDesc const&) */

VulkanTextureObject * __thiscall
VulkanRenderDevice::createTextureObject
          (VulkanRenderDevice *this,ICommandBuffer *param_1,TextureObjectDesc *param_2)

{
  VulkanTextureObject *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanTextureObject *)operator_new(0x160);
                    /* try { // try from 00ab71d0 to 00ab71db has its CatchHandler @ 00ab7200 */
  VulkanTextureObject::VulkanTextureObject(this_00,this,false);
  VulkanTextureObject::init(this_00,(VulkanCommandBuffer *)param_1,param_2);
  return this_00;
}


