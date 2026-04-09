// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btHashMap
// Entry Point: 00bb0744
// Size: 164 bytes
// Signature: undefined __thiscall ~btHashMap(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue> * this)


/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::~btHashMap() */

void __thiscall
btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
::~btHashMap(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
             *this)

{
  if ((*(void **)(this + 0x70) != (void *)0x0) &&
     (this[0x78] !=
      (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
       )0x0)) {
                    /* try { // try from 00bb0764 to 00bb0767 has its CatchHandler @ 00bb07f4 */
    btAlignedFreeInternal(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x78] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                )0x1;
  if ((*(void **)(this + 0x50) != (void *)0x0) &&
     (this[0x58] !=
      (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
       )0x0)) {
                    /* try { // try from 00bb0788 to 00bb078b has its CatchHandler @ 00bb07f0 */
    btAlignedFreeInternal(*(void **)(this + 0x50));
  }
  this[0x58] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                )0x1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  if ((*(void **)(this + 0x30) != (void *)0x0) &&
     (this[0x38] !=
      (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
       )0x0)) {
                    /* try { // try from 00bb07a8 to 00bb07ab has its CatchHandler @ 00bb07ec */
    btAlignedFreeInternal(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                )0x1;
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] !=
      (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
       )0x0)) {
                    /* try { // try from 00bb07cc to 00bb07cf has its CatchHandler @ 00bb07e8 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  this[0x18] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                )0x1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


