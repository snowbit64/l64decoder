// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSortedOverlappingPairCache
// Entry Point: 00f475ec
// Size: 108 bytes
// Signature: undefined __thiscall ~btSortedOverlappingPairCache(btSortedOverlappingPairCache * this)


/* btSortedOverlappingPairCache::~btSortedOverlappingPairCache() */

void __thiscall
btSortedOverlappingPairCache::~btSortedOverlappingPairCache(btSortedOverlappingPairCache *this)

{
  *(undefined ***)this = &PTR__btSortedOverlappingPairCache_01019088;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSortedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  return;
}


