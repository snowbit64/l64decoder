// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCommand
// Entry Point: 006d685c
// Size: 64 bytes
// Signature: undefined __cdecl executeCommand(char * param_1)


/* Console::executeCommand(char const*) */

void Console::executeCommand(char *param_1)

{
  uint uVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x80);
  uVar1 = (uint)((byte)param_1[0x80] >> 1);
  if ((param_1[0x80] & 1U) != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x88);
  }
  *(uint *)(param_1 + 0xe8) = uVar1;
  executeCommand();
  return;
}


