// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumClasses
// Entry Point: 007241f0
// Size: 20 bytes
// Signature: undefined __thiscall setNumClasses(DynamicAvoidance * this, uint param_1)


/* DynamicAvoidance::setNumClasses(unsigned int) */

void __thiscall DynamicAvoidance::setNumClasses(DynamicAvoidance *this,uint param_1)

{
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
            ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x60),
             (ulong)(param_1 + param_1 * param_1 >> 1),false);
  return;
}


