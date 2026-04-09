// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PairCache
// Entry Point: 00bab688
// Size: 36 bytes
// Signature: undefined __thiscall ~Bt2PairCache(Bt2PairCache * this)


/* Bt2PhysicsContextManager::Bt2PairCache::~Bt2PairCache() */

void __thiscall Bt2PhysicsContextManager::Bt2PairCache::~Bt2PairCache(Bt2PairCache *this)

{
  btHashedOverlappingPairCache::~btHashedOverlappingPairCache((btHashedOverlappingPairCache *)this);
  operator_delete(this);
  return;
}


