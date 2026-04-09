// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>
// Entry Point: 00c68934
// Size: 88 bytes
// Signature: void __thiscall construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>(allocator<UserBlockManager::UserDetails> * this, UserDetails * param_1, UserDetails * param_2)


/* void 
   std::__ndk1::allocator<UserBlockManager::UserDetails>::construct<UserBlockManager::UserDetails,
   UserBlockManager::UserDetails const&>(UserBlockManager::UserDetails*,
   UserBlockManager::UserDetails const&) */

void __thiscall
std::__ndk1::allocator<UserBlockManager::UserDetails>::
construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>
          (allocator<UserBlockManager::UserDetails> *this,UserDetails *param_1,UserDetails *param_2)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)param_1);
                    /* try { // try from 00c68960 to 00c68967 has its CatchHandler @ 00c689ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
                    /* try { // try from 00c68978 to 00c6897b has its CatchHandler @ 00c6898c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(param_1 + 0x38));
  return;
}


