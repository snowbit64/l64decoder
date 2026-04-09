// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addChar
// Entry Point: 006d6060
// Size: 92 bytes
// Signature: undefined __thiscall addChar(Console * this, uint param_1, uint param_2, short param_3)


/* Console::addChar(unsigned int, unsigned int, short) */

bool __thiscall Console::addChar(Console *this,uint param_1,uint param_2,short param_3)

{
  if ((ushort)(param_3 - 0x20U) < 0x5f) {
    *(undefined4 *)(this + 0x108) = 0xffffffff;
    *(undefined4 *)(this + 0xb0) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    insert((ulong)(this + 0x80),(ulong)*(uint *)(this + 0xe8),'\x01');
    *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
  }
  return (ushort)(param_3 - 0x20U) < 0x5f;
}


