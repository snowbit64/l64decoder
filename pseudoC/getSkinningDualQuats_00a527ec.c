// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSkinningDualQuats
// Entry Point: 00a527ec
// Size: 16 bytes
// Signature: undefined __thiscall getSkinningDualQuats(GsShape * this, float * param_1)


/* GsShape::getSkinningDualQuats(float*) const */

void __thiscall GsShape::getSkinningDualQuats(GsShape *this,float *param_1)

{
  if (*(SkinningInfo **)(this + 0x1f8) != (SkinningInfo *)0x0) {
    SkinningInfo::getSkinningDualQuats(*(SkinningInfo **)(this + 0x1f8),param_1);
    return;
  }
  return;
}


