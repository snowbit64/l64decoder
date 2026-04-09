// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationAgent
// Entry Point: 00736614
// Size: 184 bytes
// Signature: undefined __thiscall ~VehicleNavigationAgent(VehicleNavigationAgent * this)


/* VehicleNavigationAgent::~VehicleNavigationAgent() */

void __thiscall VehicleNavigationAgent::~VehicleNavigationAgent(VehicleNavigationAgent *this)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__VehicleNavigationAgent_00fda998;
  clearArcLengths();
  pvVar2 = *(void **)(this + 0x12a0);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x68);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x70) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x40);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x48) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
  }
  if (*(void **)(this + 0x1298) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1298));
  }
  pvVar2 = *(void **)(this + 0x12f0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x12f8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x12d8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x12e0) = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


