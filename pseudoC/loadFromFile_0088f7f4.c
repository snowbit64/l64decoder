// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromFile
// Entry Point: 0088f7f4
// Size: 48 bytes
// Signature: undefined __thiscall loadFromFile(DensityMapEntity * this, char * param_1, DensityMapDesc * param_2)


/* DensityMapEntity::loadFromFile(char const*, DensityMapDesc const&) */

void __thiscall
DensityMapEntity::loadFromFile(DensityMapEntity *this,char *param_1,DensityMapDesc *param_2)

{
  create(this,param_2);
  DensityMap::loadFromFile(*(DensityMap **)(this + 0x20),param_1);
  return;
}


