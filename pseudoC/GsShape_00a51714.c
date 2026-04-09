// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsShape
// Entry Point: 00a51714
// Size: 40 bytes
// Signature: undefined __thiscall ~GsShape(GsShape * this)


/* non-virtual thunk to GsShape::~GsShape() */

void __thiscall GsShape::~GsShape(GsShape *this)

{
  ~GsShape(this + -0x160);
  operator_delete(this + -0x160);
  return;
}


