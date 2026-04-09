// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTRSTransformation
// Entry Point: 00a5cb10
// Size: 68 bytes
// Signature: undefined __thiscall setTRSTransformation(TransformGroup * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* TransformGroup::setTRSTransformation(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
TransformGroup::setTRSTransformation
          (TransformGroup *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x130) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x13c) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x150) = uVar1;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffff7ff;
  updateTransformation();
  return;
}


