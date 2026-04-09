// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScale
// Entry Point: 00a5cdc8
// Size: 68 bytes
// Signature: undefined __thiscall setScale(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setScale(Vector3 const&) */

void __thiscall TransformGroup::setScale(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  if (((byte)this[0x41] >> 3 & 1) != 0) {
    updateEulerFromMatrix();
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x148) = uVar1;
  updateTransformation();
  return;
}


