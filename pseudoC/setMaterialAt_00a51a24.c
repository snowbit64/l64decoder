// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaterialAt
// Entry Point: 00a51a24
// Size: 184 bytes
// Signature: undefined __thiscall setMaterialAt(GsShape * this, GsMaterial * param_1, uint param_2)


/* GsShape::setMaterialAt(GsMaterial*, unsigned int) */

void __thiscall GsShape::setMaterialAt(GsShape *this,GsMaterial *param_1,uint param_2)

{
  short sVar1;
  MaterialManager *this_00;
  GsMaterial **ppGVar2;
  
  if (param_2 < *(ushort *)(this + 0x196)) {
    if (param_2 == 0) {
      if (*(void **)(this + 0x180) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x180));
      }
      *(undefined8 *)(this + 0x180) = 0;
    }
    FUN_00f276d0(1,param_1 + 0x28);
    sVar1 = *(short *)(this + 0x196);
    this_00 = (MaterialManager *)MaterialManager::getInstance();
    ppGVar2 = (GsMaterial **)(this + 0x178);
    if (sVar1 == 1) {
      MaterialManager::releaseMaterial(this_00,*ppGVar2);
    }
    else {
      MaterialManager::releaseMaterial(this_00,*(GsMaterial **)(*ppGVar2 + (ulong)param_2 * 8));
      ppGVar2 = (GsMaterial **)(*ppGVar2 + (ulong)param_2 * 8);
    }
    *ppGVar2 = param_1;
    refreshFlagsFromMaterials();
    return;
  }
  return;
}


