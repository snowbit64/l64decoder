// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_impl<std::__ndk1::pair<btRigidBody*,Bt2PhysicsRBObject*>>
// Entry Point: 00995e60
// Size: 248 bytes
// Signature: pair __thiscall __emplace_unique_impl<std::__ndk1::pair<btRigidBody*,Bt2PhysicsRBObject*>>(__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<btRigidBody const*,
   Bt2PhysicsRBObject*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<btRigidBody const*,
   Bt2PhysicsRBObject*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<btRigidBody const*, Bt2PhysicsRBObject*>,
   std::__ndk1::__map_value_compare<btRigidBody const*, std::__ndk1::__value_type<btRigidBody
   const*, Bt2PhysicsRBObject*>, std::__ndk1::less<btRigidBody const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody const*, Bt2PhysicsRBObject*> >
   >::__emplace_unique_impl<std::__ndk1::pair<btRigidBody*, Bt2PhysicsRBObject*>
   >(std::__ndk1::pair<btRigidBody*, Bt2PhysicsRBObject*>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
::__emplace_unique_impl<std::__ndk1::pair<btRigidBody*,Bt2PhysicsRBObject*>>
          (__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
           *this,pair *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  uVar1 = *(ulong *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 2);
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = (undefined8 *)*puVar5;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  puVar4 = puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(this + 8);
    do {
      while (puVar7 = puVar6, puVar4 = puVar7, uVar1 < (ulong)puVar7[4]) {
        puVar5 = puVar7;
        puVar6 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar7;
          goto joined_r0x00995ee0;
        }
      }
      if (uVar1 <= (ulong)puVar7[4]) break;
      puVar5 = puVar7 + 1;
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)*puVar5;
  puVar7 = puVar5;
joined_r0x00995ee0:
  if (puVar6 == (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar4;
    *puVar7 = puVar3;
    puVar4 = puVar3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar4 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    puVar6 = puVar3;
  }
  else {
    operator_delete(puVar3);
  }
  return (pair)puVar6;
}


