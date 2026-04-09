// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_node<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
// Entry Point: 009b3b6c
// Size: 256 bytes
// Signature: unique_ptr __cdecl __construct_node<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>(pair * param_1)


/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned
   long long, Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, void*> > > >
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::__map_value_compare<unsigned
   long long, std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>, std::__ndk1::less<unsigned long long>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >
   >::__construct_node<std::__ndk1::pair<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> >(std::__ndk1::pair<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>&&) */

unique_ptr
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
::
__construct_node<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
          (pair *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *in_x1;
  void **in_x8;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  pvVar5 = operator_new(0x50);
  uVar1 = *(uint *)((long)in_x1 + 0x14);
  uVar10 = (ulong)uVar1;
  uVar8 = *in_x1;
  uVar2 = *(undefined4 *)(in_x1 + 1);
  *in_x8 = pvVar5;
  in_x8[1] = param_1 + 2;
  *(undefined *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar5 + 0x20) = uVar8;
  *(undefined4 *)((long)pvVar5 + 0x28) = uVar2;
  *(undefined *)((long)pvVar5 + 0x48) = 1;
  *(undefined8 *)((long)pvVar5 + 0x40) = 0;
  *(undefined4 *)((long)pvVar5 + 0x34) = 0;
  *(undefined4 *)((long)pvVar5 + 0x38) = 0;
  if ((int)uVar1 < 1) {
    *(uint *)((long)pvVar5 + 0x34) = uVar1;
    pvVar7 = pvVar5;
  }
  else {
                    /* try { // try from 009b3bd0 to 009b3c1b has its CatchHandler @ 009b3c6c */
    lVar6 = btAlignedAllocInternal(uVar10 << 4,0x10);
    uVar3 = *(uint *)((long)pvVar5 + 0x34);
    if (0 < (int)uVar3) {
      lVar9 = 0;
      do {
        puVar4 = (undefined8 *)(*(long *)((long)pvVar5 + 0x40) + lVar9);
        uVar8 = *puVar4;
        ((undefined8 *)(lVar6 + lVar9))[1] = puVar4[1];
        *(undefined8 *)(lVar6 + lVar9) = uVar8;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar3 * 0x10 - lVar9 != 0);
    }
    pvVar7 = *(void **)((long)pvVar5 + 0x40);
    if ((pvVar7 != (void *)0x0) && (*(char *)((long)pvVar5 + 0x48) != '\0')) {
      pvVar7 = (void *)btAlignedFreeInternal(pvVar7);
    }
    lVar9 = 0;
    *(long *)((long)pvVar5 + 0x40) = lVar6;
    *(uint *)((long)pvVar5 + 0x34) = uVar1;
    *(uint *)((long)pvVar5 + 0x38) = uVar1;
    *(undefined *)((long)pvVar5 + 0x48) = 1;
    do {
      uVar10 = uVar10 - 1;
      uVar8 = *(undefined8 *)(in_x1[4] + lVar9);
      ((undefined8 *)(lVar6 + lVar9))[1] = ((undefined8 *)(in_x1[4] + lVar9))[1];
      *(undefined8 *)(lVar6 + lVar9) = uVar8;
      lVar9 = lVar9 + 0x10;
    } while (uVar10 != 0);
  }
  *(undefined *)(in_x8 + 2) = 1;
  return (unique_ptr)pvVar7;
}


