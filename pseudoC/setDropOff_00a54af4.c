// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDropOff
// Entry Point: 00a54af4
// Size: 232 bytes
// Signature: undefined __thiscall setDropOff(LightSource * this, float param_1)


/* LightSource::setDropOff(float) */

void __thiscall LightSource::setDropOff(LightSource *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(this + 0x198) = param_1;
  fVar3 = (*(float *)(this + 0x19c) * 0.5 * 3.141593) / 180.0;
  fVar2 = cosf(fVar3);
  *(float *)(this + 0x1a4) = fVar2;
  fVar2 = 5.0;
  if ((5.0 < param_1) || (fVar2 = 0.0, param_1 < 0.0)) {
    param_1 = fVar2;
    *(float *)(this + 0x198) = param_1;
  }
  fVar3 = (float)NEON_fmadd(fVar3 / -5.0,param_1,fVar3);
  fVar2 = cosf(fVar3);
  uVar1 = *(uint *)(this + 0x40);
  *(float *)(this + 0x1a8) = fVar2;
  *(float *)(this + 0x1a0) = fVar3 + fVar3;
  *(uint *)(this + 0x40) = uVar1 | 0x5000;
  if (((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0x2002) != 0)) {
    *(uint *)(this + 0x40) = uVar1 | 0xd000;
    CullingManager::addDirtyLightSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    return;
  }
  return;
}


