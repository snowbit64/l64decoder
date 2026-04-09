// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConsoleCommand
// Entry Point: 006d9564
// Size: 152 bytes
// Signature: undefined __thiscall ConsoleCommand(ConsoleCommand * this, char * param_1, char * param_2, uint * param_3, uint param_4, bool param_5)


/* ConsoleCommand::ConsoleCommand(char const*, char const*, unsigned int*, unsigned int, bool) */

void __thiscall
ConsoleCommand::ConsoleCommand
          (ConsoleCommand *this,char *param_1,char *param_2,uint *param_3,uint param_4,bool param_5)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
                    /* try { // try from 006d95b8 to 006d95cb has its CatchHandler @ 006d95fc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(uint **)(this + 0x40) = param_3;
  *(uint *)(this + 0x68) = param_4;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x48] = (ConsoleCommand)param_5;
  return;
}


