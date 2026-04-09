// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlappingPair
// Entry Point: 00f52e7c
// Size: 24 bytes
// Signature: undefined __thiscall addOverlappingPair(btHashedSimplePairCache * this, int param_1, int param_2)


/* btHashedSimplePairCache::addOverlappingPair(int, int) */

void __thiscall
btHashedSimplePairCache::addOverlappingPair(btHashedSimplePairCache *this,int param_1,int param_2)

{
  gAddedSimplePairs = gAddedSimplePairs + 1;
  internalAddPair(this,param_1,param_2);
  return;
}


