// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raiseShapeFlag
// Entry Point: 00a5240c
// Size: 12 bytes
// Signature: undefined __thiscall raiseShapeFlag(GsShape * this, SHAPE_FLAGS param_1)


/* GsShape::raiseShapeFlag(GsShape::SHAPE_FLAGS) */

void __thiscall GsShape::raiseShapeFlag(GsShape *this,SHAPE_FLAGS param_1)

{
  setShapeFlags(this,*(uint *)(this + 400) | param_1);
  return;
}


