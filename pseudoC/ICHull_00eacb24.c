// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ICHull
// Entry Point: 00eacb24
// Size: 76 bytes
// Signature: undefined __thiscall ICHull(ICHull * this)


/* VHACD::ICHull::ICHull() */

void __thiscall VHACD::ICHull::ICHull(ICHull *this)

{
  TMMesh::TMMesh((TMMesh *)this);
  this[0x698] = (ICHull)0x0;
  *(undefined8 *)(this + 0x248) = 0x40;
  *(undefined8 *)(this + 0x460) = 0x40;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x678) = 0x40;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x670) = 0;
  *(undefined8 *)(this + 0x668) = 0;
  return;
}


