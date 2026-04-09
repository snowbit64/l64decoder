// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionOffsetAndScale
// Entry Point: 00929480
// Size: 36 bytes
// Signature: undefined __thiscall getPositionOffsetAndScale(DestructionGeometryShared * this, float * param_1, float * param_2)


/* DestructionGeometryShared::getPositionOffsetAndScale(float*, float&) */

void __thiscall
DestructionGeometryShared::getPositionOffsetAndScale
          (DestructionGeometryShared *this,float *param_1,float *param_2)

{
  *param_1 = *(float *)(this + 0x78);
  param_1[1] = *(float *)(this + 0x7c);
  param_1[2] = *(float *)(this + 0x80);
  *param_2 = *(float *)(this + 0x84);
  return;
}


