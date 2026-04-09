// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCollisionTimes_Bg
// Entry Point: 00bab380
// Size: 84 bytes
// Signature: undefined clearCollisionTimes_Bg(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::clearCollisionTimes_Bg() */

void Bt2PhysicsContextManager::clearCollisionTimes_Bg(void)

{
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
             *)&s_collisionTimeMap_Bg,DAT_0211dce8);
  s_collisionTimeMap_Bg = &DAT_0211dce8;
  DAT_0211dcf0 = 0;
  DAT_0211dce8 = (__tree_node *)0x0;
  s_timeCollisions_Bg = s_timeCollisions_Fg;
  return;
}


