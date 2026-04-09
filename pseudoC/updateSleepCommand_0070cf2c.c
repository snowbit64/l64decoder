// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSleepCommand
// Entry Point: 0070cf2c
// Size: 120 bytes
// Signature: undefined __thiscall updateSleepCommand(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::updateSleepCommand(float) */

void __thiscall
AnimalLocomotionSystem::updateSleepCommand(AnimalLocomotionSystem *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(this + 0x28) - param_1;
  *(float *)(this + 0x28) = fVar1;
  if (*(int *)(this + 0x40) == 1) {
    if (fVar1 <= 0.0) {
      *(undefined2 *)(this + 0x24) = 0x100;
    }
  }
  else if ((*(int *)(this + 0x40) == 0) && (fVar1 <= 0.0)) {
    *(undefined4 *)(this + 0x40) = 1;
    uVar2 = AnimalAnimationSystem::setState
                      ((AnimalAnimationSystem *)(this + 0x78),0xb,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x28) = uVar2;
  }
  return;
}


