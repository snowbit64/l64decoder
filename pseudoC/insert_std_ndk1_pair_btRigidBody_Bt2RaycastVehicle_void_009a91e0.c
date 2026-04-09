// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::pair<btRigidBody*,Bt2RaycastVehicle*>,void>
// Entry Point: 009a91e0
// Size: 248 bytes
// Signature: pair __thiscall insert<std::__ndk1::pair<btRigidBody*,Bt2RaycastVehicle*>,void>(map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<btRigidBody*,
   Bt2RaycastVehicle*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<btRigidBody*,
   Bt2RaycastVehicle*>, void*>*, long> >, bool> std::__ndk1::map<btRigidBody*, Bt2RaycastVehicle*,
   std::__ndk1::less<btRigidBody*>, std::__ndk1::allocator<std::__ndk1::pair<btRigidBody* const,
   Bt2RaycastVehicle*> > >::insert<std::__ndk1::pair<btRigidBody*, Bt2RaycastVehicle*>,
   void>(std::__ndk1::pair<btRigidBody*, Bt2RaycastVehicle*>&&) */

pair __thiscall
std::__ndk1::
map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
::insert<std::__ndk1::pair<btRigidBody*,Bt2RaycastVehicle*>,void>
          (map<btRigidBody*,Bt2RaycastVehicle*,std::__ndk1::less<btRigidBody*>,std::__ndk1::allocator<std::__ndk1::pair<btRigidBody*const,Bt2RaycastVehicle*>>>
           *this,pair *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar3 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while (puVar6 = puVar5, puVar3 = puVar6, *(ulong *)param_1 < (ulong)puVar6[4]) {
        puVar4 = puVar6;
        puVar5 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar6;
          goto joined_r0x009a9254;
        }
      }
      if (*(ulong *)param_1 <= (ulong)puVar6[4]) break;
      puVar4 = puVar6 + 1;
      puVar5 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)*puVar4;
  puVar6 = puVar4;
joined_r0x009a9254:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x30);
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar3;
    puVar5[4] = uVar1;
    puVar5[5] = uVar2;
    *puVar6 = puVar5;
    puVar3 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar3 = (undefined8 *)*puVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar5;
}


