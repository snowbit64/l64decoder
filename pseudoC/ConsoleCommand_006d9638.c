// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConsoleCommand
// Entry Point: 006d9638
// Size: 144 bytes
// Signature: undefined __thiscall ConsoleCommand(ConsoleCommand * this, char * param_1, char * param_2, int * param_3, int param_4, int param_5)


/* ConsoleCommand::ConsoleCommand(char const*, char const*, int*, int, int) */

void __thiscall
ConsoleCommand::ConsoleCommand
          (ConsoleCommand *this,char *param_1,char *param_2,int *param_3,int param_4,int param_5)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
                    /* try { // try from 006d968c to 006d969f has its CatchHandler @ 006d96c8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(int **)(this + 0x40) = param_3;
  *(int *)(this + 0x4c) = param_4;
  *(int *)(this + 0x50) = param_5;
  *(undefined4 *)(this + 0x38) = 2;
  return;
}


