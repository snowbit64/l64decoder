// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotation
// Entry Point: 00a5cd80
// Size: 72 bytes
// Signature: undefined __thiscall setRotation(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setRotation(Vector3 const&) */

void __thiscall TransformGroup::setRotation(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  if (((byte)this[0x41] >> 3 & 1) != 0) {
    updateEulerFromMatrix();
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x13c) = uVar1;
  updateTransformation();
  return;
}


