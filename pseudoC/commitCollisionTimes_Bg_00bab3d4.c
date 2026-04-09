// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: commitCollisionTimes_Bg
// Entry Point: 00bab3d4
// Size: 68 bytes
// Signature: undefined commitCollisionTimes_Bg(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::commitCollisionTimes_Bg() */

void Bt2PhysicsContextManager::commitCollisionTimes_Bg(void)

{
  Mutex::enterCriticalSection();
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
  ::
  __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,void*>*,long>>
            ((__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
              *)&s_collisionTimeMap_Fg,(__tree_const_iterator)s_collisionTimeMap_Bg,0x211dce8);
  Mutex::leaveCriticalSection();
  return;
}


