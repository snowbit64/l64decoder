// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueOverlay
// Entry Point: 006f703c
// Size: 576 bytes
// Signature: undefined __thiscall enqueueOverlay(TextureOverlayRenderer * this, ITextureObject * param_1, ISamplerObject * param_2, uint param_3, float param_4, float param_5, float param_6, float param_7, uint param_8, uint param_9, uint param_10, uint param_11, float param_12, float param_13, float param_14, float param_15, float param_16, float param_17, float param_18, float param_19, float param_20, float param_21, float param_22, float param_23, bool param_24, SharedRenderArgs * param_25)


/* TextureOverlayRenderer::enqueueOverlay(ITextureObject*, ISamplerObject*, unsigned int, float,
   float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, float, float, float,
   float, float, float, float, float, float, float, float, float, bool, SharedRenderArgs const&) */

void __thiscall
TextureOverlayRenderer::enqueueOverlay
          (TextureOverlayRenderer *this,ITextureObject *param_1,ISamplerObject *param_2,uint param_3
          ,float param_4,float param_5,float param_6,float param_7,uint param_8,uint param_9,
          uint param_10,uint param_11,float param_12,float param_13,float param_14,float param_15,
          float param_16,float param_17,float param_18,float param_19,float param_20,float param_21,
          float param_22,float param_23,bool param_24,SharedRenderArgs *param_25)

{
  Resource **ppRVar1;
  ISamplerObject *pIVar2;
  ResourceManager *this_00;
  Resource *pRVar3;
  Resource *pRVar4;
  
  pIVar2 = *(ISamplerObject **)(this + 0x468);
  if (param_2 != (ISamplerObject *)0x0) {
    pIVar2 = param_2;
  }
  if ((param_1 != (ITextureObject *)0x0) && (this[0x47c] != (TextureOverlayRenderer)0x0)) {
    if ((*(uint *)(this + 0x480) != 0) &&
       ((((((*(ITextureObject **)(this + 0x488) != param_1 ||
            (*(ISamplerObject **)(this + 0x490) != pIVar2)) ||
           (*(long *)(this + 0x4a0) != *(long *)(this + 0x4c8))) ||
          ((*(long *)(this + 0x4a8) != *(long *)(this + 0x4d0) || (this[0x4b0] != this[0x4d8])))) ||
         ((*(float *)(this + 0x4b4) != *(float *)(this + 0x4dc) ||
          ((*(float *)(this + 0x4b8) != *(float *)(this + 0x4e0) ||
           (*(float *)(this + 0x4bc) != *(float *)(this + 0x4e4))))))) ||
        ((*(float *)(this + 0x4c0) != *(float *)(this + 0x4e8) ||
         ((*(int *)(this + 0x498) != *(int *)(this + 0x49c) || (0x7f < *(uint *)(this + 0x480)))))))
       )) {
      renderOverlays(this,param_25);
    }
    pRVar3 = *(Resource **)(this + 0x4a0);
    ppRVar1 = (Resource **)(this + 0x4a0);
    pRVar4 = *(Resource **)(this + 0x4c8);
    *(ITextureObject **)(this + 0x488) = param_1;
    *(ISamplerObject **)(this + 0x490) = pIVar2;
    if (pRVar3 != pRVar4) {
      if (pRVar4 != (Resource *)0x0) {
        FUN_00f276d0(1,pRVar4 + 8);
        pRVar3 = *ppRVar1;
      }
      if (pRVar3 != (Resource *)0x0) {
        this_00 = (ResourceManager *)ResourceManager::getInstance();
        ResourceManager::release(this_00,*ppRVar1);
      }
    }
    *(undefined8 *)(this + 0x4a8) = *(undefined8 *)(this + 0x4d0);
    *ppRVar1 = *(Resource **)(this + 0x4c8);
    *(undefined8 *)(this + 0x4b8) = *(undefined8 *)(this + 0x4e0);
    *(undefined8 *)(this + 0x4b0) = *(undefined8 *)(this + 0x4d8);
    *(undefined8 *)(this + 0x4c0) = *(undefined8 *)(this + 0x4e8);
    *(undefined4 *)(this + 0x498) = *(undefined4 *)(this + 0x49c);
    fillVertexBuffer((uint)this,param_4,param_5,param_6,param_7,param_3,param_8,param_9,param_10,
                     param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                     param_20,param_21,param_22,param_23,SUB41(param_11,0));
    *(int *)(this + 0x480) = *(int *)(this + 0x480) + 1;
  }
  return;
}


