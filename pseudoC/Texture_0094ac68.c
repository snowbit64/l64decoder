// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Texture
// Entry Point: 0094ac68
// Size: 100 bytes
// Signature: undefined __thiscall ~Texture(Texture * this)


/* CustomShader::Texture::~Texture() */

void __thiscall CustomShader::Texture::~Texture(Texture *this)

{
  Texture TVar1;
  
  if (((byte)this[0x38] & 1) == 0) {
    TVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    TVar1 = this[0x18];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    TVar1 = *this;
  }
  if (((byte)TVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


