// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementLimitForce
// Entry Point: 0070e114
// Size: 80 bytes
// Signature: undefined __thiscall movementLimitForce(AnimalLocomotionSystem * this, Vector2 * param_1, float param_2)


/* AnimalLocomotionSystem::movementLimitForce(Vector2&, float) */

void __thiscall
AnimalLocomotionSystem::movementLimitForce
          (AnimalLocomotionSystem *this,Vector2 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar1 = (float)*(undefined8 *)param_1;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (param_2 * param_2 < fVar3) {
    fVar4 = 1.0;
    if (1e-06 < fVar3) {
      fVar4 = 1.0 / SQRT(fVar3);
    }
    *(ulong *)param_1 = CONCAT44(fVar2 * fVar4 * param_2,fVar1 * fVar4 * param_2);
  }
  return;
}


