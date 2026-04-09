// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexTriangleCallback
// Entry Point: 00f934bc
// Size: 88 bytes
// Signature: undefined __thiscall ~btConvexTriangleCallback(btConvexTriangleCallback * this)


/* btConvexTriangleCallback::~btConvexTriangleCallback() */

void __thiscall btConvexTriangleCallback::~btConvexTriangleCallback(btConvexTriangleCallback *this)

{
  *(undefined ***)this = &PTR__btConvexTriangleCallback_0101c128;
  (**(code **)(**(long **)(this + 0x40) + 0x28))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
  (**(code **)(**(long **)(this + 0x40) + 0x20))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
  operator_delete(this);
  return;
}


