// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationPlanner
// Entry Point: 0074364c
// Size: 252 bytes
// Signature: undefined __thiscall ~VehicleNavigationPlanner(VehicleNavigationPlanner * this)


/* VehicleNavigationPlanner::~VehicleNavigationPlanner() */

void __thiscall VehicleNavigationPlanner::~VehicleNavigationPlanner(VehicleNavigationPlanner *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  Thread *this_00;
  
                    /* try { // try from 00743660 to 0074367f has its CatchHandler @ 00743748 */
  Thread::cancel();
  *(undefined4 *)(this + 0xcd) = 1;
  *(undefined4 *)(this + 0xcc) = 1;
  Event::post();
  this_00 = *(Thread **)(this + 0xd0);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  Mutex::~Mutex((Mutex *)(this + 0xd8));
  pvVar3 = *(void **)(this + 0xb0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x98);
  pvVar2 = *(void **)(this + 0xa0);
  if (pvVar3 != pvVar2) {
    uVar5 = (long)pvVar2 + (-0x10 - (long)pvVar3);
    pvVar4 = pvVar3;
    if (0xf < uVar5) {
      uVar5 = (uVar5 >> 4) + 1;
      uVar6 = uVar5 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar3 + uVar6 * 0x10);
      puVar7 = (undefined8 *)((long)pvVar3 + 0x18);
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 2;
        puVar9 = (undefined4 *)*puVar7;
        *(undefined4 *)puVar7[-2] = 0xffffffff;
        *puVar9 = 0xffffffff;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar5 == uVar6) goto LAB_00743724;
    }
    do {
      pvVar1 = (void *)((long)pvVar4 + 0x10);
      **(undefined4 **)((long)pvVar4 + 8) = 0xffffffff;
      pvVar4 = pvVar1;
    } while (pvVar1 != pvVar2);
  }
LAB_00743724:
  *(void **)(this + 0xa0) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::__deque_base<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>
  ::~__deque_base((__deque_base<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>
                   *)(this + 0x60));
  Event::~Event((Event *)this);
  return;
}


