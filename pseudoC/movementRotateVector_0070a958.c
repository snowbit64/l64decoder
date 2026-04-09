// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementRotateVector
// Entry Point: 0070a958
// Size: 76 bytes
// Signature: undefined __thiscall movementRotateVector(AnimalLocomotionSystem * this, Vector3 * param_1, float param_2)


/* AnimalLocomotionSystem::movementRotateVector(Vector3 const&, float) */

undefined4 __thiscall
AnimalLocomotionSystem::movementRotateVector
          (AnimalLocomotionSystem *this,Vector3 *param_1,float param_2)

{
  undefined4 uVar1;
  float local_8;
  float fStack_4;
  
  sincosf(param_2,&fStack_4,&local_8);
  uVar1 = NEON_fmadd(*(undefined4 *)param_1,local_8,fStack_4 * -*(float *)(param_1 + 8));
  NEON_fmadd(*(undefined4 *)param_1,fStack_4,local_8 * *(float *)(param_1 + 8));
  return uVar1;
}


