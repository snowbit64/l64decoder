// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllCommands
// Entry Point: 006d48dc
// Size: 176 bytes
// Signature: undefined removeAllCommands(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::removeAllCommands() */

void Console::removeAllCommands(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(undefined8 *)(in_x0 + 0x28);
  while (pplVar4 != (long **)(in_x0 + 0x30)) {
    if (pplVar4[7] != (long *)0x0) {
      (**(code **)(*pplVar4[7] + 8))();
    }
    pplVar2 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar2 = pplVar4 + 2;
      bVar1 = (long **)**pplVar2 != pplVar4;
      pplVar4 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar3 = *pplVar2;
          pplVar2 = (long **)(plVar3 + 2);
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar4 != plVar3);
      }
    }
    else {
      do {
        pplVar4 = pplVar2;
        pplVar2 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
             *)(undefined8 *)(in_x0 + 0x28),*(__tree_node **)(in_x0 + 0x30));
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(long ***)(in_x0 + 0x28) = (long **)(in_x0 + 0x30);
  return;
}


