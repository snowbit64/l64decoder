// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderOverlay
// Entry Point: 006f811c
// Size: 360 bytes
// Signature: undefined __thiscall RenderOverlay(RenderOverlay * this, Camera * param_1, TextureOverlayRenderer * param_2, float param_3, uint param_4, uint param_5, bool param_6, uint param_7, uint param_8, uint param_9, bool param_10, uint param_11, uint param_12, bool param_13, float param_14, float param_15, float param_16, float param_17, float param_18, float param_19, float param_20, float param_21)


/* RenderOverlay::RenderOverlay(Camera*, TextureOverlayRenderer*, float, unsigned int, unsigned int,
   bool, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, bool, float,
   float, float, float, float, float, float, float) */

void __thiscall
RenderOverlay::RenderOverlay
          (RenderOverlay *this,Camera *param_1,TextureOverlayRenderer *param_2,float param_3,
          uint param_4,uint param_5,bool param_6,uint param_7,uint param_8,uint param_9,
          bool param_10,uint param_11,uint param_12,bool param_13,float param_14,float param_15,
          float param_16,float param_17,float param_18,float param_19,float param_20,float param_21)

{
  undefined4 uVar1;
  
  Overlay::Overlay((Overlay *)this,"RenderOverlay",param_14,param_15,param_16,param_17,param_18,
                   param_19,param_20,param_21);
  *(Camera **)(this + 0xa0) = param_1;
  *(TextureOverlayRenderer **)(this + 0xa8) = param_2;
  *(float *)(this + 0xb0) = param_3;
  *(uint *)(this + 0xb4) = param_7;
  *(uint *)(this + 0xb8) = param_8;
  this[0xea] = (RenderOverlay)param_10;
  *(undefined ***)this = &PTR__RenderOverlay_00fd9850;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x1000000000;
  *(uint *)(this + 0xcc) = param_9;
  *(uint *)(this + 0xd0) = param_11;
  *(uint *)(this + 0xd4) = param_12;
  *(undefined ***)(this + 0x78) = &PTR__RenderOverlay_00fd9898;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xe8] = (RenderOverlay)((param_11 | param_9 | param_12) != 0 || param_10);
  *(uint *)(this + 0x80) = param_4;
  *(uint *)(this + 0x84) = param_5;
  this[0xe9] = (RenderOverlay)param_13;
                    /* try { // try from 006f821c to 006f825f has its CatchHandler @ 006f8284 */
  EngineManager::getInstance();
  Renderer::incrementRenderOverlayCount();
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  uVar1 = 0;
  if (!param_6) {
    uVar1 = 0x3f800000;
  }
  *(undefined8 *)(this + 0x88) = 0;
  this[0xeb] = (RenderOverlay)0x0;
  *(undefined4 *)(this + 200) = uVar1;
  ScenegraphNode::addWorldTransformationDirtyListener
            ((ScenegraphNode *)param_1,(WorldTransformationDirtyListener *)(this + 0x78));
  return;
}


