// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VNMapSaveHelper
// Entry Point: 0072fa3c
// Size: 60 bytes
// Signature: undefined __thiscall ~VNMapSaveHelper(VNMapSaveHelper * this)


/* VehicleNavigationMapGenerator::VNMapSaveHelper::~VNMapSaveHelper() */

void __thiscall
VehicleNavigationMapGenerator::VNMapSaveHelper::~VNMapSaveHelper(VNMapSaveHelper *this)

{
  *(undefined ***)this = &PTR__VNMapSaveHelper_00fda888;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
  }
  SaveHelper::~SaveHelper((SaveHelper *)this);
  return;
}


