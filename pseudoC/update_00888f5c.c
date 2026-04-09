// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00888f5c
// Size: 44 bytes
// Signature: undefined __cdecl update(float param_1)


/* DogStateFollow::update(float) */

undefined8 DogStateFollow::update(float param_1)

{
  long in_x0;
  
  if (*(long *)(*(BehaviorTree **)(in_x0 + 0x18) + 0x28) == 0) {
    BehaviorTree::insert(*(BehaviorTree **)(in_x0 + 0x18),*(BTBehavior **)(in_x0 + 0x20));
  }
  return 0;
}


