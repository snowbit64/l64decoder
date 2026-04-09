// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 0072df40
// Size: 164 bytes
// Signature: undefined __thiscall resize(deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>> * this, ulong param_1)


/* std::__ndk1::deque<std::__ndk1::pair<unsigned short, unsigned short>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned short, unsigned short> > >::resize(unsigned
   long) */

void __thiscall
std::__ndk1::
deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
::resize(deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x28);
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    if (param_1 == 0) {
      __erase_to_end((__deque_iterator)this);
      return;
    }
    __erase_to_end((__deque_iterator)this);
    return;
  }
  return;
}


