// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexTriangleCallback
// Entry Point: 00f9346c
// Size: 80 bytes
// Signature: undefined __thiscall ~btConvexTriangleCallback(btConvexTriangleCallback * this)


/* btConvexTriangleCallback::~btConvexTriangleCallback() */

void __thiscall btConvexTriangleCallback::~btConvexTriangleCallback(btConvexTriangleCallback *this)

{
  *(undefined ***)this = &PTR__btConvexTriangleCallback_0101c128;
  (**(code **)(**(long **)(this + 0x40) + 0x28))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00f934b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x40) + 0x20))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
  return;
}


