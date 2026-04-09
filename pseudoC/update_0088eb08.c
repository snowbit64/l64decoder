// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088eb08
// Size: 44 bytes
// Signature: undefined __cdecl update(float param_1)


/* DogStateWander::update(float) */

undefined8 DogStateWander::update(float param_1)

{
  long in_x0;
  
  if (*(long *)(*(BehaviorTree **)(in_x0 + 0x10) + 0x28) == 0) {
    BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x10),*(BTBehavior **)(in_x0 + 0x18));
  }
  return 0;
}


