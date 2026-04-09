// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ApplicationDesc
// Entry Point: 006e2b5c
// Size: 248 bytes
// Signature: undefined __thiscall ApplicationDesc(ApplicationDesc * this)


/* ApplicationDesc::ApplicationDesc() */

void __thiscall ApplicationDesc::ApplicationDesc(ApplicationDesc *this)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  puVar1 = (undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x28) = 0;
  *puVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 006e2ba4 to 006e2bf3 has its CatchHandler @ 006e2c54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)puVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38),(basic_string *)puVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x50));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x68));
  *(undefined **)(this + 0x88) = &DAT_0050a39f;
  *(undefined2 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined2 *)(this + 0xa0) = 0x101;
  this[0x90] = (ApplicationDesc)0x0;
  *(undefined4 *)(this + 0xa4) = 0x42700000;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa8] = (ApplicationDesc)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (ApplicationDesc)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0x1ffffffff;
  this[200] = (ApplicationDesc)0x0;
  return;
}


