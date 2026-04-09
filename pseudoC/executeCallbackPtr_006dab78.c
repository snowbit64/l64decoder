// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCallbackPtr
// Entry Point: 006dab78
// Size: 16 bytes
// Signature: undefined __thiscall executeCallbackPtr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* ConsoleCommand::executeCallbackPtr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeCallbackPtr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006dab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x60))(param_1,param_2);
  return;
}


