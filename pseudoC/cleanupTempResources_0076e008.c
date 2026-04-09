// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanupTempResources
// Entry Point: 0076e008
// Size: 152 bytes
// Signature: undefined cleanupTempResources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineScriptBinding::cleanupTempResources() */

void EngineScriptBinding::cleanupTempResources(void)

{
  MaterialManager *this;
  GsMaterial *this_00;
  long lVar1;
  ulong uVar2;
  
  uVar2 = DAT_010531e0 - s_tempMaterials;
  if ((int)(uVar2 >> 3) != 0) {
    this = (MaterialManager *)MaterialManager::getInstance();
    lVar1 = 0;
    do {
      this_00 = *(GsMaterial **)(s_tempMaterials + lVar1);
      if (1 < *(int *)(this_00 + 0x28)) {
        GsMaterial::validateTextures(this_00,1);
        this_00 = *(GsMaterial **)(s_tempMaterials + lVar1);
      }
      MaterialManager::releaseMaterial(this,this_00);
      lVar1 = lVar1 + 8;
    } while ((uVar2 >> 3 & 0xffffffff) * 8 - lVar1 != 0);
    DAT_010531e0 = s_tempMaterials;
  }
  return;
}


