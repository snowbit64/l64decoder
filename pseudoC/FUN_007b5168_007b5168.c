// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5168
// Entry Point: 007b5168
// Size: 160 bytes
// Signature: undefined FUN_007b5168(void)


ImageOverlay * FUN_007b5168(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  ImageOverlay *this_00;
  Texture *pTVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x15) >> 4 & 1) == 0)) {
    this_00 = (ImageOverlay *)0x0;
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0x20);
    FUN_00f276d0(1,pTVar2 + 8);
    this_00 = (ImageOverlay *)operator_new(0x90);
                    /* try { // try from 007b51b4 to 007b51f7 has its CatchHandler @ 007b5208 */
    ImageOverlay::ImageOverlay
              (this_00,"ImageOverlayFromTexture",pTVar2,(ISamplerObject *)0x0,0.1,0.1,0.2,0.2,0.0,
               0.0,1.0,1.0);
  }
  return this_00;
}


