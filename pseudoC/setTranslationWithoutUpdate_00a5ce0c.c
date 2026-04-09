// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTranslationWithoutUpdate
// Entry Point: 00a5ce0c
// Size: 20 bytes
// Signature: undefined __thiscall setTranslationWithoutUpdate(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setTranslationWithoutUpdate(Vector3 const&) */

void __thiscall TransformGroup::setTranslationWithoutUpdate(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x130) = uVar1;
  return;
}


