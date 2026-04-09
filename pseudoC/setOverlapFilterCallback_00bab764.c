// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOverlapFilterCallback
// Entry Point: 00bab764
// Size: 8 bytes
// Signature: undefined __thiscall setOverlapFilterCallback(btHashedOverlappingPairCache * this, btOverlapFilterCallback * param_1)


/* btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback*) */

void __thiscall
btHashedOverlappingPairCache::setOverlapFilterCallback
          (btHashedOverlappingPairCache *this,btOverlapFilterCallback *param_1)

{
  *(btOverlapFilterCallback **)(this + 0x28) = param_1;
  return;
}


