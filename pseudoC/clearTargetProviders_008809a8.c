// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearTargetProviders
// Entry Point: 008809a8
// Size: 48 bytes
// Signature: undefined clearTargetProviders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::clearTargetProviders() */

void AnimalSteering::clearTargetProviders(void)

{
  long in_x0;
  
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
             *)(in_x0 + 0xc0),*(__tree_node **)(in_x0 + 200));
  *(__tree_node ***)(in_x0 + 0xc0) = (__tree_node **)(in_x0 + 200);
  *(undefined8 *)(in_x0 + 200) = 0;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = 0;
  return;
}


