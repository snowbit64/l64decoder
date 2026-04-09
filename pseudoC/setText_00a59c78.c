// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setText
// Entry Point: 00a59c78
// Size: 48 bytes
// Signature: undefined __cdecl setText(char * param_1)


/* NoteNode::setText(char const*) */

void NoteNode::setText(char *param_1)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x158);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x1000;
  return;
}


