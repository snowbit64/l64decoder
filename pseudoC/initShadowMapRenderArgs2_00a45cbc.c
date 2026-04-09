// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initShadowMapRenderArgs2
// Entry Point: 00a45cbc
// Size: 144 bytes
// Signature: undefined __thiscall initShadowMapRenderArgs2(ShadowRenderController * this, RenderArgs * param_1, CullingArgs * param_2, ShadowQueueItem * param_3, uint param_4, SubRegion param_5)


/* ShadowRenderController::initShadowMapRenderArgs2(RenderArgs*, CullingArgs*, ShadowQueueItem*,
   unsigned int, ShadowRenderController::SubRegion) */

void __thiscall
ShadowRenderController::initShadowMapRenderArgs2
          (ShadowRenderController *this,RenderArgs *param_1,CullingArgs *param_2,
          ShadowQueueItem *param_3,uint param_4,SubRegion param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = *(uint **)(param_3 + (ulong)param_4 * 8 + 8);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  uVar5 = puVar4[2];
  if (param_5 != 4) {
    uVar5 = uVar5 >> 1;
    uVar1 = uVar5;
    if ((param_5 & 2) != 0) {
      uVar1 = 0;
    }
    uVar2 = (-(param_5 & 1) & uVar5) + uVar2;
    uVar3 = uVar1 + uVar3;
  }
  RenderArgs::setupViewport(param_1,uVar2,uVar3,uVar5,uVar5);
  CullingArgs::setViewport(param_2,uVar5,uVar5);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_3 + 0x70);
  return;
}


