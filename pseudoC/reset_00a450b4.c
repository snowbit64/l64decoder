// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a450b4
// Size: 164 bytes
// Signature: undefined __thiscall reset(ShadowRenderController * this, CullingArgs * param_1, bool param_2, uint param_3)


/* ShadowRenderController::reset(CullingArgs const*, bool, unsigned int) */

void __thiscall
ShadowRenderController::reset
          (ShadowRenderController *this,CullingArgs *param_1,bool param_2,uint param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(CullingArgs **)(this + 0x10) = param_1;
  plVar2 = (long *)RenderController::getShadowMap();
  uVar1 = (**(code **)(*plVar2 + 0x20))();
  *(undefined4 *)(this + 0x18) = uVar1;
  plVar2 = (long *)RenderController::getShadowMap();
  uVar1 = (**(code **)(*plVar2 + 0x28))();
  puVar3 = *(undefined8 **)(this + 0x10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  fVar4 = *(float *)(puVar3 + 0x18);
  fVar7 = *(float *)((long)puVar3 + 0xc4);
  *(float *)(this + 0x20) = fVar4;
  *(float *)(this + 0x24) = fVar7;
  *(float *)(this + 0x28) = 1.0 / (fVar7 - fVar4);
  uVar6 = puVar3[5];
  uVar5 = puVar3[4];
  uVar9 = puVar3[7];
  uVar8 = puVar3[6];
  uVar11 = puVar3[1];
  uVar10 = *puVar3;
  uVar13 = puVar3[3];
  uVar12 = puVar3[2];
  this[0x6c] = (ShadowRenderController)param_2;
  this[0x74] = (ShadowRenderController)param_2;
  *(uint *)(this + 0x70) = param_3;
  *(undefined8 *)(this + 100) = uVar9;
  *(undefined8 *)(this + 0x5c) = uVar8;
  *(undefined8 *)(this + 0x54) = uVar6;
  *(undefined8 *)(this + 0x4c) = uVar5;
  *(undefined8 *)(this + 0x44) = uVar13;
  *(undefined8 *)(this + 0x3c) = uVar12;
  *(undefined8 *)(this + 0x34) = uVar11;
  *(undefined8 *)(this + 0x2c) = uVar10;
  return;
}


