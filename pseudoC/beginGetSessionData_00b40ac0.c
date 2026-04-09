// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginGetSessionData
// Entry Point: 00b40ac0
// Size: 72 bytes
// Signature: undefined __cdecl beginGetSessionData(uint param_1)


/* MasterServerManager::beginGetSessionData(unsigned int) */

void MasterServerManager::beginGetSessionData(uint param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  *(undefined2 *)(uVar2 + 0x4e0) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(uVar2 + 0x4e8));
  bVar1 = (bool)GenericMpManager::getInstance();
  GenericMpManager::beginGetSessionData
            (bVar1,(uint)*(byte *)(uVar2 + 0x38),*(uint *)(uVar2 + 0x18c));
  return;
}


