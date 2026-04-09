// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 00990d54
// Size: 80 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsJointObject::removeFromScene() */

void Bt2PhysicsJointObject::removeFromScene(void)

{
  Bt2PhysicsJointObject *in_x0;
  
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(in_x0 + 0x20),(WorldTransformationDirtyListener *)(in_x0 + 0x18));
  if ((*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (((byte)in_x0[8] & 3) != 0)) {
    Bt2ScenegraphPhysicsContext::enqueueRemoveJoint
              (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10),in_x0,(btRigidBody *)0x0);
  }
  *(undefined8 *)(in_x0 + 0x28) = 0;
  Bt2ContextPhysicsObject::removeFromScene();
  return;
}


