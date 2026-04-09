// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsJointObject
// Entry Point: 00990c50
// Size: 104 bytes
// Signature: undefined __thiscall ~Bt2PhysicsJointObject(Bt2PhysicsJointObject * this)


/* non-virtual thunk to Bt2PhysicsJointObject::~Bt2PhysicsJointObject() */

void __thiscall Bt2PhysicsJointObject::~Bt2PhysicsJointObject(Bt2PhysicsJointObject *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + -0x18);
  *this_00 = &PTR__Bt2PhysicsJointObject_00fe0c78;
  *(undefined ***)this = &PTR__Bt2PhysicsJointObject_00fe0cc8;
                    /* try { // try from 00990c80 to 00990ca7 has its CatchHandler @ 00990cb8 */
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 8),(WorldTransformationDirtyListener *)this);
  if ((*(Bt2ScenegraphPhysicsContext **)(this + -8) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (((byte)this[-0x10] & 3) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueRemoveJoint
              (*(Bt2ScenegraphPhysicsContext **)(this + -8),(Bt2PhysicsJointObject *)this_00,
               (btRigidBody *)0x0);
  }
  Bt2ContextPhysicsObject::~Bt2ContextPhysicsObject((Bt2ContextPhysicsObject *)this_00);
  return;
}


