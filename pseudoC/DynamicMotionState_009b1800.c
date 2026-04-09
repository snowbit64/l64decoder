// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DynamicMotionState
// Entry Point: 009b1800
// Size: 20 bytes
// Signature: undefined __thiscall ~DynamicMotionState(DynamicMotionState * this)


/* Bt2ScenegraphPhysicsContext::DynamicMotionState::~DynamicMotionState() */

void __thiscall
Bt2ScenegraphPhysicsContext::DynamicMotionState::~DynamicMotionState(DynamicMotionState *this)

{
                    /* try { // try from 009b1808 to 009b180b has its CatchHandler @ 009b1814 */
  btAlignedFreeInternal(this);
  return;
}


