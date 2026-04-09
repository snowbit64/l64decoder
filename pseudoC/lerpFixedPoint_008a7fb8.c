// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerpFixedPoint
// Entry Point: 008a7fb8
// Size: 112 bytes
// Signature: undefined __cdecl lerpFixedPoint(short * param_1, int param_2, FixedPoint * param_3)


/* AudioMathUtil::lerpFixedPoint(short const*, int, AudioMathUtil::FixedPoint const&) */

undefined4 AudioMathUtil::lerpFixedPoint(short *param_1,int param_2,FixedPoint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  float fVar6;
  
  uVar3 = *(uint *)param_3;
  bVar1 = (int)uVar3 >> 0xd < param_2;
  bVar5 = false;
  if (bVar1) {
    bVar5 = (int)(uVar3 + 1) < 0;
  }
  iVar2 = (int)uVar3 >> 0xd;
  if ((!bVar1 || uVar3 == 0xffffffff) || bVar5 != (bVar1 && SBORROW4(uVar3,-1))) {
    iVar2 = param_2 + -1;
  }
  fVar6 = (float)(int)param_1[iVar2] * 3.051758e-05;
  if (iVar2 != 0) {
    fVar6 = (float)(int)param_1[(long)iVar2 + -1] * 3.051758e-05;
  }
  uVar4 = NEON_fmadd((float)(uVar3 & 0x1fff) * 0.0001220703,
                     (float)(int)param_1[iVar2] * 3.051758e-05 - fVar6,fVar6);
  return uVar4;
}


