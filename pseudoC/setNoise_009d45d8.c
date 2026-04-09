// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNoise
// Entry Point: 009d45d8
// Size: 16 bytes
// Signature: undefined __thiscall setNoise(ProceduralPlacementManager * this, uint param_1, uint param_2, float param_3, float param_4)


/* ProceduralPlacementManager::setNoise(unsigned int, unsigned int, float, float) */

void __thiscall
ProceduralPlacementManager::setNoise
          (ProceduralPlacementManager *this,uint param_1,uint param_2,float param_3,float param_4)

{
  *(uint *)(this + 0xd0) = param_1;
  *(uint *)(this + 0xd4) = param_2;
  *(float *)(this + 0xd8) = param_3;
  *(float *)(this + 0xdc) = param_4;
  return;
}


