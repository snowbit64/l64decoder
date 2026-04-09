// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ab811c
// Size: 180 bytes
// Signature: undefined __thiscall vector(vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>> * this, vector * param_1)


/* std::__ndk1::vector<VulkanProgramObject::DescriptorSetLayoutElement,
   std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>
   >::vector(std::__ndk1::vector<VulkanProgramObject::DescriptorSetLayoutElement,
   std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement> > const&) */

void __thiscall
std::__ndk1::
vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
::vector(vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
         *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if (0x1555555555555555 < (ulong)(((long)uVar1 >> 2) * -0x5555555555555555)) {
                    /* try { // try from 00ab81c8 to 00ab81cf has its CatchHandler @ 00ab81d0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00ab816c to 00ab816f has its CatchHandler @ 00ab81d0 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 2) * 4);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + (__n / 0xc) * 0xc);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


