// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConsoleCommand
// Entry Point: 006d9474
// Size: 132 bytes
// Signature: undefined __thiscall ConsoleCommand(ConsoleCommand * this, char * param_1, char * param_2, bool * param_3, bool param_4)


/* ConsoleCommand::ConsoleCommand(char const*, char const*, bool*, bool) */

void __thiscall
ConsoleCommand::ConsoleCommand
          (ConsoleCommand *this,char *param_1,char *param_2,bool *param_3,bool param_4)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
                    /* try { // try from 006d94c0 to 006d94d3 has its CatchHandler @ 006d94f8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(bool **)(this + 0x40) = param_3;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x48] = (ConsoleCommand)param_4;
  return;
}


