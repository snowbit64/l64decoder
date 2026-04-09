// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d689c
// Entry Point: 006d689c
// Size: 104 bytes
// Signature: undefined FUN_006d689c(void)


void FUN_006d689c(vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>>
                  *param_1,HistoryEntry *param_2)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 8);
  if (pbVar1 != *(basic_string **)(param_1 + 0x10)) {
                    /* try { // try from 006d68c0 to 006d68cb has its CatchHandler @ 006d6904 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    pbVar1[6] = *(basic_string *)(param_2 + 0x18);
    *(basic_string **)(param_1 + 8) = pbVar1 + 8;
    return;
  }
  std::__ndk1::vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>>::
  __push_back_slow_path<Console::HistoryEntry_const&>(param_1,param_2);
  return;
}


