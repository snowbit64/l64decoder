// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addReferenceI3dObject
// Entry Point: 009d3ee0
// Size: 28 bytes
// Signature: undefined __thiscall addReferenceI3dObject(ProceduralPlacementManager * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, basic_string * param_8, float param_9, float param_10, int param_11)


/* ProceduralPlacementManager::addReferenceI3dObject(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, unsigned int, unsigned int, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, int) */

void __thiscall
ProceduralPlacementManager::addReferenceI3dObject
          (ProceduralPlacementManager *this,uint param_1,basic_string *param_2,basic_string *param_3
          ,uint param_4,uint param_5,uint param_6,uint param_7,basic_string *param_8,float param_9,
          float param_10,int param_11)

{
  ProceduralPlacementRule::addReferenceI3dObject
            (*(ProceduralPlacementRule **)(*(long *)(this + 0xc0) + -8),param_1,param_2,param_3,
             param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}


