// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTranslation
// Entry Point: 00a5cd3c
// Size: 68 bytes
// Signature: undefined __thiscall setTranslation(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setTranslation(Vector3 const&) */

void __thiscall TransformGroup::setTranslation(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  if (((byte)this[0x41] >> 3 & 1) != 0) {
    updateEulerFromMatrix();
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x130) = uVar1;
  updateTransformation();
  return;
}


