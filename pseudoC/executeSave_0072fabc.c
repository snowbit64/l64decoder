// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSave
// Entry Point: 0072fabc
// Size: 12 bytes
// Signature: undefined __thiscall executeSave(VNMapSaveHelper * this, char * param_1)


/* VehicleNavigationMapGenerator::VNMapSaveHelper::executeSave(char const*) */

void __thiscall
VehicleNavigationMapGenerator::VNMapSaveHelper::executeSave(VNMapSaveHelper *this,char *param_1)

{
  finishSaving((VehicleNavigationMapGenerator *)this,param_1,*(uchar **)(this + 0x60),
               *(uint *)(this + 0x68));
  return;
}


