// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEmissiveMap
// Entry Point: 00946124
// Size: 180 bytes
// Signature: undefined __thiscall setEmissiveMap(GsMaterial * this, Texture * param_1)


/* GsMaterial::setEmissiveMap(Texture*) */

void __thiscall GsMaterial::setEmissiveMap(GsMaterial *this,Texture *param_1)

{
  ResourceManager *this_00;
  long lVar1;
  long lVar2;
  Resource *pRVar3;
  
  pRVar3 = *(Resource **)(this + 0x48);
  if (pRVar3 == (Resource *)param_1) {
    return;
  }
  *(Texture **)(this + 0x48) = param_1;
  if (param_1 == (Texture *)0x0) {
    if (pRVar3 == (Resource *)0x0) {
      lVar1 = 0;
      lVar2 = *(long *)(this + 0x30);
      goto joined_r0x00946190;
    }
  }
  else {
    FUN_00f276d0(1,param_1 + 8);
    lVar1 = *(long *)(this + 0x48);
    if ((pRVar3 != (Resource *)0x0) != (lVar1 == 0)) {
      lVar2 = *(long *)(this + 0x30);
joined_r0x00946190:
      if (((lVar2 != 0) || (pRVar3 == (Resource *)0x0)) ||
         ((*(ushort *)(pRVar3 + 0x48) >> 2 & 1) == (*(ushort *)(lVar1 + 0x48) & 4) >> 2))
      goto LAB_009461b8;
    }
  }
  initMaterialAttributes();
LAB_009461b8:
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,pRVar3);
  this[0x160] = (GsMaterial)0x1;
  return;
}


