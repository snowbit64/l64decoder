// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerpFixedPoint
// Entry Point: 008a7f5c
// Size: 80 bytes
// Signature: undefined __cdecl lerpFixedPoint(float * param_1, int param_2, FixedPoint * param_3)


/* AudioMathUtil::lerpFixedPoint(float const*, int, AudioMathUtil::FixedPoint const&) */

undefined4 AudioMathUtil::lerpFixedPoint(float *param_1,int param_2,FixedPoint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar3 = *(uint *)param_3;
  bVar1 = (int)uVar3 >> 0xd < param_2;
  bVar4 = false;
  if (bVar1) {
    bVar4 = (int)(uVar3 + 1) < 0;
  }
  iVar2 = (int)uVar3 >> 0xd;
  if ((!bVar1 || uVar3 == 0xffffffff) || bVar4 != (bVar1 && SBORROW4(uVar3,-1))) {
    iVar2 = param_2 + -1;
  }
  fVar6 = param_1[iVar2];
  if (iVar2 != 0) {
    fVar6 = param_1[(long)iVar2 + -1];
  }
  uVar5 = NEON_fmadd((float)(uVar3 & 0x1fff) * 0.0001220703,param_1[iVar2] - fVar6,fVar6);
  return uVar5;
}


