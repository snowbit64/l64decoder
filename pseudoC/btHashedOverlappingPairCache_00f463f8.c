// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btHashedOverlappingPairCache
// Entry Point: 00f463f8
// Size: 204 bytes
// Signature: undefined __thiscall ~btHashedOverlappingPairCache(btHashedOverlappingPairCache * this)


/* btHashedOverlappingPairCache::~btHashedOverlappingPairCache() */

void __thiscall
btHashedOverlappingPairCache::~btHashedOverlappingPairCache(btHashedOverlappingPairCache *this)

{
  *(undefined ***)this = &PTR__btHashedOverlappingPairCache_01018ff0;
  if ((*(long *)(this + 0x60) != 0) && (this[0x68] != (btHashedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x68] = (btHashedOverlappingPairCache)0x1;
  if ((*(long *)(this + 0x40) != 0) && (this[0x48] != (btHashedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x48] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


