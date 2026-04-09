// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSharedSamplerDesc
// Entry Point: 00ab6f38
// Size: 76 bytes
// Signature: undefined __thiscall getSharedSamplerDesc(VulkanRenderDevice * this, VkSampler_T * * param_1)


/* VulkanRenderDevice::getSharedSamplerDesc(VkSampler_T* const&) const */

VulkanRenderDevice * __thiscall
VulkanRenderDevice::getSharedSamplerDesc(VulkanRenderDevice *this,VkSampler_T **param_1)

{
  VulkanRenderDevice *pVVar1;
  VulkanRenderDevice *pVVar2;
  VkSampler_T *pVVar3;
  VulkanRenderDevice *pVVar4;
  
  pVVar4 = *(VulkanRenderDevice **)(this + 0x4e8);
  pVVar1 = this + 0x4e8;
  if (pVVar4 != (VulkanRenderDevice *)0x0) {
    pVVar3 = *param_1;
    pVVar2 = pVVar1;
    do {
      if (*(VkSampler_T **)(pVVar4 + 0x20) >= pVVar3) {
        pVVar2 = pVVar4;
      }
      pVVar4 = *(VulkanRenderDevice **)
                (pVVar4 + (ulong)(*(VkSampler_T **)(pVVar4 + 0x20) < pVVar3) * 8);
    } while (pVVar4 != (VulkanRenderDevice *)0x0);
    if ((pVVar2 != pVVar1) && (*(VkSampler_T **)(pVVar2 + 0x20) <= pVVar3)) goto LAB_00ab6f7c;
  }
  pVVar2 = pVVar1;
LAB_00ab6f7c:
  return pVVar2 + 0x28;
}


