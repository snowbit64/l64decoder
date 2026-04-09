// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toTerrainLocalSpace
// Entry Point: 009d57ec
// Size: 112 bytes
// Signature: undefined __thiscall toTerrainLocalSpace(ProceduralPlacementManager * this, int param_1, int param_2, float * param_3, float * param_4)


/* ProceduralPlacementManager::toTerrainLocalSpace(int, int, float&, float&) */

void __thiscall
ProceduralPlacementManager::toTerrainLocalSpace
          (ProceduralPlacementManager *this,int param_1,int param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x38));
  *param_3 = (float)param_1 - fVar2 * 0.5;
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x3c));
  *param_4 = (float)param_2 - fVar2 * 0.5;
  return;
}


