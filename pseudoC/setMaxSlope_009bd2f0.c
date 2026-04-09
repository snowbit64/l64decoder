// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxSlope
// Entry Point: 009bd2f0
// Size: 40 bytes
// Signature: undefined __thiscall setMaxSlope(Bt2KinematicCharacterController * this, float param_1)


/* Bt2KinematicCharacterController::setMaxSlope(float) */

void __thiscall
Bt2KinematicCharacterController::setMaxSlope(Bt2KinematicCharacterController *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x18) = param_1;
  fVar1 = cosf(param_1);
  *(float *)(this + 0x1c) = fVar1;
  return;
}


