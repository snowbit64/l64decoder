// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ICHull
// Entry Point: 00d4f3a4
// Size: 88 bytes
// Signature: undefined __thiscall ICHull(ICHull * this, HeapManager * param_1)


/* HACD::ICHull::ICHull(HACD::HeapManager*) */

void __thiscall HACD::ICHull::ICHull(ICHull *this,HeapManager *param_1)

{
  *(undefined ***)this = &PTR__ICHull_01012900;
  TMMesh::TMMesh((TMMesh *)(this + 8),param_1);
  this[0x100] = (ICHull)0x0;
  *(HeapManager **)(this + 0x108) = param_1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}


