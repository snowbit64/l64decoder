// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btGhostObject
// Entry Point: 00f516e4
// Size: 192 bytes
// Signature: undefined __thiscall ~btGhostObject(btGhostObject * this)


/* btGhostObject::~btGhostObject() */

void __thiscall btGhostObject::~btGhostObject(btGhostObject *this)

{
  *(undefined ***)this = &PTR__btGhostObject_01019bc8;
  if ((*(long *)(this + 0x160) != 0) && (this[0x168] != (btGhostObject)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x160) = 0;
  this[0x168] = (btGhostObject)0x1;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined ***)this = &PTR__btCollisionObject_01019428;
  if ((*(long *)(this + 0x138) != 0) && (this[0x140] != (btGhostObject)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x140] = (btGhostObject)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 300) = 0;
  return;
}


