// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btPairCachingGhostObject
// Entry Point: 00f51a08
// Size: 268 bytes
// Signature: undefined __thiscall btPairCachingGhostObject(btPairCachingGhostObject * this)


/* btPairCachingGhostObject::btPairCachingGhostObject() */

void __thiscall btPairCachingGhostObject::btPairCachingGhostObject(btPairCachingGhostObject *this)

{
  undefined *puVar1;
  btHashedOverlappingPairCache *this_00;
  
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb0) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xb8) = 0x5d5e0b6b00000000;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined8 *)(this + 0xe8) = 0x1ffffffff;
  *(undefined8 *)(this + 0xe0) = 0xffffffff00000001;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f00000000000000;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0x3f800000;
  this[0x140] = (btPairCachingGhostObject)0x1;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  this[0x168] = (btPairCachingGhostObject)0x1;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x100) = 4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__btPairCachingGhostObject_01019c20;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  puVar1 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 *)(this + 0x160) = 0;
  this_00 = (btHashedOverlappingPairCache *)(*(code *)puVar1)(0x78,0x10);
  btHashedOverlappingPairCache::btHashedOverlappingPairCache(this_00);
  *(btHashedOverlappingPairCache **)(this + 0x170) = this_00;
  return;
}


