// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ab601c
// Size: 164 bytes
// Signature: undefined __thiscall vector(vector<VkDeviceQueueCreateInfo,std::__ndk1::allocator<VkDeviceQueueCreateInfo>> * this, ulong param_1)


/* std::__ndk1::vector<VkDeviceQueueCreateInfo, std::__ndk1::allocator<VkDeviceQueueCreateInfo>
   >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<VkDeviceQueueCreateInfo,std::__ndk1::allocator<VkDeviceQueueCreateInfo>>::vector
          (vector<VkDeviceQueueCreateInfo,std::__ndk1::allocator<VkDeviceQueueCreateInfo>> *this,
          ulong param_1)

{
  size_t __n;
  void *__s;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (0x666666666666666 < param_1) {
                    /* try { // try from 00ab60b8 to 00ab60bf has its CatchHandler @ 00ab60c0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00ab605c to 00ab6063 has its CatchHandler @ 00ab60c0 */
    __s = operator_new(param_1 * 0x28);
    *(void **)this = __s;
    __n = ((param_1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    *(void **)(this + 0x10) = (void *)((long)__s + param_1 * 0x28);
    memset(__s,0,__n);
    *(size_t *)(this + 8) = (long)__s + __n;
  }
  return;
}


