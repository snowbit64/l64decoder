// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSamplerObject
// Entry Point: 00ab7214
// Size: 80 bytes
// Signature: undefined __thiscall createSamplerObject(VulkanRenderDevice * this, SamplerObjectDesc * param_1)


/* VulkanRenderDevice::createSamplerObject(SamplerObjectDesc const&) */

VulkanSamplerObject * __thiscall
VulkanRenderDevice::createSamplerObject(VulkanRenderDevice *this,SamplerObjectDesc *param_1)

{
  VulkanSamplerObject *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanSamplerObject *)operator_new(0x30);
                    /* try { // try from 00ab723c to 00ab7243 has its CatchHandler @ 00ab7264 */
  VulkanSamplerObject::VulkanSamplerObject(this_00,this);
  VulkanSamplerObject::init(this_00,param_1);
  return this_00;
}


