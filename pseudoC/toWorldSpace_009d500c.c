// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toWorldSpace
// Entry Point: 009d500c
// Size: 96 bytes
// Signature: undefined __thiscall toWorldSpace(ProceduralPlacementManager * this, float param_1, float param_2, float * param_3, float * param_4)


/* ProceduralPlacementManager::toWorldSpace(float, float, float&, float&) */

void __thiscall
ProceduralPlacementManager::toWorldSpace
          (ProceduralPlacementManager *this,float param_1,float param_2,float *param_3,
          float *param_4)

{
  long lVar1;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  *param_3 = (float)(ulong)(*(uint *)(lVar1 + 0x38) >> 1) + param_1;
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  *param_4 = (float)(ulong)(*(uint *)(lVar1 + 0x3c) >> 1) + param_2;
  return;
}


