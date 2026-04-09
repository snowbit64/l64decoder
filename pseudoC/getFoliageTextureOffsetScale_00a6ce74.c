// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFoliageTextureOffsetScale
// Entry Point: 00a6ce74
// Size: 88 bytes
// Signature: undefined __thiscall getFoliageTextureOffsetScale(DensityAnimationMap * this, float * param_1, float * param_2)


/* DensityAnimationMap::getFoliageTextureOffsetScale(float*, float*) const */

void __thiscall
DensityAnimationMap::getFoliageTextureOffsetScale
          (DensityAnimationMap *this,float *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 0x6c);
  uVar5 = *(ulong *)(this + 0x48);
  *param_1 = *(float *)(this + 0x5c);
  iVar2 = uVar1 - 1;
  param_1[1] = *(float *)(this + 0x60);
  param_1[2] = 1.0 / *(float *)(this + 0x74);
  fVar4 = (float)(ulong)uVar1;
  uVar3 = NEON_ucvtf(CONCAT44(iVar2,iVar2) & uVar5,4);
  param_1[3] = 1.0 / *(float *)(this + 0x74);
  *(ulong *)param_2 = CONCAT44((float)((ulong)uVar3 >> 0x20) / fVar4,(float)uVar3 / fVar4);
  return;
}


