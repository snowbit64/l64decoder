// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btQuantizedBvh
// Entry Point: 00f599ec
// Size: 316 bytes
// Signature: undefined __thiscall ~btQuantizedBvh(btQuantizedBvh * this)


/* btQuantizedBvh::~btQuantizedBvh() */

void __thiscall btQuantizedBvh::~btQuantizedBvh(btQuantizedBvh *this)

{
  *(undefined ***)this = &PTR__btQuantizedBvh_0101a090;
  if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  this[0xe8] = (btQuantizedBvh)0x1;
  if ((*(long *)(this + 0xb8) != 0) && (this[0xc0] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0xc0] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  if ((*(long *)(this + 0x98) != 0) && (this[0xa0] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xa0] = (btQuantizedBvh)0x1;
  if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x80] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btQuantizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x60] = (btQuantizedBvh)0x1;
  return;
}


