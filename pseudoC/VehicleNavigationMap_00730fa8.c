// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationMap
// Entry Point: 00730fa8
// Size: 204 bytes
// Signature: undefined __thiscall ~VehicleNavigationMap(VehicleNavigationMap * this)


/* VehicleNavigationMap::~VehicleNavigationMap() */

void __thiscall VehicleNavigationMap::~VehicleNavigationMap(VehicleNavigationMap *this)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = pvVar1;
  pvVar4 = *(void **)(this + 0x20);
  if (*(void **)(this + 0x20) != pvVar1) {
    do {
      pvVar2 = *(void **)((long)pvVar4 + -0x18);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x10) = pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)((long)pvVar4 + -0x30);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x28) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar3 = *(long **)((long)pvVar4 + -0x50);
      pvVar2 = (void *)((long)pvVar4 + -0x50);
      *(undefined8 *)((long)pvVar4 + -0x50) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      pvVar4 = pvVar2;
    } while (pvVar2 != pvVar1);
    pvVar2 = *(void **)(this + 0x18);
  }
  *(void **)(this + 0x20) = pvVar1;
  operator_delete(pvVar2);
  return;
}


