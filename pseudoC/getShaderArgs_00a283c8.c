// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderArgs
// Entry Point: 00a283c8
// Size: 168 bytes
// Signature: undefined __thiscall getShaderArgs(LightListRasterizer * this, float * param_1, float * param_2, float * param_3, uint * param_4)


/* LightListRasterizer::getShaderArgs(float&, float&, float&, unsigned int&) const */

void __thiscall
LightListRasterizer::getShaderArgs
          (LightListRasterizer *this,float *param_1,float *param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 0x20);
  fVar2 = logf(*(float *)(this + 0x1c) * (1.0 / fVar6));
  fVar3 = *(float *)(this + 0x18);
  uVar1 = *(uint *)(this + 0x14);
  *param_1 = 1.0 / fVar6;
  fVar4 = 0.0;
  if (fVar3 < fVar6) {
    fVar4 = 1.0;
  }
  fVar5 = (float)(ulong)uVar1;
  *param_4 = *(uint *)(this + 0x24);
  *param_2 = ((float)(ulong)(uVar1 - (fVar3 < fVar6)) / (fVar2 + 0.0)) / fVar5;
  *param_3 = fVar4 / fVar5;
  return;
}


