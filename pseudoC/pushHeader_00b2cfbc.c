// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushHeader
// Entry Point: 00b2cfbc
// Size: 136 bytes
// Signature: undefined __thiscall pushHeader(XMLPrinter * this, bool param_1, bool param_2)


/* XMLPrinter::pushHeader(bool, bool) */

void __thiscall XMLPrinter::pushHeader(XMLPrinter *this,bool param_1,bool param_2)

{
  long lVar1;
  undefined2 local_3c;
  undefined local_3a;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    local_3a = 0xbf;
    local_3c = 0xbbef;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),(ulong)&local_3c);
  }
  if (param_2) {
    pushDeclaration(this,"xml version=\"1.0\"");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


