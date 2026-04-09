// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleTransformGroup
// Entry Point: 0099c310
// Size: 716 bytes
// Signature: undefined __thiscall addSingleTransformGroup(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::addSingleTransformGroup(TransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addSingleTransformGroup
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1)

{
  uint uVar1;
  long lVar2;
  TransformGroup **ppTVar3;
  TransformGroup **ppTVar4;
  pair pVar5;
  long *this_00;
  long lVar6;
  TransformGroup *pTVar7;
  ulong uVar8;
  TransformGroup *local_78;
  TransformGroup *local_70;
  long *local_68;
  TransformGroup **local_60;
  TransformGroup **local_58;
  TransformGroup **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (long *)RawTransformGroup::getPhysicsObject();
  uVar1 = *(uint *)(this_00 + 1);
  if ((uVar1 & 1) != 0) goto LAB_0099c5b0;
  ppTVar3 = local_58;
  if ((uVar1 >> 3 & 1) == 0) {
    if (((uVar1 >> 4 & 1) != 0) &&
       (local_68 = this_00,
       ScenegraphPhysicsUtil::findJointTransforms((TransformGroup *)this_00[4],&local_70,&local_78),
       ppTVar3 = local_58, ((ulong)local_70 | (ulong)local_78) != 0)) {
      if (local_70 != (TransformGroup *)0x0) {
        addSingleTransformGroup(this,local_70);
      }
      if (local_78 == (TransformGroup *)0x0) {
        pTVar7 = (TransformGroup *)0x0;
      }
      else {
        addSingleTransformGroup(this,local_78);
        pTVar7 = local_78;
      }
      Bt2PhysicsJointObject::create((Bt2PhysicsJointObject *)this_00,this,local_70,pTVar7);
      ppTVar3 = local_58;
      if (this_00[5] != 0) {
        if (local_70 != (TransformGroup *)0x0) {
          lVar6 = RawTransformGroup::getPhysicsObject();
          if (*(TransformGroup ***)(lVar6 + 0x30) != (TransformGroup **)0x0) {
            local_58 = (TransformGroup **)0x0;
            local_50 = (TransformGroup **)0x0;
                    /* try { // try from 0099c4e0 to 0099c4e7 has its CatchHandler @ 0099c5f8 */
            local_60 = *(TransformGroup ***)(lVar6 + 0x30);
            pVar5 = std::__ndk1::
                    map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
                    ::
                    insert<std::__ndk1::pair<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,void>
                              ((map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
                                *)(this + 0x230),(pair *)&local_60);
            operator_delete__(local_58);
            operator_delete__((void *)0x0);
            SimpleArray<Bt2PhysicsJointObject*,false,1u>::push_back
                      ((SimpleArray<Bt2PhysicsJointObject*,false,1u> *)((ulong)pVar5 + 0x28),
                       (Bt2PhysicsJointObject **)&local_68);
          }
        }
        ppTVar3 = local_58;
        if (local_78 != (TransformGroup *)0x0) {
          lVar6 = RawTransformGroup::getPhysicsObject();
          ppTVar3 = local_58;
          if (*(TransformGroup ***)(lVar6 + 0x30) != (TransformGroup **)0x0) {
            local_58 = (TransformGroup **)0x0;
            local_50 = (TransformGroup **)0x0;
                    /* try { // try from 0099c528 to 0099c52f has its CatchHandler @ 0099c5f4 */
            local_60 = *(TransformGroup ***)(lVar6 + 0x30);
            pVar5 = std::__ndk1::
                    map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
                    ::
                    insert<std::__ndk1::pair<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,void>
                              ((map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
                                *)(this + 0x230),(pair *)&local_60);
            operator_delete__(local_58);
            operator_delete__((void *)0x0);
            SimpleArray<Bt2PhysicsJointObject*,false,1u>::push_back
                      ((SimpleArray<Bt2PhysicsJointObject*,false,1u> *)((ulong)pVar5 + 0x28),
                       (Bt2PhysicsJointObject **)&local_68);
            ppTVar3 = local_58;
          }
        }
      }
    }
  }
  else if ((uVar1 >> 9 & 1) == 0) {
    if ((uVar1 >> 10 & 1) == 0) {
      if (((uint)*(undefined8 *)(param_1 + 0x10) >> 0xb & 1) == 0) {
        if ((((uint)*(undefined8 *)(param_1 + 0x10) >> 7 & 1) != 0) && ((uVar1 >> 6 & 1) != 0)) {
          addTerrain(this,(TerrainTransformGroup *)param_1);
          ppTVar3 = local_58;
        }
      }
      else if ((uVar1 >> 6 & 1) == 0) {
        if ((uVar1 & 0x180) != 0) {
          std::__ndk1::vector<GsShape*,std::__ndk1::allocator<GsShape*>>::vector
                    ((vector<GsShape*,std::__ndk1::allocator<GsShape*>> *)&local_60,1);
          *local_60 = param_1;
                    /* try { // try from 0099c488 to 0099c497 has its CatchHandler @ 0099c5dc */
          addNonStaticActor(this,param_1,(vector *)&local_60);
          ppTVar4 = local_60;
          ppTVar3 = local_58;
          goto joined_r0x0099c458;
        }
      }
      else {
        addStaticActor(this,(GsShape *)param_1);
        ppTVar3 = local_58;
      }
    }
  }
  else {
    local_60 = (TransformGroup **)0x0;
    local_58 = (TransformGroup **)0x0;
    local_50 = (TransformGroup **)0x0;
                    /* try { // try from 0099c3d0 to 0099c41f has its CatchHandler @ 0099c610 */
    local_60 = (TransformGroup **)operator_new(0x20);
    local_50 = local_60 + 4;
    local_58 = local_60;
    if (((byte)param_1[0x11] >> 3 & 1) != 0) {
      local_58 = local_60 + 1;
      *local_60 = param_1;
    }
    ScenegraphPhysicsUtil::collectCompoundChildren(param_1,(vector *)&local_60);
    ppTVar3 = local_58;
    if ((*(uint *)(this_00 + 1) >> 6 & 1) == 0) {
      ppTVar4 = local_60;
      if ((*(uint *)(this_00 + 1) & 0x180) != 0) {
        addNonStaticActor(this,param_1,(vector *)&local_60);
        ppTVar4 = local_60;
        ppTVar3 = local_58;
      }
    }
    else {
      ppTVar4 = local_58;
      if (local_58 != local_60) {
        uVar8 = 0;
        do {
                    /* try { // try from 0099c438 to 0099c43f has its CatchHandler @ 0099c614 */
          addStaticActor(this,(GsShape *)local_60[uVar8]);
          uVar8 = (ulong)((int)uVar8 + 1);
          ppTVar4 = local_60;
          ppTVar3 = local_58;
        } while (uVar8 < (ulong)((long)local_58 - (long)local_60 >> 3));
      }
    }
joined_r0x0099c458:
    local_58 = ppTVar4;
    if (local_58 != (TransformGroup **)0x0) {
      operator_delete(local_58);
      ppTVar3 = local_58;
    }
  }
  local_58 = ppTVar3;
  if ((*(uint *)(this_00 + 1) & 0x3c) == 4) {
    this_00 = (long *)operator_new(0x10);
    *(undefined4 *)(this_00 + 1) = 0;
    *this_00 = (long)&PTR__PhysicsObject_00fe0d88;
    RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,(PhysicsObject *)this_00);
  }
  (**(code **)(*this_00 + 0x20))(this_00,this);
LAB_0099c5b0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


