// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGlossMap
// Entry Point: 009461d8
// Size: 136 bytes
// Signature: undefined __thiscall setGlossMap(GsMaterial * this, Texture * param_1)


/* GsMaterial::setGlossMap(Texture*) */

void __thiscall GsMaterial::setGlossMap(GsMaterial *this,Texture *param_1)

{
  ResourceManager *this_00;
  Texture *pTVar1;
  
  pTVar1 = *(Texture **)(this + 0x40);
  if (pTVar1 == param_1) {
    return;
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x40));
  *(Texture **)(this + 0x40) = param_1;
  if (param_1 == (Texture *)0x0) {
    if (pTVar1 == (Texture *)0x0) goto LAB_00946240;
  }
  else {
    FUN_00f276d0(1,param_1 + 8);
    if ((pTVar1 == (Texture *)0x0) != (*(long *)(this + 0x40) != 0)) goto LAB_00946240;
  }
  initMaterialAttributes();
LAB_00946240:
  this[0x160] = (GsMaterial)0x1;
  return;
}


