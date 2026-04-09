// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: underflow
// Entry Point: 006d19c4
// Size: 80 bytes
// Signature: undefined underflow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::underflow() */

ulong std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::underflow(void)

{
  long in_x0;
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(in_x0 + 0x30);
  pbVar1 = *(byte **)(in_x0 + 0x58);
  if (*(byte **)(in_x0 + 0x58) < pbVar2) {
    *(byte **)(in_x0 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(in_x0 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(in_x0 + 0x20);
    if (*(byte **)(in_x0 + 0x20) < pbVar1) {
      *(byte **)(in_x0 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(in_x0 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(in_x0 + 0x18);
    }
  }
  return 0xffffffff;
}


