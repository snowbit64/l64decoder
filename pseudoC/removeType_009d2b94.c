// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeType
// Entry Point: 009d2b94
// Size: 40 bytes
// Signature: undefined __thiscall removeType(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::removeType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::removeType(ProceduralPlacementManager *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementDistanceMatrix::removeType
            ((ProceduralPlacementDistanceMatrix *)(lVar1 + 0x20),param_1);
  return;
}


