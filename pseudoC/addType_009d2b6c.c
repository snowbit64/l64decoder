// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addType
// Entry Point: 009d2b6c
// Size: 40 bytes
// Signature: undefined __cdecl addType(basic_string * param_1)


/* ProceduralPlacementManager::addType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementManager::addType(basic_string *param_1)

{
  long lVar1;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementDistanceMatrix::addType((basic_string *)(lVar1 + 0x20));
  return;
}


