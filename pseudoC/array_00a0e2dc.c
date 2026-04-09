// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~array
// Entry Point: 00a0e2dc
// Size: 124 bytes
// Signature: undefined __thiscall ~array(array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul> * this)


/* std::__ndk1::array<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, 4ul>::~array() */

void __thiscall
std::__ndk1::
array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>
::~array(array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>
         *this)

{
  array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>
  aVar1;
  
  if (((byte)this[0x48] & 1) == 0) {
    aVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    aVar1 = this[0x30];
  }
  if (((byte)aVar1 & 1) == 0) {
    aVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    aVar1 = this[0x18];
  }
  if (((byte)aVar1 & 1) == 0) {
    aVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    aVar1 = *this;
  }
  if (((byte)aVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


