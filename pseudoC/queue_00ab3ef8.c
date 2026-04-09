// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~queue
// Entry Point: 00ab3ef8
// Size: 4 bytes
// Signature: undefined __thiscall ~queue(queue<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::deque<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>> * this)


/* std::__ndk1::queue<std::__ndk1::pair<VkImageView_T*, unsigned int>,
   std::__ndk1::deque<std::__ndk1::pair<VkImageView_T*, unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*, unsigned int> > > >::~queue() */

void __thiscall
std::__ndk1::
queue<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::deque<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>>
::~queue(queue<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::deque<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>>
         *this)

{
  __deque_base<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
  ::~__deque_base((__deque_base<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
                   *)this);
  return;
}


