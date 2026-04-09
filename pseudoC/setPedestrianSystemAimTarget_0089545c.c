// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPedestrianSystemAimTarget
// Entry Point: 0089545c
// Size: 16 bytes
// Signature: undefined __thiscall setPedestrianSystemAimTarget(PedestrianSystem * this, TransformGroup * param_1)


/* PedestrianSystem::setPedestrianSystemAimTarget(TransformGroup*) */

void __thiscall
PedestrianSystem::setPedestrianSystemAimTarget(PedestrianSystem *this,TransformGroup *param_1)

{
  *(TransformGroup **)(this + 0x25958) = param_1;
  return;
}


