// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btPairCachingGhostObject
// Entry Point: 00f51c10
// Size: 272 bytes
// Signature: undefined __thiscall ~btPairCachingGhostObject(btPairCachingGhostObject * this)


/* btPairCachingGhostObject::~btPairCachingGhostObject() */

void __thiscall btPairCachingGhostObject::~btPairCachingGhostObject(btPairCachingGhostObject *this)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)this = &PTR__btPairCachingGhostObject_01019c20;
  (**(code **)**(undefined8 **)(this + 0x170))();
  if (*(long *)(this + 0x170) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined ***)this = &PTR__btGhostObject_01019bc8;
  if ((*(long *)(this + 0x160) != 0) && (this[0x168] != (btPairCachingGhostObject)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x160) = 0;
  this[0x168] = (btPairCachingGhostObject)0x1;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined ***)this = &PTR__btCollisionObject_01019428;
  if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btPairCachingGhostObject)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x140] = (btPairCachingGhostObject)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  UNRECOVERED_JUMPTABLE = PTR_FUN_01048e40;
  *(undefined8 *)(this + 300) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f51d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(this);
  return;
}


