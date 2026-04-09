// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericResourceDescLoader
// Entry Point: 007549fc
// Size: 4 bytes
// Signature: undefined __thiscall ~GenericResourceDescLoader(GenericResourceDescLoader<Texture,TextureDesc> * this)


/* GenericResourceDescLoader<Texture, TextureDesc>::~GenericResourceDescLoader() */

void __thiscall
GenericResourceDescLoader<Texture,TextureDesc>::~GenericResourceDescLoader
          (GenericResourceDescLoader<Texture,TextureDesc> *this)

{
  operator_delete(this);
  return;
}


