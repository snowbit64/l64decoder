// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupFrustum
// Entry Point: 00a056c0
// Size: 152 bytes
// Signature: undefined __thiscall setupFrustum(TransformArgs * this, Matrix4x4 * param_1, Matrix4x4 * param_2, Matrix4x4 * param_3, float param_4, float param_5, Vector3 * param_6)


/* TransformArgs::setupFrustum(Matrix4x4 const&, Matrix4x4 const&, Matrix4x4 const&, float, float,
   Vector3 const*) */

void __thiscall
TransformArgs::setupFrustum
          (TransformArgs *this,Matrix4x4 *param_1,Matrix4x4 *param_2,Matrix4x4 *param_3,
          float param_4,float param_5,Vector3 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 8) = uVar7;
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar4;
  Matrix4x4::invert3x4((Matrix4x4 *)(this + 0x40),(Matrix4x4 *)this);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0xb8) = uVar3;
  *(undefined8 *)(this + 0xb0) = uVar2;
  *(undefined8 *)(this + 0x88) = uVar7;
  *(undefined8 *)(this + 0x80) = uVar6;
  *(undefined8 *)(this + 0x98) = uVar5;
  *(undefined8 *)(this + 0x90) = uVar4;
  Matrix4x4::mult((Matrix4x4 *)(this + 0xd0),(Matrix4x4 *)(this + 0x80),(Matrix4x4 *)this);
  *(float *)(this + 0xc0) = param_4;
  *(float *)(this + 0xc4) = param_5;
  Frustum::setClipMatrix((Frustum *)(this + 0x1e0),param_3,param_5);
  finishSetup(this,param_6);
  return;
}


