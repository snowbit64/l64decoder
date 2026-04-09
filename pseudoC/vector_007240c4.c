// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~vector
// Entry Point: 007240c4
// Size: 16 bytes
// Signature: undefined __thiscall ~vector(vector<bool,std::__ndk1::allocator<bool>> * this)


/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::~vector() */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::~vector
          (vector<bool,std::__ndk1::allocator<bool>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


