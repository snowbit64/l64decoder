// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a1f638
// Size: 264 bytes
// Signature: undefined __thiscall init(RenderQueue * this, RenderArgs * param_1, CullingArgs * param_2, RenderList * param_3)


/* RenderQueue::init(RenderArgs const*, CullingArgs const*, RenderList const*) */

void __thiscall
RenderQueue::init(RenderQueue *this,RenderArgs *param_1,CullingArgs *param_2,RenderList *param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  LightListRasterizer *this_00;
  byte *pbVar5;
  
  pbVar1 = *(byte **)(this + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  *(RenderArgs **)(this + 0x28) = param_1;
  *(CullingArgs **)(this + 0x30) = param_2;
  *(RenderList **)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = uVar3;
  if (*(byte **)(this + 0x40) != pbVar1) {
    pbVar5 = *(byte **)(this + 0x40) + -0x1c8;
    do {
      *(undefined ***)(pbVar5 + 0x18) = &PTR__Task_00fde908;
      if ((pbVar5[0x28] & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + 0x38));
      }
      if ((*pbVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + 0x10));
      }
      pbVar4 = pbVar5 + -0xf8;
      pbVar5 = pbVar5 + -0x2c0;
    } while (pbVar4 != pbVar1);
    *(byte **)(this + 0x40) = pbVar1;
  }
  ReflectionRenderController::reset((ReflectionRenderController *)(this + 0x70),param_1,param_2);
  if (((byte)param_1[0x3a8] & 1) == 0) {
    return;
  }
  LightListRasterizer::reset(*(LightListRasterizer **)(this + 0x20),*(LightList **)(this + 0x18));
  this_00 = *(LightListRasterizer **)(this + 0x20);
  lVar2 = EngineManager::getInstance();
  LightListRasterizer::setGridSize(this_00,0x20,0x20,0x10,*(uint *)(lVar2 + 0x234));
  LightListRasterizer::setCameraParameters
            (*(LightListRasterizer **)(this + 0x20),*(float *)(param_1 + 0xc0),250.0,5.0);
  return;
}


