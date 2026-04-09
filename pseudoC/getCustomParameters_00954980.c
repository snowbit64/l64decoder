// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomParameters
// Entry Point: 00954980
// Size: 156 bytes
// Signature: undefined __thiscall getCustomParameters(MaterialShaderManager * this, uint param_1, map * * param_2, map * * param_3)


/* MaterialShaderManager::getCustomParameters(unsigned int,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*&)
    */

void __thiscall
MaterialShaderManager::getCustomParameters
          (MaterialShaderManager *this,uint param_1,map **param_2,map **param_3)

{
  MaterialShaderManager **ppMVar1;
  MaterialShaderManager *pMVar2;
  MaterialShaderManager **ppMVar3;
  MaterialShaderManager **ppMVar4;
  
  if (param_1 == 0) {
    return;
  }
  Mutex::enterCriticalSection();
  ppMVar4 = (MaterialShaderManager **)(this + 0xe0);
  ppMVar3 = (MaterialShaderManager **)*ppMVar4;
  ppMVar1 = ppMVar4;
  if (ppMVar3 != (MaterialShaderManager **)0x0) {
    do {
      if (*(uint *)(ppMVar3 + 4) >= param_1) {
        ppMVar1 = ppMVar3;
      }
      ppMVar3 = (MaterialShaderManager **)ppMVar3[*(uint *)(ppMVar3 + 4) < param_1];
    } while (ppMVar3 != (MaterialShaderManager **)0x0);
    if ((ppMVar1 != ppMVar4) && (*(uint *)(ppMVar1 + 4) <= param_1)) {
      pMVar2 = ppMVar1[5];
      *param_2 = (map *)(pMVar2 + 0x20);
      *param_3 = (map *)(pMVar2 + 0x38);
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


