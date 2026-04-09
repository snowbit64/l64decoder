// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOverlapFilterCallback
// Entry Point: 00f477f4
// Size: 8 bytes
// Signature: undefined __thiscall setOverlapFilterCallback(btSortedOverlappingPairCache * this, btOverlapFilterCallback * param_1)


/* btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback*) */

void __thiscall
btSortedOverlappingPairCache::setOverlapFilterCallback
          (btSortedOverlappingPairCache *this,btOverlapFilterCallback *param_1)

{
  *(btOverlapFilterCallback **)(this + 0x30) = param_1;
  return;
}


