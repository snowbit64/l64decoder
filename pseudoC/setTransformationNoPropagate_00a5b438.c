// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTransformationNoPropagate
// Entry Point: 00a5b438
// Size: 28 bytes
// Signature: undefined __thiscall setTransformationNoPropagate(RawTransformGroup * this, Matrix4x4 * param_1)


/* RawTransformGroup::setTransformationNoPropagate(Matrix4x4 const&) */

void __thiscall
RawTransformGroup::setTransformationNoPropagate(RawTransformGroup *this,Matrix4x4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0xa8) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x98) = uVar2;
  *(undefined8 *)(this + 0x80) = uVar7;
  *(undefined8 *)(this + 0x78) = uVar6;
  *(undefined8 *)(this + 0x90) = uVar5;
  *(undefined8 *)(this + 0x88) = uVar4;
  return;
}


