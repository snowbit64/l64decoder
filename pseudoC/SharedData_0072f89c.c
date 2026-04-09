// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SharedData
// Entry Point: 0072f89c
// Size: 76 bytes
// Signature: undefined __thiscall ~SharedData(SharedData * this)


/* VehicleNavigationMapGenerator::SharedData::~SharedData() */

void __thiscall VehicleNavigationMapGenerator::SharedData::~SharedData(SharedData *this)

{
  *(undefined ***)this = &PTR__SharedData_00fda7d0;
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb8));
  }
  Mutex::~Mutex((Mutex *)(this + 0xf0));
  VehicleNavigationMap::~VehicleNavigationMap((VehicleNavigationMap *)(this + 0x10));
  operator_delete(this);
  return;
}


