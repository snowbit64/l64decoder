// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsCullingMatrices
// Entry Point: 009fcfb4
// Size: 36 bytes
// Signature: undefined __thiscall setPhysicsCullingMatrices(DeferredDebugRenderer * this, Matrix4x4 * param_1, Matrix4x4 * param_2, float param_3)


/* DeferredDebugRenderer::setPhysicsCullingMatrices(Matrix4x4 const&, Matrix4x4 const&, float) */

void __thiscall
DeferredDebugRenderer::setPhysicsCullingMatrices
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,Matrix4x4 *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x240) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x238) = uVar1;
  *(undefined8 *)(this + 0x250) = uVar3;
  *(undefined8 *)(this + 0x248) = uVar2;
  *(undefined8 *)(this + 0x220) = uVar5;
  *(undefined8 *)(this + 0x218) = uVar4;
  *(undefined8 *)(this + 0x230) = uVar7;
  *(undefined8 *)(this + 0x228) = uVar6;
  Frustum::setClipMatrix(*(Frustum **)(this + 0x210),param_2,param_3);
  return;
}


