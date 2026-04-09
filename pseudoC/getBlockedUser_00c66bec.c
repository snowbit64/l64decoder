// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlockedUser
// Entry Point: 00c66bec
// Size: 132 bytes
// Signature: undefined __thiscall getBlockedUser(UserBlockManager * this, uint param_1, basic_string * param_2, basic_string * param_3, PLATFORM_ID * param_4, basic_string * param_5)


/* UserBlockManager::getBlockedUser(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, SysUtilBase::PLATFORM_ID&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
   const */

void __thiscall
UserBlockManager::getBlockedUser
          (UserBlockManager *this,uint param_1,basic_string *param_2,basic_string *param_3,
          PLATFORM_ID *param_4,basic_string *param_5)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  
  uVar2 = (*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 4) * -0x3333333333333333;
  uVar1 = (ulong)param_1;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    pbVar3 = (basic_string *)(*(long *)(this + 0x50) + uVar1 * 0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2,pbVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_3,pbVar3 + 6);
    *param_4 = pbVar3[0xc];
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_5,pbVar3 + 0xe);
  }
  return;
}


