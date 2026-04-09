// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 00754bb0
// Size: 16 bytes
// Signature: undefined __thiscall getSpecificName(GenericResourceDescLoader<DensityMap,DensityMapDesc> * this, char * param_1, ResourceDesc * param_2, basic_string * param_3)


/* GenericResourceDescLoader<DensityMap, DensityMapDesc>::getSpecificName(char const*,
   ResourceDesc*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void __thiscall
GenericResourceDescLoader<DensityMap,DensityMapDesc>::getSpecificName
          (GenericResourceDescLoader<DensityMap,DensityMapDesc> *this,char *param_1,
          ResourceDesc *param_2,basic_string *param_3)

{
  DensityMap::getSpecificName(param_1,(DensityMapDesc *)param_2,param_3);
  return;
}


