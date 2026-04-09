// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
// Entry Point: 009b3a64
// Size: 264 bytes
// Signature: pair __thiscall __emplace_unique<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>(__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::__map_value_compare<unsigned
   long long, std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::less<unsigned long long>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >
   >::__emplace_unique<std::__ndk1::pair<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >(std::__ndk1::pair<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
::
__emplace_unique<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
          (__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
           *this,pair *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_50;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = (undefined8 *)*puVar5;
  puVar2 = puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(this + 8);
    do {
      while (puVar7 = puVar6, puVar2 = puVar7, *(ulong *)param_1 < (ulong)puVar7[4]) {
        puVar5 = puVar7;
        puVar6 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar7;
          goto joined_r0x009b3ae0;
        }
      }
      if (*(ulong *)param_1 <= (ulong)puVar7[4]) break;
      puVar5 = puVar7 + 1;
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)*puVar5;
  puVar7 = puVar5;
joined_r0x009b3ae0:
  if (puVar6 == (undefined8 *)0x0) {
    __construct_node<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
              ((pair *)this);
    *local_50 = 0;
    local_50[1] = 0;
    local_50[2] = puVar2;
    *puVar7 = local_50;
    puVar2 = local_50;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    uVar3 = 1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    puVar6 = local_50;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return (pair)puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6,uVar3);
}


