// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00babbcc
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float>,
   std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*>, std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*>, float>, std::__ndk1::less<std::__ndk1::pair<btCollisionObject const*, btCollisionObject
   const*> >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject const*,
   btCollisionObject const*>, float> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject
   const*, btCollisionObject const*>, float>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::__map_value_compare<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>,std::__ndk1::less<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<btCollisionObject_const*,btCollisionObject_const*>,float>>>
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


