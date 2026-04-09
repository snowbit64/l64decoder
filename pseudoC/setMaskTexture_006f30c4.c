// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaskTexture
// Entry Point: 006f30c4
// Size: 220 bytes
// Signature: undefined __thiscall setMaskTexture(FontOverlayRenderer * this, Texture * param_1, ISamplerObject * param_2, bool param_3, float param_4, float param_5, float param_6, float param_7)


/* FontOverlayRenderer::setMaskTexture(Texture*, ISamplerObject*, bool, float, float, float, float)
    */

void __thiscall
FontOverlayRenderer::setMaskTexture
          (FontOverlayRenderer *this,Texture *param_1,ISamplerObject *param_2,bool param_3,
          float param_4,float param_5,float param_6,float param_7)

{
  Resource **ppRVar1;
  ISamplerObject *pIVar2;
  ResourceManager *pRVar3;
  
  ppRVar1 = (Resource **)(this + 0x420);
  if (param_1 == (Texture *)0x0) {
    if (*(Texture **)(this + 0x420) != (Texture *)0x0) {
      pRVar3 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar3,*(Resource **)(this + 0x420));
      *ppRVar1 = (Resource *)0x0;
      *(undefined8 *)(this + 0x428) = 0;
      this[0x430] = (FontOverlayRenderer)0x0;
      *(undefined8 *)(this + 0x43c) = 0;
      *(undefined8 *)(this + 0x434) = 0;
    }
  }
  else {
    if (*(Texture **)(this + 0x420) != param_1) {
      FUN_00f276d0(1,param_1 + 8);
      if (*ppRVar1 != (Resource *)0x0) {
        pRVar3 = (ResourceManager *)ResourceManager::getInstance();
        ResourceManager::release(pRVar3,*ppRVar1);
      }
      *(Texture **)(this + 0x420) = param_1;
      pIVar2 = *(ISamplerObject **)(this + 0x3d8);
      if (param_2 != (ISamplerObject *)0x0) {
        pIVar2 = param_2;
      }
      *(ISamplerObject **)(this + 0x428) = pIVar2;
    }
    this[0x430] = (FontOverlayRenderer)param_3;
    *(float *)(this + 0x434) = param_4;
    *(float *)(this + 0x438) = param_5;
    *(float *)(this + 0x43c) = param_6;
    *(float *)(this + 0x440) = param_7;
  }
  return;
}


