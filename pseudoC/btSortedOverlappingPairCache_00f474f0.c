// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSortedOverlappingPairCache
// Entry Point: 00f474f0
// Size: 252 bytes
// Signature: undefined __thiscall btSortedOverlappingPairCache(btSortedOverlappingPairCache * this)


/* btSortedOverlappingPairCache::btSortedOverlappingPairCache() */

void __thiscall
btSortedOverlappingPairCache::btSortedOverlappingPairCache(btSortedOverlappingPairCache *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  *(undefined2 *)(this + 0x28) = 0x100;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  puVar4 = PTR_FUN_01048e38;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__btSortedOverlappingPairCache_01019088;
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
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSortedOverlappingPairCache)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(long *)(this + 0x18) = lVar5;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  *(undefined4 *)(this + 0x10) = 2;
  return;
}


