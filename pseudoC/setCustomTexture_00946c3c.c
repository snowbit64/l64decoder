// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomTexture
// Entry Point: 00946c3c
// Size: 100 bytes
// Signature: undefined __thiscall setCustomTexture(GsMaterial * this, uint param_1, Texture * param_2)


/* GsMaterial::setCustomTexture(unsigned int, Texture*) */

void __thiscall GsMaterial::setCustomTexture(GsMaterial *this,uint param_1,Texture *param_2)

{
  ResourceManager *this_00;
  
  if (param_2 != (Texture *)0x0) {
    FUN_00f276d0(1,param_2 + 8);
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(*(long *)(this + 0x70) + (ulong)param_1 * 8));
  *(Texture **)(*(long *)(this + 0x70) + (ulong)param_1 * 8) = param_2;
  this[0x160] = (GsMaterial)0x1;
  return;
}


