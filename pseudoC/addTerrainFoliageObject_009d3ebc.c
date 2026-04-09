// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTerrainFoliageObject
// Entry Point: 009d3ebc
// Size: 36 bytes
// Signature: undefined __thiscall addTerrainFoliageObject(ProceduralPlacementManager * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, basic_string * param_8, uint param_9, int param_10)


/* ProceduralPlacementManager::addTerrainFoliageObject(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, unsigned int, unsigned int, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, int) */

void __thiscall
ProceduralPlacementManager::addTerrainFoliageObject
          (ProceduralPlacementManager *this,uint param_1,basic_string *param_2,basic_string *param_3
          ,uint param_4,uint param_5,uint param_6,uint param_7,basic_string *param_8,uint param_9,
          int param_10)

{
  ProceduralPlacementRule::addTerrainFoliageObject
            (*(ProceduralPlacementRule **)(*(long *)(this + 0xc0) + -8),param_1,param_2,param_3,
             param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


