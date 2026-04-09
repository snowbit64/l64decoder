// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00ad5e34
// Size: 44 bytes
// Signature: undefined __thiscall resize(vector<VkPresentModeKHR,std::__ndk1::allocator<VkPresentModeKHR>> * this, ulong param_1)


/* std::__ndk1::vector<VkPresentModeKHR, std::__ndk1::allocator<VkPresentModeKHR> >::resize(unsigned
   long) */

void __thiscall
std::__ndk1::vector<VkPresentModeKHR,std::__ndk1::allocator<VkPresentModeKHR>>::resize
          (vector<VkPresentModeKHR,std::__ndk1::allocator<VkPresentModeKHR>> *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 4;
  }
  return;
}


