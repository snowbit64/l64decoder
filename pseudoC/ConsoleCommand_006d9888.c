// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConsoleCommand
// Entry Point: 006d9888
// Size: 124 bytes
// Signature: undefined __thiscall ConsoleCommand(ConsoleCommand * this, char * param_1, char * param_2, _func_void_vector_ptr_basic_string_ptr * param_3)


/* ConsoleCommand::ConsoleCommand(char const*, char const*, void
   (*)(std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&))
    */

void __thiscall
ConsoleCommand::ConsoleCommand
          (ConsoleCommand *this,char *param_1,char *param_2,
          _func_void_vector_ptr_basic_string_ptr *param_3)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
                    /* try { // try from 006d98d0 to 006d98e3 has its CatchHandler @ 006d9904 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(_func_void_vector_ptr_basic_string_ptr **)(this + 0x60) = param_3;
  *(undefined4 *)(this + 0x38) = 5;
  return;
}


