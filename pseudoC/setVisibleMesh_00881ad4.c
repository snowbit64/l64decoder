// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisibleMesh
// Entry Point: 00881ad4
// Size: 8 bytes
// Signature: undefined __thiscall setVisibleMesh(DeerBehaviorContext * this, TransformGroup * param_1)


/* DeerBehaviorContext::setVisibleMesh(TransformGroup*) */

void __thiscall
DeerBehaviorContext::setVisibleMesh(DeerBehaviorContext *this,TransformGroup *param_1)

{
  *(TransformGroup **)(this + 0x128) = param_1;
  return;
}


