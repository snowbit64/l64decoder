// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanSamplerObject
// Entry Point: 00aba4ac
// Size: 28 bytes
// Signature: undefined __thiscall VulkanSamplerObject(VulkanSamplerObject * this, VulkanRenderDevice * param_1)


/* VulkanSamplerObject::VulkanSamplerObject(VulkanRenderDevice*) */

void __thiscall
VulkanSamplerObject::VulkanSamplerObject(VulkanSamplerObject *this,VulkanRenderDevice *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(VulkanRenderDevice **)(this + 0x20) = param_1;
  *(undefined ***)this = &PTR__VulkanSamplerObject_00fe6198;
  *(undefined8 *)(this + 8) = 0;
  return;
}


