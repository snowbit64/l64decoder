// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScaleWithoutUpdate
// Entry Point: 00a5ce38
// Size: 20 bytes
// Signature: undefined __thiscall setScaleWithoutUpdate(TransformGroup * this, Vector3 * param_1)


/* TransformGroup::setScaleWithoutUpdate(Vector3 const&) */

void __thiscall TransformGroup::setScaleWithoutUpdate(TransformGroup *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x148) = uVar1;
  return;
}


