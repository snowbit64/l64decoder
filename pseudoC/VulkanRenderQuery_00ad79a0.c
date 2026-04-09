// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanRenderQuery
// Entry Point: 00ad79a0
// Size: 128 bytes
// Signature: undefined __thiscall ~VulkanRenderQuery(VulkanRenderQuery * this)


/* VulkanRenderQuery::~VulkanRenderQuery() */

void __thiscall VulkanRenderQuery::~VulkanRenderQuery(VulkanRenderQuery *this)

{
  *(undefined ***)this = &PTR__VulkanRenderQuery_00fe6ba0;
  if ((*(uint *)(this + 0x18) != 0xffffffff) && (*(int *)(this + 8) - 1U < 2)) {
                    /* try { // try from 00ad79e4 to 00ad7a13 has its CatchHandler @ 00ad7a20 */
    VulkanRenderDevice::deleteActiveRenderQuery
              (*(VulkanRenderDevice **)(this + 0x10),0,*(uint *)(this + 0x18),*(uint *)(this + 0x20)
              );
  }
  if ((*(uint *)(this + 0x1c) != 0xffffffff) && (*(int *)(this + 8) == 2)) {
    VulkanRenderDevice::deleteActiveRenderQuery
              (*(VulkanRenderDevice **)(this + 0x10),0,*(uint *)(this + 0x1c),*(uint *)(this + 0x20)
              );
  }
  return;
}


