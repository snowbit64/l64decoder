// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRigidBody
// Entry Point: 00a5a3a0
// Size: 216 bytes
// Signature: undefined __cdecl createRigidBody(TransformGroup * param_1, RIGID_BODY_TYPE param_2)


/* PhysicsObjectUtil::createRigidBody(TransformGroup*, PhysicsObjectUtil::RIGID_BODY_TYPE) */

void PhysicsObjectUtil::createRigidBody(TransformGroup *param_1,RIGID_BODY_TYPE param_2)

{
  uint uVar1;
  Bt2PhysicsRBObject *this;
  long lVar2;
  Bt2ScenegraphPhysicsContext *this_00;
  uint uVar3;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar3 = 0x40;
    }
    else if (param_2 == 2) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0x100;
    }
    this = (Bt2PhysicsRBObject *)operator_new(0x90);
                    /* try { // try from 00a5a3f8 to 00a5a3ff has its CatchHandler @ 00a5a478 */
    Bt2PhysicsRBObject::Bt2PhysicsRBObject(this,param_1);
    lVar2 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar2 + 8);
    *(uint *)(this + 8) = *(uint *)(this + 8) | uVar1;
    Bt2PhysicsRBObject::raiseDirtyFlags(this,uVar1);
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffe3f;
    Bt2PhysicsRBObject::raiseDirtyFlags(this,0x1c0);
    *(uint *)(this + 8) = *(uint *)(this + 8) | uVar3;
    Bt2PhysicsRBObject::raiseDirtyFlags(this,uVar3);
    RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,(PhysicsObject *)this);
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this_00,param_1);
    return;
  }
  return;
}


