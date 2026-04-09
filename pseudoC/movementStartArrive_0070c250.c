// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementStartArrive
// Entry Point: 0070c250
// Size: 88 bytes
// Signature: undefined __thiscall movementStartArrive(AnimalLocomotionSystem * this, float param_1, bool param_2)


/* AnimalLocomotionSystem::movementStartArrive(float, bool) */

void __thiscall
AnimalLocomotionSystem::movementStartArrive(AnimalLocomotionSystem *this,float param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  
  this[0x4a4] = (AnimalLocomotionSystem)param_2;
  this[0x4a5] = (AnimalLocomotionSystem)0x0;
  *(undefined4 *)(this + 0x428) = 3;
  fVar1 = param_1 * 0.5;
  if (*(float *)(this + 0x488) <= 4.0) {
    fVar1 = param_1;
  }
  fVar2 = -1.0 / (fVar1 * 0.001);
  *(float *)(this + 0x484) = fVar1 * 0.001;
  *(ulong *)(this + 0x47c) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x43c) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0x43c) * fVar2);
  return;
}


