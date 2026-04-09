// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 008ce44c
// Size: 44 bytes
// Signature: undefined __thiscall resize(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> * this, ulong param_1)


/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::resize(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::resize
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 2;
  }
  return;
}


