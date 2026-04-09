// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAlbedoMap
// Entry Point: 00946068
// Size: 180 bytes
// Signature: undefined __thiscall setAlbedoMap(GsMaterial * this, Texture * param_1)


/* GsMaterial::setAlbedoMap(Texture*) */

void __thiscall GsMaterial::setAlbedoMap(GsMaterial *this,Texture *param_1)

{
  ResourceManager *this_00;
  long lVar1;
  Texture *pTVar2;
  
  pTVar2 = *(Texture **)(this + 0x30);
  if (pTVar2 == param_1) {
    return;
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x30));
  *(Texture **)(this + 0x30) = param_1;
  if (param_1 == (Texture *)0x0) {
    if (pTVar2 == (Texture *)0x0) {
      lVar1 = 0;
      goto joined_r0x009460e0;
    }
  }
  else {
    FUN_00f276d0(1,param_1 + 8);
    lVar1 = *(long *)(this + 0x30);
    if ((pTVar2 != (Texture *)0x0) != (lVar1 == 0)) {
joined_r0x009460e0:
      if ((pTVar2 == (Texture *)0x0) ||
         ((*(ushort *)(pTVar2 + 0x48) >> 2 & 1) == (*(ushort *)(lVar1 + 0x48) & 4) >> 2))
      goto LAB_00946104;
    }
  }
  initMaterialAttributes();
LAB_00946104:
  this[0x160] = (GsMaterial)0x1;
  return;
}


