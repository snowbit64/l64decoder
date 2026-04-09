// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConsoleCommand
// Entry Point: 006d9704
// Size: 144 bytes
// Signature: undefined __thiscall ConsoleCommand(ConsoleCommand * this, char * param_1, char * param_2, float * param_3, float param_4, float param_5)


/* ConsoleCommand::ConsoleCommand(char const*, char const*, float*, float, float) */

void __thiscall
ConsoleCommand::ConsoleCommand
          (ConsoleCommand *this,char *param_1,char *param_2,float *param_3,float param_4,
          float param_5)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
                    /* try { // try from 006d9758 to 006d976b has its CatchHandler @ 006d9794 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(float **)(this + 0x40) = param_3;
  *(float *)(this + 0x54) = param_4;
  *(float *)(this + 0x58) = param_5;
  *(undefined4 *)(this + 0x38) = 3;
  return;
}


