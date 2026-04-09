// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsJointObject
// Entry Point: 00990bd8
// Size: 100 bytes
// Signature: undefined __thiscall ~Bt2PhysicsJointObject(Bt2PhysicsJointObject * this)


/* Bt2PhysicsJointObject::~Bt2PhysicsJointObject() */

void __thiscall Bt2PhysicsJointObject::~Bt2PhysicsJointObject(Bt2PhysicsJointObject *this)

{
  *(undefined ***)this = &PTR__Bt2PhysicsJointObject_00fe0c78;
  *(undefined ***)(this + 0x18) = &PTR__Bt2PhysicsJointObject_00fe0cc8;
                    /* try { // try from 00990c08 to 00990c2b has its CatchHandler @ 00990c3c */
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 0x20),(WorldTransformationDirtyListener *)(this + 0x18));
  if ((*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (((byte)this[8] & 3) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueRemoveJoint
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this,(btRigidBody *)0x0);
  }
  Bt2ContextPhysicsObject::~Bt2ContextPhysicsObject((Bt2ContextPhysicsObject *)this);
  return;
}


