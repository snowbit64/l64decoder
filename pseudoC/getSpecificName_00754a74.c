// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 00754a74
// Size: 12 bytes
// Signature: undefined __thiscall getSpecificName(GenericResourceLoader<SampleChunk> * this, char * param_1, ResourceDesc * param_2, basic_string * param_3)


/* GenericResourceLoader<SampleChunk>::getSpecificName(char const*, ResourceDesc*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
GenericResourceLoader<SampleChunk>::getSpecificName
          (GenericResourceLoader<SampleChunk> *this,char *param_1,ResourceDesc *param_2,
          basic_string *param_3)

{
  SampleChunk::getSpecificName(param_1,param_3);
  return;
}


