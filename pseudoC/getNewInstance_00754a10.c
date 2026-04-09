// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewInstance
// Entry Point: 00754a10
// Size: 76 bytes
// Signature: undefined __thiscall getNewInstance(GenericResourceDescLoader<Texture,TextureDesc> * this, char * param_1, ResourceDesc * param_2)


/* GenericResourceDescLoader<Texture, TextureDesc>::getNewInstance(char const*, ResourceDesc*) */

Texture * __thiscall
GenericResourceDescLoader<Texture,TextureDesc>::getNewInstance
          (GenericResourceDescLoader<Texture,TextureDesc> *this,char *param_1,ResourceDesc *param_2)

{
  Texture *this_00;
  
  this_00 = (Texture *)operator_new(0x78);
                    /* try { // try from 00754a3c to 00754a47 has its CatchHandler @ 00754a5c */
  Texture::Texture(this_00,param_1,*(uint *)(this + 8),(TextureDesc *)param_2);
  return this_00;
}


