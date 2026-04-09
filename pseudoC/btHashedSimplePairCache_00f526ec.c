// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btHashedSimplePairCache
// Entry Point: 00f526ec
// Size: 248 bytes
// Signature: undefined __thiscall btHashedSimplePairCache(btHashedSimplePairCache * this)


/* btHashedSimplePairCache::btHashedSimplePairCache() */

void __thiscall btHashedSimplePairCache::btHashedSimplePairCache(btHashedSimplePairCache *this)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this[0x20] = (btHashedSimplePairCache)0x1;
  this[0x40] = (btHashedSimplePairCache)0x1;
  this[0x60] = (btHashedSimplePairCache)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  puVar2 = PTR_FUN_01048e38;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR__btHashedSimplePairCache_01019ca8;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  lVar3 = (*(code *)puVar2)(0x20,0x10);
  uVar1 = *(uint *)(this + 0xc);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      uVar5 = *(undefined8 *)(*(long *)(this + 0x18) + lVar4);
      ((undefined8 *)(lVar3 + lVar4))[1] = ((undefined8 *)(*(long *)(this + 0x18) + lVar4))[1];
      *(undefined8 *)(lVar3 + lVar4) = uVar5;
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar4 != 0);
  }
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedSimplePairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(long *)(this + 0x18) = lVar3;
  this[0x20] = (btHashedSimplePairCache)0x1;
  *(undefined4 *)(this + 0x10) = 2;
  growTables();
  return;
}


