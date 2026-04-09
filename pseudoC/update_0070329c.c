// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0070329c
// Size: 64 bytes
// Signature: undefined __thiscall update(Animal * this, float param_1, bool param_2)


/* Animal::update(float, bool) */

void __thiscall Animal::update(Animal *this,float param_1,bool param_2)

{
  BehaviorTree::tick();
  AnimalLocomotionSystem::update((AnimalLocomotionSystem *)(this + 0x1d8),param_1,param_2);
  return;
}


