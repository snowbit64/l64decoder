// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNormalMap
// Entry Point: 00946260
// Size: 332 bytes
// Signature: undefined __thiscall setNormalMap(GsMaterial * this, Texture * param_1)


/* GsMaterial::setNormalMap(Texture*) */

void __thiscall GsMaterial::setNormalMap(GsMaterial *this,Texture *param_1)

{
  ResourceManager *this_00;
  int iVar1;
  uint uVar2;
  Texture *pTVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  pTVar3 = *(Texture **)(this + 0x38);
  if (pTVar3 == param_1) {
    return;
  }
  if (pTVar3 == (Texture *)0x0) {
    iVar1 = 0;
  }
  else if ((*(ushort *)(pTVar3 + 0x48) >> 2 & 1) == 0) {
    iVar1 = 1;
    if (*(int *)(pTVar3 + 0x4c) != 0xf) {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = 3;
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x38));
  *(Texture **)(this + 0x38) = param_1;
  if (param_1 == (Texture *)0x0) {
    lVar4 = 0;
LAB_00946300:
    if (iVar1 == 0) goto LAB_00946318;
  }
  else {
    FUN_00f276d0(1,param_1 + 8);
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 == 0) goto LAB_00946300;
    if ((*(ushort *)(lVar4 + 0x48) >> 2 & 1) == 0) {
      iVar5 = 1;
      if (*(int *)(lVar4 + 0x4c) != 0xf) {
        iVar5 = 2;
      }
      if (iVar1 == iVar5) goto LAB_00946318;
    }
    else if (iVar1 == 3) goto LAB_00946318;
  }
  initMaterialAttributes();
  lVar4 = *(long *)(this + 0x38);
LAB_00946318:
  uVar2 = 0x25;
  if (lVar4 != 0) {
    uVar2 = 0x225;
  }
  lVar4 = *(long *)(this + 0x80);
  *(uint *)(this + 0x98) = uVar2;
  if (lVar4 != 0) {
    uVar7 = (ulong)*(uint *)(this + 0x88);
    uVar8 = (*(long *)(lVar4 + 0x118) - *(long *)(lVar4 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x110) + uVar7 * 0xe0;
      uVar2 = *(uint *)(lVar4 + 0x70) | uVar2;
      uVar6 = ~*(uint *)(lVar4 + 0x74);
    }
    *(uint *)(this + 0x98) = uVar6 & uVar2;
  }
  this[0x160] = (GsMaterial)0x1;
  return;
}


