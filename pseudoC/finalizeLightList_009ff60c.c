// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeLightList
// Entry Point: 009ff60c
// Size: 472 bytes
// Signature: undefined __thiscall finalizeLightList(LightList * this, IRenderDevice * param_1)


/* LightList::finalizeLightList(IRenderDevice*) */

void __thiscall LightList::finalizeLightList(LightList *this,IRenderDevice *param_1)

{
  int iVar1;
  PIXEL_FORMAT PVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  EngineManager::getInstance();
  lVar6 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x20) != lVar6) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(lVar6 + uVar5 * 8);
      fVar7 = (float)LightSource::getDepthMapBias();
      fVar8 = (float)LightSource::getDepthMapSlopeScaleBias();
      fVar9 = (float)LightSource::getDepthMapSlopeClamp();
      PVar2 = (**(code **)(**(long **)(*(long *)(this + 0xb0) + 0x98) + 0x18))();
      uVar3 = SharedRenderArgs::getShadowRasterizerState
                        (*(SharedRenderArgs **)(this + 0xb0),param_1,-fVar7,-fVar8,-fVar9,
                         *(int *)(lVar6 + 0x20) == 0,false,PVar2);
      iVar1 = *(int *)(lVar6 + 0x20);
      *(undefined8 *)(*(long *)(lVar6 + 8) + 0x68) = uVar3;
      uVar3 = SharedRenderArgs::getShadowRasterizerState
                        (*(SharedRenderArgs **)(this + 0xb0),param_1,-fVar7,-fVar8,-fVar9,iVar1 == 0
                         ,true,PVar2);
      uVar5 = (ulong)((int)uVar5 + 1);
      *(undefined8 *)(*(long *)(lVar6 + 8) + 0x70) = uVar3;
      lVar6 = *(long *)(this + 0x18);
    } while (uVar5 < (ulong)(*(long *)(this + 0x20) - lVar6 >> 3));
  }
  lVar6 = *(long *)(this + 0x98);
  if (*(long *)(this + 0xa0) != lVar6) {
    uVar5 = 0;
    do {
      PVar2 = (**(code **)(**(long **)(*(long *)(this + 0xb0) + 0x98) + 0x18))();
      lVar6 = lVar6 + uVar5 * 0x140;
      uVar3 = SharedRenderArgs::getShadowRasterizerState
                        (*(SharedRenderArgs **)(this + 0xb0),param_1,-*(float *)(lVar6 + 0x38),
                         -*(float *)(lVar6 + 0x3c),-*(float *)(lVar6 + 0x40),false,false,PVar2);
      fVar7 = *(float *)(lVar6 + 0x38);
      fVar8 = *(float *)(lVar6 + 0x3c);
      fVar9 = *(float *)(lVar6 + 0x40);
      *(undefined8 *)(*(long *)(lVar6 + 8) + 0x68) = uVar3;
      uVar3 = SharedRenderArgs::getShadowRasterizerState
                        (*(SharedRenderArgs **)(this + 0xb0),param_1,-fVar7,-fVar8,-fVar9,false,true
                         ,PVar2);
      uVar5 = (ulong)((int)uVar5 + 1);
      *(undefined8 *)(*(long *)(lVar6 + 8) + 0x70) = uVar3;
      lVar6 = *(long *)(this + 0x98);
      uVar4 = (*(long *)(this + 0xa0) - lVar6 >> 6) * -0x3333333333333333;
    } while (uVar5 <= uVar4 && uVar4 - uVar5 != 0);
  }
  return;
}


