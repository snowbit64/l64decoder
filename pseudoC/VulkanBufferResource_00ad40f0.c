// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanBufferResource
// Entry Point: 00ad40f0
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanBufferResource(VulkanBufferResource * this)


/* VulkanBufferResource::~VulkanBufferResource() */

void __thiscall VulkanBufferResource::~VulkanBufferResource(VulkanBufferResource *this)

{
  ~VulkanBufferResource(this);
  operator_delete(this);
  return;
}


