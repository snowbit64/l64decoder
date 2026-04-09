// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2ScenegraphPhysicsContext
// Entry Point: 0099a718
// Size: 1300 bytes
// Signature: undefined __thiscall ~Bt2ScenegraphPhysicsContext(Bt2ScenegraphPhysicsContext * this)


/* Bt2ScenegraphPhysicsContext::~Bt2ScenegraphPhysicsContext() */

void __thiscall
Bt2ScenegraphPhysicsContext::~Bt2ScenegraphPhysicsContext(Bt2ScenegraphPhysicsContext *this)

{
  void **ppvVar1;
  Bt2PhysicsContextManager *this_00;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
                    /* try { // try from 0099a730 to 0099a757 has its CatchHandler @ 0099ac30 */
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = (Bt2PhysicsContextManager *)Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::releaseWorld
            (this_00,*(Bt2World **)(this + 0x30),*(btCollisionConfiguration **)(this + 0x38));
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  pvVar2 = *(void **)(this + 0x5b0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x5b8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x598);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x5a0) = pvVar2;
    operator_delete(pvVar2);
  }
  Event::~Event((Event *)(this + 0x534));
  Event::~Event((Event *)(this + 0x4d8));
  Thread::~Thread((Thread *)(this + 0x490));
  pvVar2 = *(void **)(this + 0x468);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 0x470);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        if ((*(void **)((long)pvVar4 + -0x10) != (void *)0x0) &&
           (*(char *)((long)pvVar4 + -8) != '\0')) {
                    /* try { // try from 0099a828 to 0099a82b has its CatchHandler @ 0099adb4 */
          btAlignedFreeInternal(*(void **)((long)pvVar4 + -0x10));
        }
        pvVar3 = (void *)((long)pvVar4 + -0x50);
        *(undefined *)((long)pvVar4 + -8) = 1;
        *(undefined8 *)((long)pvVar4 + -0x10) = 0;
        *(undefined8 *)((long)pvVar4 + -0x1c) = 0;
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = *(void **)(this + 0x468);
    }
    *(void **)(this + 0x470) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x450);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 0x458);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        if ((*(void **)((long)pvVar4 + -0x10) != (void *)0x0) &&
           (*(char *)((long)pvVar4 + -8) != '\0')) {
                    /* try { // try from 0099a88c to 0099a88f has its CatchHandler @ 0099adb0 */
          btAlignedFreeInternal(*(void **)((long)pvVar4 + -0x10));
        }
        pvVar3 = (void *)((long)pvVar4 + -0x50);
        *(undefined *)((long)pvVar4 + -8) = 1;
        *(undefined8 *)((long)pvVar4 + -0x10) = 0;
        *(undefined8 *)((long)pvVar4 + -0x1c) = 0;
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = *(void **)(this + 0x450);
    }
    *(void **)(this + 0x458) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x430);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 0x438);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0xb0);
        FUN_009b213c(this + 0x440,pvVar4);
      } while (pvVar4 != pvVar2);
      pvVar3 = *(void **)(this + 0x430);
    }
    *(void **)(this + 0x438) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x418);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 0x420);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0xb0);
        FUN_009b213c(this + 0x428,pvVar4);
      } while (pvVar4 != pvVar2);
      pvVar3 = *(void **)(this + 0x418);
    }
    *(void **)(this + 0x420) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x3f8);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 0x400);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        if ((*(void **)((long)pvVar4 + -0x28) != (void *)0x0) &&
           (*(char *)((long)pvVar4 + -0x20) != '\0')) {
                    /* try { // try from 0099a978 to 0099a97b has its CatchHandler @ 0099adac */
          btAlignedFreeInternal(*(void **)((long)pvVar4 + -0x28));
        }
        pvVar3 = (void *)((long)pvVar4 + -0x40);
        *(undefined *)((long)pvVar4 + -0x20) = 1;
        *(undefined8 *)((long)pvVar4 + -0x28) = 0;
        *(undefined8 *)((long)pvVar4 + -0x34) = 0;
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = *(void **)(this + 0x3f8);
    }
    *(void **)(this + 0x400) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x3e0);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)(this + 1000);
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        if ((*(void **)((long)pvVar4 + -0x28) != (void *)0x0) &&
           (*(char *)((long)pvVar4 + -0x20) != '\0')) {
                    /* try { // try from 0099a9dc to 0099a9df has its CatchHandler @ 0099ada8 */
          btAlignedFreeInternal(*(void **)((long)pvVar4 + -0x28));
        }
        pvVar3 = (void *)((long)pvVar4 + -0x40);
        *(undefined *)((long)pvVar4 + -0x20) = 1;
        *(undefined8 *)((long)pvVar4 + -0x28) = 0;
        *(undefined8 *)((long)pvVar4 + -0x34) = 0;
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = *(void **)(this + 0x3e0);
    }
    *(void **)(this + 1000) = pvVar2;
    operator_delete(pvVar3);
  }
  if (*(long *)(this + 0x3c0) != 0) {
    FUN_009b20a4(this + 0x3c0);
    operator_delete(*(void **)(this + 0x3c0));
  }
  if (*(long *)(this + 0x3a8) != 0) {
    FUN_009b20a4(this + 0x3a8);
    operator_delete(*(void **)(this + 0x3a8));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
             *)(this + 0x390),*(__tree_node **)(this + 0x398));
  pvVar2 = *(void **)(this + 0x370);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x378) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x358);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x360) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x340);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x348) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsCharacterController*>>>
             *)(this + 0x328),*(__tree_node **)(this + 0x330));
  pvVar2 = *(void **)(this + 0x308);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x310) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x2f0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x2f8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x2d8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x2e0) = pvVar2;
    operator_delete(pvVar2);
  }
  ppvVar1 = (void **)*(void **)(this + 0x2c0);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x2b0);
  *(undefined8 *)(this + 0x2b0) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x290);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x298) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x278);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x280) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightActorUserData>>>
             *)(this + 0x260),*(__tree_node **)(this + 0x268));
  operator_delete__(*(void **)(this + 0x248));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
  ::destroy((__tree<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
             *)(this + 0x230),*(__tree_node **)(this + 0x238));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>>>
  ::destroy((__tree<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<unsigned_int,1u>>>>
             *)(this + 0x218),*(__tree_node **)(this + 0x220));
  operator_delete__(*(void **)(this + 0x208));
  pvVar2 = *(void **)(this + 0x1f0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1d8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1e0) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Bt2PhysicsUtil::LightJointUserData>>>
             *)(this + 0x1c0),*(__tree_node **)(this + 0x1c8));
  pvVar2 = *(void **)(this + 0x1a0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>>>
  ::destroy((__tree<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>>>
             *)(this + 0x188),*(__tree_node **)(this + 400));
  operator_delete__(*(void **)(this + 0x170));
  pvVar2 = *(void **)(this + 0x158);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x140);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete__(*(void **)(this + 0x130));
  pvVar2 = *(void **)(this + 0x110);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xf8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xe0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 200);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xb0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>,std::__ndk1::__map_value_compare<Bt2PhysicsColShapeCache::ScaledColShapeId,std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>,std::__ndk1::less<Bt2PhysicsColShapeCache::ScaledColShapeId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>,std::__ndk1::__map_value_compare<Bt2PhysicsColShapeCache::ScaledColShapeId,std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>,std::__ndk1::less<Bt2PhysicsColShapeCache::ScaledColShapeId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,btCollisionShape*>>>
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (Bt2ScenegraphPhysicsContext)0x0))
  {
                    /* try { // try from 0099ac08 to 0099ac0b has its CatchHandler @ 0099ac2c */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (Bt2ScenegraphPhysicsContext)0x1;
  return;
}


