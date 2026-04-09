// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeJointBreakReport
// Entry Point: 009ab7a0
// Size: 24 bytes
// Signature: undefined __thiscall removeJointBreakReport(Bt2ScenegraphPhysicsContext * this, IJointBreakReport * param_1)


/* Bt2ScenegraphPhysicsContext::removeJointBreakReport(IJointBreakReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeJointBreakReport
          (Bt2ScenegraphPhysicsContext *this,IJointBreakReport *param_1)

{
  if (*(IJointBreakReport **)(this + 0x128) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x128) = 0;
  return;
}


