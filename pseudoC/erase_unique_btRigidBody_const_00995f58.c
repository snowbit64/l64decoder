// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<btRigidBody_const*>
// Entry Point: 00995f58
// Size: 220 bytes
// Signature: ulong __thiscall __erase_unique<btRigidBody_const*>(__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>> * this, btRigidBody * * param_1)


/* unsigned long std::__ndk1::__tree<std::__ndk1::__value_type<btRigidBody const*,
   Bt2PhysicsRBObject*>, std::__ndk1::__map_value_compare<btRigidBody const*,
   std::__ndk1::__value_type<btRigidBody const*, Bt2PhysicsRBObject*>, std::__ndk1::less<btRigidBody
   const*>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody const*,
   Bt2PhysicsRBObject*> > >::__erase_unique<btRigidBody const*>(btRigidBody const* const&) */

ulong __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
::__erase_unique<btRigidBody_const*>
          (__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
           *this,btRigidBody **param_1)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  
  pp_Var2 = (__tree_node_base **)(this + 8);
  pp_Var1 = (__tree_node_base **)*pp_Var2;
  if (pp_Var1 != (__tree_node_base **)0x0) {
    p_Var3 = (__tree_node_base *)*param_1;
    pp_Var4 = pp_Var1;
    pp_Var5 = pp_Var2;
    do {
      if (pp_Var4[4] >= p_Var3) {
        pp_Var5 = pp_Var4;
      }
      pp_Var4 = (__tree_node_base **)pp_Var4[pp_Var4[4] < p_Var3];
    } while (pp_Var4 != (__tree_node_base **)0x0);
    if ((pp_Var5 == pp_Var2) || (p_Var3 < pp_Var5[4])) {
      pp_Var1 = (__tree_node_base **)0x0;
    }
    else {
      pp_Var2 = (__tree_node_base **)pp_Var5[1];
      if ((__tree_node_base **)pp_Var5[1] == (__tree_node_base **)0x0) {
        pp_Var2 = pp_Var5 + 2;
        pp_Var4 = (__tree_node_base **)*pp_Var2;
        if ((__tree_node_base **)*pp_Var4 != pp_Var5) {
          do {
            p_Var3 = *pp_Var2;
            pp_Var2 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var4 = (__tree_node_base **)*pp_Var2;
          } while (*pp_Var4 != p_Var3);
        }
      }
      else {
        do {
          pp_Var4 = pp_Var2;
          pp_Var2 = (__tree_node_base **)*pp_Var4;
        } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)this == pp_Var5) {
        *(__tree_node_base ***)this = pp_Var4;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      __tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var1,(__tree_node_base *)pp_Var5);
      operator_delete(pp_Var5);
      pp_Var1 = (__tree_node_base **)0x1;
    }
  }
  return (ulong)pp_Var1;
}


