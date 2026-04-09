// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCompoundCollisionAlgorithm
// Entry Point: 00f4d830
// Size: 192 bytes
// Signature: undefined __thiscall ~btCompoundCollisionAlgorithm(btCompoundCollisionAlgorithm * this)


/* btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm() */

void __thiscall
btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm(btCompoundCollisionAlgorithm *this)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x14);
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
  if ((*(long *)(this + 0x20) != 0) && (this[0x28] != (btCompoundCollisionAlgorithm)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  operator_delete(this);
  return;
}


