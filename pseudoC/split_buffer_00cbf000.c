// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cbf000
// Size: 56 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::WindowSlider,
   std::__ndk1::allocator<CryptoPP::WindowSlider>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>&>
::~__split_buffer(__split_buffer<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>&>
                  *this)

{
  FUN_00cbf038(this,*(undefined8 *)(this + 8));
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


