// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 009b1eb4
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<btRigidBody*, Bt2RaycastVehicle*>,
   std::__ndk1::__map_value_compare<btRigidBody*, std::__ndk1::__value_type<btRigidBody*,
   Bt2RaycastVehicle*>, std::__ndk1::less<btRigidBody*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*, Bt2RaycastVehicle*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<btRigidBody*, Bt2RaycastVehicle*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>>>
::destroy(__tree<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::__map_value_compare<btRigidBody*,std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>,std::__ndk1::less<btRigidBody*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody*,Bt2RaycastVehicle*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


