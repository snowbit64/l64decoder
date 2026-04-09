// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInternalGhostPairCallback
// Entry Point: 00bab774
// Size: 8 bytes
// Signature: undefined __thiscall setInternalGhostPairCallback(btHashedOverlappingPairCache * this, btOverlappingPairCallback * param_1)


/* btHashedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback*) */

void __thiscall
btHashedOverlappingPairCache::setInternalGhostPairCallback
          (btHashedOverlappingPairCache *this,btOverlappingPairCallback *param_1)

{
  *(btOverlappingPairCallback **)(this + 0x70) = param_1;
  return;
}


