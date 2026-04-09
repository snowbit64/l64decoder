// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 00754a00
// Size: 16 bytes
// Signature: undefined __thiscall getSpecificName(GenericResourceDescLoader<Texture,TextureDesc> * this, char * param_1, ResourceDesc * param_2, basic_string * param_3)


/* GenericResourceDescLoader<Texture, TextureDesc>::getSpecificName(char const*, ResourceDesc*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
GenericResourceDescLoader<Texture,TextureDesc>::getSpecificName
          (GenericResourceDescLoader<Texture,TextureDesc> *this,char *param_1,ResourceDesc *param_2,
          basic_string *param_3)

{
  Texture::getSpecificName(param_1,(TextureDesc *)param_2,param_3);
  return;
}


