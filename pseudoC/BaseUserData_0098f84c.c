// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BaseUserData
// Entry Point: 0098f84c
// Size: 32 bytes
// Signature: undefined __thiscall BaseUserData(BaseUserData * this, btCollisionShape * param_1, __map_iterator param_2)


/* Bt2PhysicsColShapeCache::BaseUserData::BaseUserData(btCollisionShape*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>, void*>*, long> >) */

void __thiscall
Bt2PhysicsColShapeCache::BaseUserData::BaseUserData
          (BaseUserData *this,btCollisionShape *param_1,__map_iterator param_2)

{
  *(undefined4 *)(this + 8) = 1;
  *(btCollisionShape **)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = (ulong)param_2;
  *(undefined ***)this = &PTR__BaseUserData_00fe0b90;
  return;
}


