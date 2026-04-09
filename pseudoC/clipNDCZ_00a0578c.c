// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipNDCZ
// Entry Point: 00a0578c
// Size: 40 bytes
// Signature: undefined __thiscall clipNDCZ(TransformArgs * this, float param_1)


/* TransformArgs::clipNDCZ(float) */

float __thiscall TransformArgs::clipNDCZ(TransformArgs *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 200);
  fVar2 = *(float *)(this + 0xcc);
  fVar1 = fVar2;
  if (fVar3 <= fVar2) {
    fVar1 = fVar3;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  if (fVar1 <= param_1) {
    fVar1 = fVar2;
  }
  return fVar1;
}


