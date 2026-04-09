// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeReflectionDirection
// Entry Point: 009bd0bc
// Size: 64 bytes
// Signature: undefined __thiscall computeReflectionDirection(Bt2KinematicCharacterController * this, btVector3 * param_1, btVector3 * param_2)


/* Bt2KinematicCharacterController::computeReflectionDirection(btVector3 const&, btVector3 const&)
    */

float __thiscall
Bt2KinematicCharacterController::computeReflectionDirection
          (Bt2KinematicCharacterController *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(float *)param_1,*(float *)param_2,
                     *(float *)(param_1 + 4) * *(float *)(param_2 + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),uVar1);
  return *(float *)param_1 - *(float *)param_2 * (fVar2 + fVar2);
}


