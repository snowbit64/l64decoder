// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2SoftBodyHeightfieldTriangleCallback
// Entry Point: 00bb0850
// Size: 68 bytes
// Signature: undefined __thiscall ~Bt2SoftBodyHeightfieldTriangleCallback(Bt2SoftBodyHeightfieldTriangleCallback * this)


/* Bt2SoftBodyHeightfieldTriangleCallback::~Bt2SoftBodyHeightfieldTriangleCallback() */

void __thiscall
Bt2SoftBodyHeightfieldTriangleCallback::~Bt2SoftBodyHeightfieldTriangleCallback
          (Bt2SoftBodyHeightfieldTriangleCallback *this)

{
  *(undefined ***)this = &PTR__Bt2SoftBodyHeightfieldTriangleCallback_00feb1f0;
                    /* try { // try from 00bb0870 to 00bb0873 has its CatchHandler @ 00bb0894 */
  clearCache();
  btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
  ::~btHashMap((btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                *)(this + 0x58));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  operator_delete(this);
  return;
}


