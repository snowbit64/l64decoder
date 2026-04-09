// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00ab60e0
// Size: 104 bytes
// Signature: undefined __thiscall vector(vector<VkPhysicalDeviceFragmentShadingRateKHR,std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR>> * this, ulong param_1)


/* std::__ndk1::vector<VkPhysicalDeviceFragmentShadingRateKHR,
   std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR> >::vector(unsigned long) */

void __thiscall
std::__ndk1::
vector<VkPhysicalDeviceFragmentShadingRateKHR,std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR>>
::vector(vector<VkPhysicalDeviceFragmentShadingRateKHR,std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR>>
         *this,ulong param_1)

{
  void *__s;
  ulong __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (param_1 >> 0x3b != 0) {
                    /* try { // try from 00ab6140 to 00ab6147 has its CatchHandler @ 00ab6148 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 0x20;
                    /* try { // try from 00ab610c to 00ab6113 has its CatchHandler @ 00ab6148 */
    __s = operator_new(__n);
    *(void **)this = __s;
    *(void **)(this + 0x10) = (void *)((long)__s + __n);
    memset(__s,0,__n);
    *(void **)(this + 8) = (void *)((long)__s + __n);
  }
  return;
}


