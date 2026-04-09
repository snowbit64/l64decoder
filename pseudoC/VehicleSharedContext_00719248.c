// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleSharedContext
// Entry Point: 00719248
// Size: 292 bytes
// Signature: undefined __thiscall ~VehicleSharedContext(VehicleSharedContext * this)


/* TrafficVehicle::VehicleSharedContext::~VehicleSharedContext() */

void __thiscall
TrafficVehicle::VehicleSharedContext::~VehicleSharedContext(VehicleSharedContext *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 0x18);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + -8);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      lVar6 = 0;
      lVar3 = lVar3 * 0x88;
      do {
        lVar1 = lVar5 + lVar3;
        *(undefined4 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        *(undefined8 *)(lVar1 + -0x88) = 0;
        if (*(void **)(lVar1 + -0x60) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + -0x60));
        }
        pvVar2 = *(void **)(lVar1 + -0x18);
        *(undefined8 *)(lVar1 + -0x60) = 0;
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar5 + lVar3 + -0x10) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)(lVar5 + lVar3 + -0x30);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar5 + lVar3 + -0x28) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar6 = lVar6 + 0x88;
        lVar5 = lVar5 + -0x88;
      } while (lVar3 - lVar6 != 0);
    }
    operator_delete__(plVar4);
  }
  lVar5 = *(long *)(this + 0x20);
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + -8);
    if (lVar3 != 0) {
      lVar3 = lVar3 << 4;
      do {
        lVar6 = lVar5 + lVar3;
        *(undefined4 *)(lVar6 + -8) = 0;
        if (*(void **)(lVar6 + -0x10) != (void *)0x0) {
          operator_delete__(*(void **)(lVar6 + -0x10));
        }
        lVar3 = lVar3 + -0x10;
        *(undefined8 *)(lVar6 + -0x10) = 0;
      } while (lVar3 != 0);
    }
    operator_delete__((long *)(lVar5 + -8));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TrafficVehicle*>>>
             *)(this + 0x68),*(__tree_node **)(this + 0x70));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)(this + 0x28),*(__tree_node **)(this + 0x30));
  return;
}


