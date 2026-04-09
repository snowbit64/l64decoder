// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotationWithoutUpdate
// Entry Point: 00a5ce20
// Size: 24 bytes
// Signature: undefined __thiscall setRotationWithoutUpdate(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setRotationWithoutUpdate(Vector3 const&) */

void __thiscall TransformGroup::setRotationWithoutUpdate(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x13c) = uVar1;
  return;
}


