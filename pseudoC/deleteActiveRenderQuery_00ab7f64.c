// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteActiveRenderQuery
// Entry Point: 00ab7f64
// Size: 24 bytes
// Signature: undefined __thiscall deleteActiveRenderQuery(VulkanRenderDevice * this, QUERY_TYPE param_1, uint param_2, uint param_3)


/* VulkanRenderDevice::deleteActiveRenderQuery(VulkanRenderDevice::QUERY_TYPE, unsigned int,
   unsigned int) */

void __thiscall
VulkanRenderDevice::deleteActiveRenderQuery
          (VulkanRenderDevice *this,QUERY_TYPE param_1,uint param_2,uint param_3)

{
  *(undefined8 *)
   (*(long *)(this + (ulong)param_1 * 0x30 + (ulong)param_3 * 0x30 + 0x568) + (ulong)param_2 * 8) =
       0;
  return;
}


