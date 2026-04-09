// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTypeDistance
// Entry Point: 009d2bbc
// Size: 64 bytes
// Signature: undefined __thiscall addTypeDistance(ProceduralPlacementManager * this, basic_string * param_1, basic_string * param_2, int param_3)


/* ProceduralPlacementManager::addTypeDistance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void __thiscall
ProceduralPlacementManager::addTypeDistance
          (ProceduralPlacementManager *this,basic_string *param_1,basic_string *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementDistanceMatrix::addMinDistanceToType
            ((ProceduralPlacementDistanceMatrix *)(lVar1 + 0x20),param_1,param_2,param_3);
  return;
}


