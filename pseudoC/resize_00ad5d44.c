// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00ad5d44
// Size: 44 bytes
// Signature: undefined __thiscall resize(vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> * this, ulong param_1)


/* std::__ndk1::vector<VkImageView_T*, std::__ndk1::allocator<VkImageView_T*> >::resize(unsigned
   long) */

void __thiscall
std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::resize
          (vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 8;
  }
  return;
}


