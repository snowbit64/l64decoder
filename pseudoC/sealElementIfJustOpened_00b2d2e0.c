// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sealElementIfJustOpened
// Entry Point: 00b2d2e0
// Size: 52 bytes
// Signature: undefined sealElementIfJustOpened(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* XMLPrinter::sealElementIfJustOpened() */

void XMLPrinter::sealElementIfJustOpened(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x17) != '\0') {
    *(undefined *)(in_x0 + 0x17) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(in_x0 + 0x38),0x4eb0ab);
  }
  return;
}


