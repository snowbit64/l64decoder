// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ab5c00
// Size: 104 bytes
// Signature: undefined __thiscall vector(vector<VkPhysicalDevice_T*,std::__ndk1::allocator<VkPhysicalDevice_T*>> * this, ulong param_1)


/* std::__ndk1::vector<VkPhysicalDevice_T*, std::__ndk1::allocator<VkPhysicalDevice_T*>
   >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<VkPhysicalDevice_T*,std::__ndk1::allocator<VkPhysicalDevice_T*>>::vector
          (vector<VkPhysicalDevice_T*,std::__ndk1::allocator<VkPhysicalDevice_T*>> *this,
          ulong param_1)

{
  void *__s;
  ulong __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (param_1 >> 0x3d != 0) {
                    /* try { // try from 00ab5c60 to 00ab5c67 has its CatchHandler @ 00ab5c68 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 8;
                    /* try { // try from 00ab5c2c to 00ab5c33 has its CatchHandler @ 00ab5c68 */
    __s = operator_new(__n);
    *(void **)this = __s;
    *(void **)(this + 0x10) = (void *)((long)__s + __n);
    memset(__s,0,__n);
    *(void **)(this + 8) = (void *)((long)__s + __n);
  }
  return;
}


