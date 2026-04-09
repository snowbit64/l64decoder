// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addJointBreakReport
// Entry Point: 009ab798
// Size: 8 bytes
// Signature: undefined __thiscall addJointBreakReport(Bt2ScenegraphPhysicsContext * this, IJointBreakReport * param_1)


/* Bt2ScenegraphPhysicsContext::addJointBreakReport(IJointBreakReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addJointBreakReport
          (Bt2ScenegraphPhysicsContext *this,IJointBreakReport *param_1)

{
  *(IJointBreakReport **)(this + 0x128) = param_1;
  return;
}


