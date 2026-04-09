// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recreateRigidBody
// Entry Point: 00a5a358
// Size: 72 bytes
// Signature: undefined __cdecl recreateRigidBody(TransformGroup * param_1)


/* PhysicsObjectUtil::recreateRigidBody(TransformGroup*) */

void PhysicsObjectUtil::recreateRigidBody(TransformGroup *param_1)

{
  long *plVar1;
  PhysicsObject *pPVar2;
  Bt2ScenegraphPhysicsContext *this;
  
  plVar1 = (long *)RawTransformGroup::getPhysicsObject();
  pPVar2 = (PhysicsObject *)(**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,pPVar2);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,param_1);
  return;
}


