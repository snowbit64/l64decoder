// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaximumMinDistance
// Entry Point: 009c33e8
// Size: 208 bytes
// Signature: undefined __thiscall getMaximumMinDistance(ProceduralPlacementCacheManager * this, map * param_1)


/* ProceduralPlacementCacheManager::getMaximumMinDistance(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, bool,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, bool> > >&) */

int __thiscall
ProceduralPlacementCacheManager::getMaximumMinDistance
          (ProceduralPlacementCacheManager *this,map *param_1)

{
  __tree_iterator _Var1;
  int iVar2;
  map **ppmVar3;
  map **ppmVar4;
  map *pmVar5;
  int iVar6;
  map **ppmVar7;
  
  if (*(map ***)param_1 == (map **)(param_1 + 8)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    ppmVar7 = *(map ***)param_1;
    do {
      _Var1 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                          *)(this + 8),(basic_string *)(ppmVar7 + 4));
      iVar2 = iVar6;
      if ((this + 0x10 != (ProceduralPlacementCacheManager *)(ulong)_Var1) &&
         (iVar2 = (int)*(float *)(**(long **)((ProceduralPlacementCacheManager *)(ulong)_Var1 + 0x38
                                             ) + 0x30), iVar2 <= iVar6)) {
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      ppmVar3 = (map **)ppmVar7[1];
      if ((map **)ppmVar7[1] == (map **)0x0) {
        ppmVar3 = ppmVar7 + 2;
        ppmVar4 = (map **)*ppmVar3;
        if ((map **)*ppmVar4 != ppmVar7) {
          do {
            pmVar5 = *ppmVar3;
            ppmVar3 = (map **)(pmVar5 + 0x10);
            ppmVar4 = (map **)*ppmVar3;
          } while (*ppmVar4 != pmVar5);
        }
      }
      else {
        do {
          ppmVar4 = ppmVar3;
          ppmVar3 = (map **)*ppmVar4;
        } while ((map **)*ppmVar4 != (map **)0x0);
      }
      ppmVar7 = ppmVar4;
    } while (ppmVar4 != (map **)(param_1 + 8));
  }
  return iVar6;
}


