// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addState
// Entry Point: 007088a8
// Size: 64 bytes
// Signature: undefined __cdecl addState(char * param_1)


/* AnimalAnimationSystemSource::addState(char const*) */

ulong AnimalAnimationSystemSource::addState(char *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + (ulong)uVar1 * 0x18 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return (ulong)uVar1;
}


