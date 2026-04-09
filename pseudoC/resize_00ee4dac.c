// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00ee4dac
// Size: 44 bytes
// Signature: undefined __thiscall resize(vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>> * this, ulong param_1)


/* std::__ndk1::vector<Luau::Compile::Constant, std::__ndk1::allocator<Luau::Compile::Constant>
   >::resize(unsigned long) */

void __thiscall
std::__ndk1::vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>>::resize
          (vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>> *this,
          ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 4;
  if (uVar1 < param_1) {
    __append(this,param_1 - uVar1);
    return;
  }
  if (param_1 < uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x10;
  }
  return;
}


