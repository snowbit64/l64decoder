// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkWorldTransformation
// Entry Point: 00925940
// Size: 88 bytes
// Signature: undefined __thiscall getChunkWorldTransformation(DestructionShape * this, uint param_1, bool param_2)


/* DestructionShape::getChunkWorldTransformation(unsigned int, bool) */

void __thiscall
DestructionShape::getChunkWorldTransformation(DestructionShape *this,uint param_1,bool param_2)

{
  DestructionGeometry *this_00;
  
  this_00 = *(DestructionGeometry **)(this + 0x170);
  if (param_2) {
    DestructionGeometry::getChunkWorldTransformation(this_00,param_1);
    return;
  }
  RawTransformGroup::updateWorldTransformation();
  DestructionGeometry::getChunkWorldRenderTransformation(this_00,param_1,(Matrix4x4 *)(this + 0xb8))
  ;
  return;
}


