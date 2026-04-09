// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BaseUserData
// Entry Point: 0098f950
// Size: 32 bytes
// Signature: undefined __thiscall BaseUserData(BaseUserData * this, __map_iterator param_1)


/* Bt2PhysicsColShapeCache::BaseUserData::BaseUserData(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>, void*>*, long> >) */

void __thiscall
Bt2PhysicsColShapeCache::BaseUserData::BaseUserData(BaseUserData *this,__map_iterator param_1)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(ulong *)(this + 0x18) = (ulong)param_1;
  *(undefined ***)this = &PTR__BaseUserData_00fe0b90;
  return;
}


