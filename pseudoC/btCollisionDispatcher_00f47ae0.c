// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCollisionDispatcher
// Entry Point: 00f47ae0
// Size: 108 bytes
// Signature: undefined __thiscall ~btCollisionDispatcher(btCollisionDispatcher * this)


/* btCollisionDispatcher::~btCollisionDispatcher() */

void __thiscall btCollisionDispatcher::~btCollisionDispatcher(btCollisionDispatcher *this)

{
  *(undefined ***)this = &PTR__btCollisionDispatcher_010192a0;
  if ((*(long *)(this + 0x20) != 0) && (this[0x28] != (btCollisionDispatcher)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (btCollisionDispatcher)0x1;
  return;
}


