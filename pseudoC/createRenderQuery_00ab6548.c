// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderQuery
// Entry Point: 00ab6548
// Size: 68 bytes
// Signature: undefined __thiscall createRenderQuery(VulkanRenderDevice * this, RenderQueryDesc * param_1)


/* VulkanRenderDevice::createRenderQuery(RenderQueryDesc const&) */

VulkanRenderQuery * __thiscall
VulkanRenderDevice::createRenderQuery(VulkanRenderDevice *this,RenderQueryDesc *param_1)

{
  VulkanRenderQuery *this_00;
  
  this_00 = (VulkanRenderQuery *)operator_new(0x40);
                    /* try { // try from 00ab656c to 00ab6577 has its CatchHandler @ 00ab658c */
  VulkanRenderQuery::VulkanRenderQuery(this_00,param_1,this);
  return this_00;
}


