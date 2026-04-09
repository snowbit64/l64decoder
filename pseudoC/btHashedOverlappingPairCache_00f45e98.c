// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btHashedOverlappingPairCache
// Entry Point: 00f45e98
// Size: 280 bytes
// Signature: undefined __thiscall btHashedOverlappingPairCache(btHashedOverlappingPairCache * this)


/* btHashedOverlappingPairCache::btHashedOverlappingPairCache() */

void __thiscall
btHashedOverlappingPairCache::btHashedOverlappingPairCache(btHashedOverlappingPairCache *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this[0x20] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x48] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__btHashedOverlappingPairCache_01018ff0;
  *(undefined8 *)(this + 0x34) = 0;
  this[0x68] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x60) = 0;
  puVar4 = PTR_FUN_01048e38;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  lVar5 = (*(code *)puVar4)(0x40,0x10);
  uVar3 = *(uint *)(this + 0xc);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar6);
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar6);
      lVar6 = lVar6 + 0x20;
      uVar7 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar7;
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    } while ((ulong)uVar3 * 0x20 - lVar6 != 0);
  }
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(long *)(this + 0x18) = lVar5;
  this[0x20] = (btHashedOverlappingPairCache)0x1;
  *(undefined4 *)(this + 0x10) = 2;
  growTables();
  return;
}


