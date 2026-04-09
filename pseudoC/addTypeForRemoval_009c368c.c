// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTypeForRemoval
// Entry Point: 009c368c
// Size: 92 bytes
// Signature: undefined __thiscall addTypeForRemoval(ProceduralPlacementCacheManager * this, basic_string * param_1, uint param_2, uint param_3)


/* ProceduralPlacementCacheManager::addTypeForRemoval(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, unsigned
   int) */

void __thiscall
ProceduralPlacementCacheManager::addTypeForRemoval
          (ProceduralPlacementCacheManager *this,basic_string *param_1,uint param_2,uint param_3)

{
  __tree_iterator _Var1;
  
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                      *)(this + 8),param_1);
  if (this + 0x10 != (ProceduralPlacementCacheManager *)(ulong)_Var1) {
    DistanceMatrixTypeField::addPointForRemoval
              (*(DistanceMatrixTypeField **)((ProceduralPlacementCacheManager *)(ulong)_Var1 + 0x38)
               ,param_2,param_3);
    return;
  }
  return;
}


