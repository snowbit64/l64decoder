// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementUpdateArrive
// Entry Point: 0070d97c
// Size: 144 bytes
// Signature: undefined __thiscall movementUpdateArrive(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::movementUpdateArrive(float) */

void __thiscall
AnimalLocomotionSystem::movementUpdateArrive(AnimalLocomotionSystem *this,float param_1)

{
  undefined8 *puVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x484);
  *(float *)(this + 0x484) = fVar2 - param_1;
  if (0.0 < fVar2 - param_1) {
    movementApplyForce(*(undefined4 *)(this + 0x47c),*(undefined4 *)(this + 0x480),this,0);
    return;
  }
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x444) = 0;
  *(undefined8 *)(this + 0x43c) = 0;
  if (this[0x4a4] == (AnimalLocomotionSystem)0x0) {
    if (*(int *)(this + 0x34) == 1) {
      puVar1 = *(undefined8 **)(this + 0x3b8);
      puVar1[3] = *puVar1;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + 1);
    }
  }
  else {
    this[0x4a4] = (AnimalLocomotionSystem)0x0;
    if (*(int *)(this + 0x50) == 1) {
      *(undefined4 *)(this + 0x50) = 2;
    }
    if (*(int *)(this + 0x34) == 1) {
      *(undefined4 *)(this + 0x34) = 3;
      return;
    }
  }
  return;
}


