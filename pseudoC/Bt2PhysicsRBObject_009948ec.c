// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsRBObject
// Entry Point: 009948ec
// Size: 196 bytes
// Signature: undefined __thiscall ~Bt2PhysicsRBObject(Bt2PhysicsRBObject * this)


/* Bt2PhysicsRBObject::~Bt2PhysicsRBObject() */

void __thiscall Bt2PhysicsRBObject::~Bt2PhysicsRBObject(Bt2PhysicsRBObject *this)

{
  Bt2ScenegraphPhysicsContext *this_00;
  
  *(undefined ***)this = &PTR__Bt2PhysicsRBObject_00fe0ee8;
  *(undefined ***)(this + 0x18) = &PTR__Bt2PhysicsRBObject_00fe0f38;
                    /* try { // try from 0099491c to 0099499f has its CatchHandler @ 009949b0 */
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 0x28),(WorldTransformationDirtyListener *)(this + 0x18));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
  ::__erase_unique<btRigidBody_const*>
            ((__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
              *)&s_objectMap,(btRigidBody **)(this + 0x30));
  if (*(btCollisionShape **)(this + 0x48) != (btCollisionShape *)0x0) {
    Bt2ScenegraphPhysicsContext::enqueueReleaseColShape
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x38),*(btCollisionShape **)(this + 0x48),
               false);
  }
  this_00 = *(Bt2ScenegraphPhysicsContext **)(this + 0x10);
  if ((this_00 == (Bt2ScenegraphPhysicsContext *)0x0) || ((*(uint *)(this + 8) & 3) == 0)) {
    if (*(btCollisionShape **)(this + 0x40) != (btCollisionShape *)0x0) {
      Bt2ScenegraphPhysicsContext::enqueueReleaseColShape
                (*(Bt2ScenegraphPhysicsContext **)(this + 0x38),*(btCollisionShape **)(this + 0x40),
                 true);
    }
  }
  else if ((*(uint *)(this + 8) >> 10 & 1) == 0) {
    Bt2ScenegraphPhysicsContext::enqueueRemoveActor(this_00,this,true);
  }
  else {
    Bt2ScenegraphPhysicsContext::removeActorFromQueues(this_00,this);
  }
  if (*(undefined8 **)(this + 0x50) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x50))();
  }
  Bt2ContextPhysicsObject::~Bt2ContextPhysicsObject((Bt2ContextPhysicsObject *)this);
  return;
}


