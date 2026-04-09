// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DescriptorSetLayoutInfo
// Entry Point: 00abb760
// Size: 64 bytes
// Signature: undefined __thiscall ~DescriptorSetLayoutInfo(DescriptorSetLayoutInfo * this)


/* VulkanProgramObject::DescriptorSetLayoutInfo::~DescriptorSetLayoutInfo() */

void __thiscall
VulkanProgramObject::DescriptorSetLayoutInfo::~DescriptorSetLayoutInfo
          (DescriptorSetLayoutInfo *this)

{
  void *pvVar1;
  
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


