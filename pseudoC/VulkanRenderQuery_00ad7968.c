// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanRenderQuery
// Entry Point: 00ad7968
// Size: 56 bytes
// Signature: undefined __thiscall VulkanRenderQuery(VulkanRenderQuery * this, RenderQueryDesc * param_1, VulkanRenderDevice * param_2)


/* VulkanRenderQuery::VulkanRenderQuery(RenderQueryDesc const&, VulkanRenderDevice*) */

void __thiscall
VulkanRenderQuery::VulkanRenderQuery
          (VulkanRenderQuery *this,RenderQueryDesc *param_1,VulkanRenderDevice *param_2)

{
  undefined4 uVar1;
  
  *(VulkanRenderDevice **)(this + 0x10) = param_2;
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined2 *)(this + 0x38) = 0x101;
  *(undefined ***)this = &PTR__VulkanRenderQuery_00fe6ba0;
  return;
}


