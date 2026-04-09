// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinMaxPatches
// Entry Point: 008ef380
// Size: 144 bytes
// Signature: undefined __thiscall getMinMaxPatches(GeoMipMappingTerrain * this, uint param_1, uint param_2, uint param_3, uint param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8)


/* GeoMipMappingTerrain::getMinMaxPatches(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int&, unsigned int&, unsigned int&, unsigned int&) */

void __thiscall
GeoMipMappingTerrain::getMinMaxPatches
          (GeoMipMappingTerrain *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint *param_5,uint *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_1 - 1;
  }
  uVar1 = uVar1 >> (ulong)(*(uint *)(this + 0x198) & 0x1f);
  if (*(int *)(this + 0x19c) - 1U <= uVar1) {
    uVar1 = *(int *)(this + 0x19c) - 1U;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
  }
  *param_5 = uVar1;
  uVar2 = uVar2 >> (ulong)(*(uint *)(this + 0x198) & 0x1f);
  if (*(int *)(this + 0x19c) - 1U <= uVar2) {
    uVar2 = *(int *)(this + 0x19c) - 1U;
  }
  *param_6 = uVar2;
  uVar1 = param_3 >> (ulong)(*(uint *)(this + 0x198) & 0x1f);
  if (*(int *)(this + 0x19c) - 1U <= uVar1) {
    uVar1 = *(int *)(this + 0x19c) - 1U;
  }
  *param_7 = uVar1;
  uVar1 = param_4 >> (ulong)(*(uint *)(this + 0x198) & 0x1f);
  if (*(int *)(this + 0x19c) - 1U <= uVar1) {
    uVar1 = *(int *)(this + 0x19c) - 1U;
  }
  *param_8 = uVar1;
  return;
}


