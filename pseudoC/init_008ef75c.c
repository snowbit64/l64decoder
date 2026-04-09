// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 008ef75c
// Size: 152 bytes
// Signature: undefined __thiscall init(GeoMipMappingTerrain * this, float param_1, bool param_2, bool param_3)


/* GeoMipMappingTerrain::init(float, bool, bool) */

uint __thiscall
GeoMipMappingTerrain::init(GeoMipMappingTerrain *this,float param_1,bool param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = BaseTerrain::baseInitialization((BaseTerrain *)this,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    *(float *)(this + 0x1a4) = param_1;
    uVar2 = *(int *)(this + 0x198) - 1;
    if (6 < uVar2) {
      uVar2 = 7;
    }
    *(uint *)(this + 0x1a0) = uVar2;
    if (*(int *)(this + 0x19c) != 0) {
      uVar2 = 0;
      do {
        uVar3 = 0;
        do {
          updatePatchHeightInfo(this,uVar2,uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(this + 0x19c));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this + 0x19c));
    }
  }
  return uVar1 & 1;
}


