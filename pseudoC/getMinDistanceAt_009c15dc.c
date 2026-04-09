// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinDistanceAt
// Entry Point: 009c15dc
// Size: 28 bytes
// Signature: undefined __thiscall getMinDistanceAt(DistanceMatrixTypeField * this, float param_1, float param_2)


/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::getMinDistanceAt(float, float) */

undefined4 __thiscall
ProceduralPlacementCacheManager::DistanceMatrixTypeField::getMinDistanceAt
          (DistanceMatrixTypeField *this,float param_1,float param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 8) +
          (ulong)(uint)((int)param_1 + *(int *)(this + 0x40) * (int)param_2) * 4);
}


