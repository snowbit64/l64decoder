// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaskTexture
// Entry Point: 006f7f68
// Size: 220 bytes
// Signature: undefined __thiscall setMaskTexture(TextureOverlayRenderer * this, Texture * param_1, ISamplerObject * param_2, bool param_3, float param_4, float param_5, float param_6, float param_7)


/* TextureOverlayRenderer::setMaskTexture(Texture*, ISamplerObject*, bool, float, float, float,
   float) */

void __thiscall
TextureOverlayRenderer::setMaskTexture
          (TextureOverlayRenderer *this,Texture *param_1,ISamplerObject *param_2,bool param_3,
          float param_4,float param_5,float param_6,float param_7)

{
  Texture **ppTVar1;
  ISamplerObject *pIVar2;
  ResourceManager *pRVar3;
  
  ppTVar1 = (Texture **)(this + 0x4c8);
  if (param_1 == (Texture *)0x0) {
    if (*(Texture **)(this + 0x4c8) != (Texture *)0x0) {
      pRVar3 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar3,*(Resource **)(this + 0x4c8));
      *ppTVar1 = (Texture *)0x0;
      *(undefined8 *)(this + 0x4d0) = 0;
      this[0x4d8] = (TextureOverlayRenderer)0x0;
      *(undefined8 *)(this + 0x4e4) = 0;
      *(undefined8 *)(this + 0x4dc) = 0;
    }
  }
  else {
    if (*(Texture **)(this + 0x4c8) != param_1) {
      FUN_00f276d0(1,param_1 + 8);
      if (*ppTVar1 != (Texture *)0x0) {
        pRVar3 = (ResourceManager *)ResourceManager::getInstance();
        ResourceManager::release(pRVar3,(Resource *)*ppTVar1);
      }
      *ppTVar1 = param_1;
    }
    this[0x4d8] = (TextureOverlayRenderer)param_3;
    *(float *)(this + 0x4dc) = param_4;
    pIVar2 = *(ISamplerObject **)(this + 0x468);
    if (param_2 != (ISamplerObject *)0x0) {
      pIVar2 = param_2;
    }
    *(float *)(this + 0x4e0) = param_5;
    *(float *)(this + 0x4e4) = param_6;
    *(float *)(this + 0x4e8) = param_7;
    *(ISamplerObject **)(this + 0x4d0) = pIVar2;
  }
  return;
}


