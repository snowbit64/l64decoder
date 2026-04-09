// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCollisionObject
// Entry Point: 00f482d8
// Size: 112 bytes
// Signature: undefined __thiscall ~btCollisionObject(btCollisionObject * this)


/* btCollisionObject::~btCollisionObject() */

void __thiscall btCollisionObject::~btCollisionObject(btCollisionObject *this)

{
  *(undefined ***)this = &PTR__btCollisionObject_01019428;
  if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btCollisionObject)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x140] = (btCollisionObject)0x1;
  return;
}


