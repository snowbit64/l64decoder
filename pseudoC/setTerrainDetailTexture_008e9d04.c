// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTerrainDetailTexture
// Entry Point: 008e9d04
// Size: 140 bytes
// Signature: undefined __thiscall setTerrainDetailTexture(BaseTerrain * this, Texture * param_1, float param_2, uint param_3, uint * param_4)


/* BaseTerrain::setTerrainDetailTexture(Texture*, float, unsigned int, unsigned int*) */

void __thiscall
BaseTerrain::setTerrainDetailTexture
          (BaseTerrain *this,Texture *param_1,float param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  ResourceManager *this_00;
  
  if (param_1 != (Texture *)0x0) {
    FUN_00f276d0(1,param_1 + 8);
  }
  if (*(long *)(this + 0x148) != 0) {
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x148));
  }
  *(uint *)(this + 0x154) = param_3;
  uVar1 = *param_4;
  *(Texture **)(this + 0x148) = param_1;
  *(float *)(this + 0x150) = param_2;
  *(uint *)(this + 0x158) = uVar1;
  *(uint *)(this + 0x15c) = param_4[1];
  *(uint *)(this + 0x160) = param_4[2];
  *(uint *)(this + 0x164) = param_4[3];
  return;
}


