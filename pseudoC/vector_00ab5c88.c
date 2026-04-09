// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ab5c88
// Size: 164 bytes
// Signature: undefined __thiscall vector(vector<VkQueueFamilyProperties,std::__ndk1::allocator<VkQueueFamilyProperties>> * this, ulong param_1)


/* std::__ndk1::vector<VkQueueFamilyProperties, std::__ndk1::allocator<VkQueueFamilyProperties>
   >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<VkQueueFamilyProperties,std::__ndk1::allocator<VkQueueFamilyProperties>>::vector
          (vector<VkQueueFamilyProperties,std::__ndk1::allocator<VkQueueFamilyProperties>> *this,
          ulong param_1)

{
  void *__s;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* try { // try from 00ab5d24 to 00ab5d2b has its CatchHandler @ 00ab5d2c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00ab5cc8 to 00ab5ccf has its CatchHandler @ 00ab5d2c */
    __s = operator_new(param_1 * 0x18);
    *(void **)this = __s;
    __n = ((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    *(void **)(this + 0x10) = (void *)((long)__s + param_1 * 0x18);
    memset(__s,0,__n);
    *(size_t *)(this + 8) = (long)__s + __n;
  }
  return;
}


