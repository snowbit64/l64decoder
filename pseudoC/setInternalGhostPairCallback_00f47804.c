// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInternalGhostPairCallback
// Entry Point: 00f47804
// Size: 8 bytes
// Signature: undefined __thiscall setInternalGhostPairCallback(btSortedOverlappingPairCache * this, btOverlappingPairCallback * param_1)


/* btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback*) */

void __thiscall
btSortedOverlappingPairCache::setInternalGhostPairCallback
          (btSortedOverlappingPairCache *this,btOverlappingPairCallback *param_1)

{
  *(btOverlappingPairCallback **)(this + 0x38) = param_1;
  return;
}


