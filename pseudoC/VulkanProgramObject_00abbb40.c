// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanProgramObject
// Entry Point: 00abbb40
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanProgramObject(VulkanProgramObject * this)


/* VulkanProgramObject::~VulkanProgramObject() */

void __thiscall VulkanProgramObject::~VulkanProgramObject(VulkanProgramObject *this)

{
  ~VulkanProgramObject(this);
  operator_delete(this);
  return;
}


