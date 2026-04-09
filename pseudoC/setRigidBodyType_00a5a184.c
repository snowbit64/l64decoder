// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRigidBodyType
// Entry Point: 00a5a184
// Size: 468 bytes
// Signature: undefined __cdecl setRigidBodyType(TransformGroup * param_1, RIGID_BODY_TYPE param_2, bool param_3)


/* PhysicsObjectUtil::setRigidBodyType(TransformGroup*, PhysicsObjectUtil::RIGID_BODY_TYPE, bool) */

uint PhysicsObjectUtil::setRigidBodyType
               (TransformGroup *param_1,RIGID_BODY_TYPE param_2,bool param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  Bt2PhysicsRBObject *pBVar5;
  undefined8 *puVar6;
  long *plVar7;
  PhysicsObject *pPVar8;
  Bt2ScenegraphPhysicsContext *this;
  uint uVar9;
  uint uVar10;
  
  lVar4 = RawTransformGroup::getPhysicsObject();
  if (param_2 == 0) {
    if ((*(uint *)(lVar4 + 8) >> 3 & 1) != 0) {
      plVar7 = (long *)RawTransformGroup::getPhysicsObject();
      uVar9 = 2;
      if ((*(uint *)(plVar7 + 1) & 0x80) == 0) {
        uVar9 = 3;
      }
      if ((*(uint *)(plVar7 + 1) & 0x40) != 0) {
        uVar9 = 1;
      }
      if (param_3) {
        puVar6 = (undefined8 *)operator_new(0x10);
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &PTR__PhysicsObject_00fe0d88;
        RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,(PhysicsObject *)puVar6);
        return uVar9;
      }
      pBVar5 = (Bt2PhysicsRBObject *)(**(code **)(*plVar7 + 0x10))(plVar7,param_1);
      *(uint *)(pBVar5 + 8) = *(uint *)(pBVar5 + 8) & 0xfffffe3f;
      Bt2PhysicsRBObject::raiseDirtyFlags(pBVar5,0x1c0);
      RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,(PhysicsObject *)pBVar5);
      return uVar9;
    }
  }
  else {
    if ((*(uint *)(lVar4 + 8) >> 3 & 1) != 0) {
      pBVar5 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
      uVar9 = *(uint *)(pBVar5 + 8);
      if ((uVar9 >> 6 & 1) == 0) {
        bVar1 = 0;
        if ((uVar9 >> 7 & 1) == 0) {
          bVar3 = (uVar9 & 0x100) == 0;
          uVar10 = -(uVar9 >> 8 & 1) & 3;
        }
        else {
          bVar3 = false;
          uVar10 = 2;
        }
        bVar2 = 1;
      }
      else {
        bVar3 = false;
        bVar2 = 0;
        bVar1 = 1;
        uVar10 = 1;
      }
      *(uint *)(pBVar5 + 8) = uVar9 & 0xfffffe3f;
      Bt2PhysicsRBObject::raiseDirtyFlags(pBVar5,0x1c0);
      if (param_2 == 1) {
        uVar9 = 0x40;
        bVar1 = bVar2;
      }
      else if (param_2 == 2) {
        uVar9 = 0x80;
      }
      else {
        uVar9 = 0x100;
      }
      *(uint *)(pBVar5 + 8) = *(uint *)(pBVar5 + 8) | uVar9;
      Bt2PhysicsRBObject::raiseDirtyFlags(pBVar5,uVar9);
      if (!(bool)(bVar3 | bVar1)) {
        return uVar10;
      }
      plVar7 = (long *)RawTransformGroup::getPhysicsObject();
      pPVar8 = (PhysicsObject *)(**(code **)(*plVar7 + 0x10))(plVar7,param_1);
      RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,pPVar8);
      ScenegraphPhysicsContextManager::getInstance();
      this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,param_1);
      return uVar10;
    }
    createRigidBody(param_1,param_2);
  }
  return 0;
}


