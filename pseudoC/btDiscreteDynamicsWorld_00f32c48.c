// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDiscreteDynamicsWorld
// Entry Point: 00f32c48
// Size: 560 bytes
// Signature: undefined __thiscall ~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld * this)


/* btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld() */

void __thiscall btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld *this)

{
  *(undefined ***)this = &PTR__btDiscreteDynamicsWorld_010189c0;
  if (this[0x178] != (btDiscreteDynamicsWorld)0x0) {
    (**(code **)**(undefined8 **)(this + 0x118))();
    if (*(long *)(this + 0x118) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (*(undefined8 **)(this + 0x108) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x108))();
    if (*(long *)(this + 0x108) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (this[0x179] != (btDiscreteDynamicsWorld)0x0) {
    (**(code **)**(undefined8 **)(this + 0x110))();
    if (*(long *)(this + 0x110) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if ((*(long *)(this + 0x1b8) != 0) && (this[0x1c0] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  if ((*(long *)(this + 400) != 0) && (this[0x198] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x198] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  if ((*(long *)(this + 0x150) != 0) && (this[0x158] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x144) = 0;
  this[0x158] = (btDiscreteDynamicsWorld)0x1;
  if ((*(long *)(this + 0x130) != 0) && (this[0x138] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x138] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  if ((*(long *)(this + 0xf8) != 0) && (this[0x100] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0x100] = (btDiscreteDynamicsWorld)0x1;
  btCollisionWorld::~btCollisionWorld((btCollisionWorld *)this);
  return;
}


