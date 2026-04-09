// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e28d0
// Entry Point: 006e28d0
// Size: 28 bytes
// Signature: undefined FUN_006e28d0(void)


void FUN_006e28d0(char *param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,(ulong)pbVar1);
  return;
}


