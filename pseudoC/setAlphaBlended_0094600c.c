// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAlphaBlended
// Entry Point: 0094600c
// Size: 28 bytes
// Signature: undefined __thiscall setAlphaBlended(GsMaterial * this, bool param_1)


/* GsMaterial::setAlphaBlended(bool) */

void __thiscall GsMaterial::setAlphaBlended(GsMaterial *this,bool param_1)

{
  if (this[0x9c] == (GsMaterial)param_1) {
    return;
  }
  this[0x9c] = (GsMaterial)param_1;
  initMaterialAttributes();
  return;
}


