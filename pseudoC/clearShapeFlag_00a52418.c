// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearShapeFlag
// Entry Point: 00a52418
// Size: 12 bytes
// Signature: undefined __thiscall clearShapeFlag(GsShape * this, SHAPE_FLAGS param_1)


/* GsShape::clearShapeFlag(GsShape::SHAPE_FLAGS) */

void __thiscall GsShape::clearShapeFlag(GsShape *this,SHAPE_FLAGS param_1)

{
  setShapeFlags(this,*(uint *)(this + 400) & (param_1 ^ 0xffffffff));
  return;
}


