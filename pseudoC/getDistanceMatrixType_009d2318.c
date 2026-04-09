// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistanceMatrixType
// Entry Point: 009d2318
// Size: 40 bytes
// Signature: undefined __thiscall getDistanceMatrixType(ProceduralPlacementManager * this, uint param_1)


/* ProceduralPlacementManager::getDistanceMatrixType(unsigned int) */

void __thiscall
ProceduralPlacementManager::getDistanceMatrixType(ProceduralPlacementManager *this,uint param_1)

{
  long lVar1;
  
  lVar1 = ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementDistanceMatrix::getType
            ((ProceduralPlacementDistanceMatrix *)(lVar1 + 0x20),param_1);
  return;
}


