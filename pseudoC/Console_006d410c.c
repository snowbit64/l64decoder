// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Console
// Entry Point: 006d410c
// Size: 336 bytes
// Signature: undefined __thiscall Console(Console * this)


/* Console::Console() */

void __thiscall Console::Console(Console *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR__Console_00fd9088;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Console **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
                    /* try { // try from 006d41ac to 006d41b7 has its CatchHandler @ 006d425c */
  Mutex::Mutex((Mutex *)(this + 0x130),true);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0xb0) = 0x1700000000;
                    /* try { // try from 006d41c8 to 006d423b has its CatchHandler @ 006d4264 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x98));
  *(undefined4 *)(this + 0xe8) = 0;
  this[0xba] = (Console)0x0;
  *(undefined2 *)(this + 0xb8) = 0x100;
  *(undefined4 *)(this + 0xcc) = 0x3ecccccd;
  *(undefined8 *)(this + 0xc4) = 0x447a000000000000;
  *(undefined8 *)(this + 0xbc) = 0x43fa000000000000;
  *(undefined4 *)(this + 0x58) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0xf0));
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x80));
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  loadHistoryFromDisk();
  return;
}


