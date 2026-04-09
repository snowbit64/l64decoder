// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onContentChanged
// Entry Point: 006faff8
// Size: 144 bytes
// Signature: undefined onContentChanged(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BillboardShape::AdPlacementContentChangedCallback::onContentChanged() */

void BillboardShape::AdPlacementContentChangedCallback::onContentChanged(void)

{
  long in_x0;
  EntityRegistryManager *this;
  GsShape *this_00;
  BillboardShape *this_01;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 9) != '\0')) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    this_00 = (GsShape *)EntityRegistryManager::getEntityById(this,*(uint *)(lVar1 + 0xc));
    if ((this_00 != (GsShape *)0x0) &&
       ((((byte)this_00[0x11] >> 3 & 1) != 0 && (*(short *)(this_00 + 0x196) == 1)))) {
      this_01 = *(BillboardShape **)(in_x0 + 8);
      if (*(long *)(this_01 + 0x28) != 0) {
        if (*(char *)(*(long *)(this_01 + 0x28) + 0x3c) != '\0') {
          changeMaterial(this_01,this_00);
          return;
        }
        GsShape::setMaterialAt(this_00,*(GsMaterial **)(this_01 + 0x30),0);
        return;
      }
    }
  }
  return;
}


