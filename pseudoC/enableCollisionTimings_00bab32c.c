// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableCollisionTimings
// Entry Point: 00bab32c
// Size: 84 bytes
// Signature: undefined __thiscall enableCollisionTimings(Bt2PhysicsContextManager * this, bool param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bt2PhysicsContextManager::enableCollisionTimings(bool) */

void __thiscall
Bt2PhysicsContextManager::enableCollisionTimings(Bt2PhysicsContextManager *this,bool param_1)

{
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
             *)&s_collisionTimeMap_Readable,DAT_0211dd48);
  s_collisionTimeMap_Readable = &DAT_0211dd48;
  _DAT_0211dd50 = 0;
  DAT_0211dd48 = (__tree_node *)0x0;
  s_timeCollisions_Fg = param_1;
  return;
}


