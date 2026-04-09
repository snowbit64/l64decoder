// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsShape
// Entry Point: 00a516c8
// Size: 36 bytes
// Signature: undefined __thiscall ~GsShape(GsShape * this)


/* GsShape::~GsShape() */

void __thiscall GsShape::~GsShape(GsShape *this)

{
  ~GsShape(this);
  operator_delete(this);
  return;
}


