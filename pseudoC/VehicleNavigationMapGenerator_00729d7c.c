// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationMapGenerator
// Entry Point: 00729d7c
// Size: 1024 bytes
// Signature: undefined __thiscall ~VehicleNavigationMapGenerator(VehicleNavigationMapGenerator * this)


/* VehicleNavigationMapGenerator::~VehicleNavigationMapGenerator() */

void __thiscall
VehicleNavigationMapGenerator::~VehicleNavigationMapGenerator(VehicleNavigationMapGenerator *this)

{
  long **pplVar1;
  long **pplVar2;
  long lVar3;
  size_t __n;
  int iVar4;
  UpdateManager *this_00;
  UpdateRenderingManager *this_01;
  VehicleNavigationManager *this_02;
  void *pvVar5;
  ulong uVar6;
  DynamicAvoidance *this_03;
  void **ppvVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(this + 0x260);
  *(undefined ***)this = &PTR__VehicleNavigationMapGenerator_00fda5d8;
  *(undefined ***)(this + 0x20) = &PTR__VehicleNavigationMapGenerator_00fda610;
  *(undefined ***)(this + 0x30) = &PTR__VehicleNavigationMapGenerator_00fda638;
  *(undefined ***)(this + 0x38) = &PTR__VehicleNavigationMapGenerator_00fda660;
  *(undefined ***)(this + 0x58) = &PTR__VehicleNavigationMapGenerator_00fda680;
  if (lVar12 != 0) {
    lVar11 = *(long *)(lVar12 + 0x40);
    lVar3 = *(long *)(lVar12 + 0x48) - lVar11;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (*(undefined8 **)(lVar11 + uVar6 * 8) == (undefined8 *)(this + 0x58)) {
          pvVar5 = (void *)(lVar11 + uVar6 * 8);
          __n = *(long *)(lVar12 + 0x48) - (long)(void *)((long)pvVar5 + 8);
          if (__n != 0) {
            memmove(pvVar5,(void *)((long)pvVar5 + 8),__n);
          }
          *(size_t *)(lVar12 + 0x48) = (long)pvVar5 + __n;
          break;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar3 >> 3));
    }
  }
                    /* try { // try from 00729e34 to 00729e5f has its CatchHandler @ 0072a17c */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  if (this[0x1e0] != (VehicleNavigationMapGenerator)0x0) {
    this_01 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
    UpdateRenderingManager::removeUpdateableRendered(this_01,(UpdateableRendered *)(this + 0x30));
  }
  this_02 = (VehicleNavigationManager *)VehicleNavigationManager::getInstance();
  VehicleNavigationManager::unregisterMapGenerator(this_02,this);
  this_03 = *(DynamicAvoidance **)(this + 0x140);
  if (this_03 != (DynamicAvoidance *)0x0) {
    DynamicAvoidance::~DynamicAvoidance(this_03);
    operator_delete(this_03);
  }
  pplVar1 = *(long ***)(this + 0x188);
  pplVar2 = *(long ***)(this + 400);
  *(undefined8 *)(this + 0x140) = 0;
  for (; pplVar1 != pplVar2; pplVar1 = pplVar1 + 1) {
    if (*pplVar1 != (long *)0x0) {
      (**(code **)(**pplVar1 + 8))();
    }
  }
  puVar10 = *(undefined8 **)(this + 0x220);
  for (puVar9 = *(undefined8 **)(this + 0x218); puVar9 != puVar10; puVar9 = puVar9 + 1) {
    ppvVar7 = (void **)*puVar9;
    if (ppvVar7 != (void **)0x0) {
      pvVar5 = *ppvVar7;
      if (pvVar5 != (void *)0x0) {
        ppvVar7[1] = pvVar5;
        operator_delete(pvVar5);
      }
      operator_delete(ppvVar7);
    }
  }
  lVar12 = 0;
  do {
    lVar11 = *(long *)(this + lVar12 + 0x68);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729f28 to 00729f2b has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x70);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729f50 to 00729f53 has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x78);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729f7c to 00729f7f has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x80);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729fa4 to 00729fa7 has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x88);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729fd0 to 00729fd3 has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x90);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 00729ff8 to 00729ffb has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0x98);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 0072a024 to 0072a027 has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0xa0);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 0072a04c to 0072a04f has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0xa8);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 0072a078 to 0072a07b has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar11 = *(long *)(this + lVar12 + 0xb0);
    iVar4 = FUN_00f27700(0xffffffff,lVar11 + 0x10);
    if (iVar4 < 2) {
                    /* try { // try from 0072a0a0 to 0072a0a3 has its CatchHandler @ 0072a180 */
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))();
    }
    lVar12 = lVar12 + 0x50;
  } while (lVar12 != 0xa0);
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 8))();
  }
  plVar8 = *(long **)(this + 0x108);
  if ((plVar8 != (long *)0x0) && (iVar4 = FUN_00f27700(0xffffffff,plVar8 + 1), iVar4 < 2)) {
                    /* try { // try from 0072a0e0 to 0072a0e7 has its CatchHandler @ 0072a17c */
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x248),*(__tree_node **)(this + 0x250));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
             *)(this + 0x230),*(__tree_node **)(this + 0x238));
  pvVar5 = *(void **)(this + 0x218);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x220) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x200);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x1e8);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x1f0) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x188);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 400) = pvVar5;
    operator_delete(pvVar5);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
  ::~__deque_base((__deque_base<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                   *)(this + 0x150));
  pvVar5 = *(void **)(this + 0x120);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x128) = pvVar5;
    operator_delete(pvVar5);
  }
  DeleteNotifier::~DeleteNotifier((DeleteNotifier *)(this + 0x38));
  Entity::~Entity((Entity *)this);
  return;
}


