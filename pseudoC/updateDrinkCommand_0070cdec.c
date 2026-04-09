// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDrinkCommand
// Entry Point: 0070cdec
// Size: 40 bytes
// Signature: undefined __thiscall updateDrinkCommand(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::updateDrinkCommand(float) */

void __thiscall
AnimalLocomotionSystem::updateDrinkCommand(AnimalLocomotionSystem *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x28);
  *(float *)(this + 0x28) = fVar1 - param_1;
  if ((*(int *)(this + 0x3c) == 0) && (fVar1 - param_1 <= 0.0)) {
    *(undefined2 *)(this + 0x24) = 0x100;
  }
  return;
}


