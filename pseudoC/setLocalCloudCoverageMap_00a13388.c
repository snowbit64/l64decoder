// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalCloudCoverageMap
// Entry Point: 00a13388
// Size: 76 bytes
// Signature: undefined __thiscall setLocalCloudCoverageMap(Renderer * this, Texture * param_1)


/* Renderer::setLocalCloudCoverageMap(Texture*) */

void __thiscall Renderer::setLocalCloudCoverageMap(Renderer *this,Texture *param_1)

{
  ResourceManager *this_00;
  
  if (*(Texture **)(this + 0x28) != param_1) {
    if (param_1 != (Texture *)0x0) {
      FUN_00f276d0(1,param_1 + 8);
    }
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x28));
    *(Texture **)(this + 0x28) = param_1;
  }
  return;
}


