// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexHullComputer
// Entry Point: 009acb60
// Size: 132 bytes
// Signature: undefined __thiscall ~btConvexHullComputer(btConvexHullComputer * this)


/* btConvexHullComputer::~btConvexHullComputer() */

void __thiscall btConvexHullComputer::~btConvexHullComputer(btConvexHullComputer *this)

{
  if ((*(void **)(this + 0x50) != (void *)0x0) && (this[0x58] != (btConvexHullComputer)0x0)) {
                    /* try { // try from 009acb80 to 009acb83 has its CatchHandler @ 009acbec */
    btAlignedFreeInternal(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x58] = (btConvexHullComputer)0x1;
  if ((*(void **)(this + 0x30) != (void *)0x0) && (this[0x38] != (btConvexHullComputer)0x0)) {
                    /* try { // try from 009acba4 to 009acba7 has its CatchHandler @ 009acbe8 */
    btAlignedFreeInternal(*(void **)(this + 0x30));
  }
  this[0x38] = (btConvexHullComputer)0x1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (btConvexHullComputer)0x0)) {
                    /* try { // try from 009acbc4 to 009acbc7 has its CatchHandler @ 009acbe4 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btConvexHullComputer)0x1;
  return;
}


