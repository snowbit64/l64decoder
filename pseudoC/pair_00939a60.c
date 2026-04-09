// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 00939a60
// Size: 60 bytes
// Signature: undefined __thiscall ~pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc> * this)


/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc>::~pair() */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
::~pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
        *this)

{
  TerrainLayerTransformGroupDesc::~TerrainLayerTransformGroupDesc
            ((TerrainLayerTransformGroupDesc *)(this + 0x18));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


