// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTerrainTextureObject
// Entry Point: 009d3ea8
// Size: 20 bytes
// Signature: undefined __thiscall addTerrainTextureObject(ProceduralPlacementManager * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8)


/* ProceduralPlacementManager::addTerrainTextureObject(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, unsigned int, unsigned int, unsigned int, int) */

void __thiscall
ProceduralPlacementManager::addTerrainTextureObject
          (ProceduralPlacementManager *this,uint param_1,basic_string *param_2,basic_string *param_3
          ,uint param_4,uint param_5,uint param_6,uint param_7,int param_8)

{
  ProceduralPlacementRule::addTerrainTextureObject
            (*(ProceduralPlacementRule **)(*(long *)(this + 0xc0) + -8),param_1,param_2,param_3,
             param_4,param_5,param_6,param_7,param_8);
  return;
}


