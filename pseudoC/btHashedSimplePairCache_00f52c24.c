// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btHashedSimplePairCache
// Entry Point: 00f52c24
// Size: 204 bytes
// Signature: undefined __thiscall ~btHashedSimplePairCache(btHashedSimplePairCache * this)


/* btHashedSimplePairCache::~btHashedSimplePairCache() */

void __thiscall btHashedSimplePairCache::~btHashedSimplePairCache(btHashedSimplePairCache *this)

{
  *(undefined ***)this = &PTR__btHashedSimplePairCache_01019ca8;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btHashedSimplePairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x60] = (btHashedSimplePairCache)0x1;
  if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btHashedSimplePairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x40] = (btHashedSimplePairCache)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedSimplePairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


