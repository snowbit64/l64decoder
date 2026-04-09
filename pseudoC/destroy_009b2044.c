// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 009b2044
// Size: 92 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::__map_value_compare<unsigned
   long long, std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::less<unsigned long long>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if ((*(void **)(param_1 + 0x40) != (void *)0x0) && (param_1[0x48] != (__tree_node)0x0)) {
                    /* try { // try from 009b2080 to 009b2083 has its CatchHandler @ 009b20a0 */
      btAlignedFreeInternal(*(void **)(param_1 + 0x40));
    }
    operator_delete(param_1);
    return;
  }
  return;
}


