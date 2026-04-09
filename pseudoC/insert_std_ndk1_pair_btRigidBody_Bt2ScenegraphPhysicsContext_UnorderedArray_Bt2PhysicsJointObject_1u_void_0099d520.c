// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::pair<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,void>
// Entry Point: 0099d520
// Size: 256 bytes
// Signature: pair __thiscall insert<std::__ndk1::pair<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,void>(map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<btRigidBody*,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<btRigidBody*,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u> >, void*>*, long> >,
   bool> std::__ndk1::map<btRigidBody*,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u>,
   std::__ndk1::less<btRigidBody*>, std::__ndk1::allocator<std::__ndk1::pair<btRigidBody* const,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u> > >
   >::insert<std::__ndk1::pair<btRigidBody*,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u> >,
   void>(std::__ndk1::pair<btRigidBody*,
   Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*, 1u> >&&) */

pair __thiscall
std::__ndk1::
map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
::
insert<std::__ndk1::pair<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>,void>
          (map<btRigidBody*,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2ScenegraphPhysicsContext::UnorderedArray<Bt2PhysicsJointObject*,1u>>>>
           *this,pair *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)(this + 8);
  puVar4 = (undefined8 *)*puVar3;
  puVar1 = puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(this + 8);
    do {
      while (puVar5 = puVar4, puVar1 = puVar5, *(ulong *)param_1 < (ulong)puVar5[4]) {
        puVar3 = puVar5;
        puVar4 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar5;
          goto joined_r0x0099d594;
        }
      }
      if (*(ulong *)param_1 <= (ulong)puVar5[4]) break;
      puVar3 = puVar5 + 1;
      puVar4 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar4 = (undefined8 *)*puVar3;
  puVar5 = puVar3;
joined_r0x0099d594:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x38);
    uVar2 = *(undefined8 *)param_1;
    *puVar4 = 0;
    puVar4[1] = 0;
    uVar7 = *(undefined8 *)(param_1 + 4);
    uVar6 = *(undefined8 *)(param_1 + 2);
    puVar4[2] = puVar1;
    puVar4[4] = uVar2;
    puVar4[6] = uVar7;
    puVar4[5] = uVar6;
    *puVar5 = puVar4;
    puVar1 = puVar4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar1 = (undefined8 *)*puVar5;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar1);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar4;
}


