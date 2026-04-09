// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFile
// Entry Point: 0088f824
// Size: 8 bytes
// Signature: undefined __thiscall saveToFile(DensityMapEntity * this, char * param_1)


/* DensityMapEntity::saveToFile(char const*) */

void __thiscall DensityMapEntity::saveToFile(DensityMapEntity *this,char *param_1)

{
  DensityMap::saveToFile(*(DensityMap **)(this + 0x20),param_1);
  return;
}


