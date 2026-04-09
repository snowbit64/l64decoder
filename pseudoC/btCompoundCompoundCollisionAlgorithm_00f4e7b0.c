// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCompoundCompoundCollisionAlgorithm
// Entry Point: 00f4e7b0
// Size: 432 bytes
// Signature: undefined __thiscall ~btCompoundCompoundCollisionAlgorithm(btCompoundCompoundCollisionAlgorithm * this)


/* btCompoundCompoundCollisionAlgorithm::~btCompoundCompoundCollisionAlgorithm() */

void __thiscall
btCompoundCompoundCollisionAlgorithm::~btCompoundCompoundCollisionAlgorithm
          (btCompoundCompoundCollisionAlgorithm *this)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0x48);
  uVar1 = *(uint *)(lVar2 + 0xc);
  *(undefined ***)this = &PTR__btCompoundCompoundCollisionAlgorithm_01019980;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x18) + lVar4 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar3);
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar4 != 0);
  }
  btHashedSimplePairCache::removeAllPairs();
  (**(code **)**(undefined8 **)(this + 0x48))();
  if (*(long *)(this + 0x48) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((*(long *)(this + 0x60) != 0) && (this[0x68] != (btCompoundCompoundCollisionAlgorithm)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x68] = (btCompoundCompoundCollisionAlgorithm)0x1;
  uVar1 = *(uint *)(this + 0x14);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__btCompoundCollisionAlgorithm_010198e8;
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      if (*(undefined8 **)(*(long *)(this + 0x20) + lVar2) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(*(long *)(this + 0x20) + lVar2))();
        (**(code **)(**(long **)(this + 8) + 0x78))
                  (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + lVar2));
      }
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  if ((*(long *)(this + 0x20) != 0) && (this[0x28] != (btCompoundCompoundCollisionAlgorithm)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (btCompoundCompoundCollisionAlgorithm)0x1;
  return;
}


