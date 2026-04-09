// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementRotateVector
// Entry Point: 0070e1d0
// Size: 68 bytes
// Signature: undefined __thiscall movementRotateVector(AnimalLocomotionSystem * this, Vector2 * param_1, float param_2)


/* AnimalLocomotionSystem::movementRotateVector(Vector2 const&, float) */

undefined4 __thiscall
AnimalLocomotionSystem::movementRotateVector
          (AnimalLocomotionSystem *this,Vector2 *param_1,float param_2)

{
  undefined4 uVar1;
  float local_8;
  float fStack_4;
  
  sincosf(param_2,&fStack_4,&local_8);
  uVar1 = NEON_fmadd(*(undefined4 *)param_1,local_8,fStack_4 * -*(float *)(param_1 + 4));
  NEON_fmadd(*(undefined4 *)param_1,fStack_4,local_8 * *(float *)(param_1 + 4));
  return uVar1;
}


