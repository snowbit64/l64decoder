// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getQueryPool
// Entry Point: 00ab7f48
// Size: 28 bytes
// Signature: undefined __thiscall getQueryPool(VulkanRenderDevice * this, QUERY_TYPE param_1)


/* VulkanRenderDevice::getQueryPool(VulkanRenderDevice::QUERY_TYPE) */

undefined8 __thiscall VulkanRenderDevice::getQueryPool(VulkanRenderDevice *this,QUERY_TYPE param_1)

{
  return *(undefined8 *)
          (this + (ulong)param_1 * 0x30 + ((ulong)*(uint *)(this + 0x3b4) & 1) * 0x30 + 0x558);
}


