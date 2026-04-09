// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDerivedValues
// Entry Point: 00a53fc4
// Size: 228 bytes
// Signature: undefined updateDerivedValues(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::updateDerivedValues() */

void LightSource::updateDerivedValues(void)

{
  uint uVar1;
  LightSource *in_x0;
  float fVar2;
  float fVar3;
  float __x;
  
  __x = (*(float *)(in_x0 + 0x19c) * 0.5 * 3.141593) / 180.0;
  fVar2 = cosf(__x);
  fVar3 = *(float *)(in_x0 + 0x198);
  *(float *)(in_x0 + 0x1a4) = fVar2;
  fVar2 = 5.0;
  if ((5.0 < fVar3) || (fVar2 = 0.0, fVar3 < 0.0)) {
    fVar3 = fVar2;
    *(float *)(in_x0 + 0x198) = fVar3;
  }
  fVar3 = (float)NEON_fmadd(__x / -5.0,fVar3,__x);
  fVar2 = cosf(fVar3);
  uVar1 = *(uint *)(in_x0 + 0x40);
  *(float *)(in_x0 + 0x1a8) = fVar2;
  *(float *)(in_x0 + 0x1a0) = fVar3 + fVar3;
  *(uint *)(in_x0 + 0x40) = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0x2002) != 0)) {
    *(uint *)(in_x0 + 0x40) = uVar1 | 0xd000;
    CullingManager::addDirtyLightSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,in_x0);
    return;
  }
  return;
}


