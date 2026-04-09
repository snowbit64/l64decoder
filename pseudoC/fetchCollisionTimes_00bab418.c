// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fetchCollisionTimes
// Entry Point: 00bab418
// Size: 104 bytes
// Signature: undefined fetchCollisionTimes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::fetchCollisionTimes() */

void Bt2PhysicsContextManager::fetchCollisionTimes(void)

{
  Mutex::enterCriticalSection();
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
  ::
  __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,void*>*,long>>
            ((__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
              *)&s_collisionTimeMap_Readable,(__tree_const_iterator)s_collisionTimeMap_Fg,0x211dd28)
  ;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
             *)&s_collisionTimeMap_Fg,DAT_0211dd28);
  DAT_0211dd28 = (__tree_node *)0x0;
  DAT_0211dd30 = 0;
  s_collisionTimeMap_Fg = &DAT_0211dd28;
  Mutex::leaveCriticalSection();
  return;
}


