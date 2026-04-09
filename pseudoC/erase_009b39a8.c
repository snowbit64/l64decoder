// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 009b39a8
// Size: 184 bytes
// Signature: undefined __thiscall erase(__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>> * this, __tree_const_iterator param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::__map_value_compare<unsigned
   long long, std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::less<unsigned long long>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >
   >::erase(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, void*>*, long>) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
::erase(__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
        *this,__tree_const_iterator param_1)

{
  __tree_node_base *p_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  
  p_Var1 = (__tree_node_base *)(ulong)param_1;
  pp_Var2 = *(__tree_node_base ***)(p_Var1 + 8);
  if (*(__tree_node_base ***)(p_Var1 + 8) == (__tree_node_base **)0x0) {
    pp_Var2 = (__tree_node_base **)(p_Var1 + 0x10);
    pp_Var4 = (__tree_node_base **)*pp_Var2;
    if (*pp_Var4 != p_Var1) {
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
  if (*(__tree_node_base **)this == p_Var1) {
    *(__tree_node_base ***)this = pp_Var4;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),p_Var1);
  if ((*(void **)(p_Var1 + 0x40) != (void *)0x0) && (p_Var1[0x48] != (__tree_node_base)0x0)) {
                    /* try { // try from 009b3a34 to 009b3a37 has its CatchHandler @ 009b3a60 */
    btAlignedFreeInternal(*(void **)(p_Var1 + 0x40));
  }
  *(undefined8 *)(p_Var1 + 0x40) = 0;
  *(undefined4 *)(p_Var1 + 0x34) = 0;
  *(undefined4 *)(p_Var1 + 0x38) = 0;
  p_Var1[0x48] = (__tree_node_base)0x1;
  operator_delete(p_Var1);
  return pp_Var4;
}


