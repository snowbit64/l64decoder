// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLightType
// Entry Point: 00a54794
// Size: 232 bytes
// Signature: undefined __thiscall setLightType(LightSource * this, LIGHT_TYPE param_1)


/* LightSource::setLightType(LightSource::LIGHT_TYPE) */

void __thiscall LightSource::setLightType(LightSource *this,LIGHT_TYPE param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float __x;
  
  *(LIGHT_TYPE *)(this + 0x16c) = param_1;
  __x = (*(float *)(this + 0x19c) * 0.5 * 3.141593) / 180.0;
  fVar2 = cosf(__x);
  fVar3 = *(float *)(this + 0x198);
  *(float *)(this + 0x1a4) = fVar2;
  fVar2 = 5.0;
  if ((5.0 < fVar3) || (fVar2 = 0.0, fVar3 < 0.0)) {
    fVar3 = fVar2;
    *(float *)(this + 0x198) = fVar3;
  }
  fVar3 = (float)NEON_fmadd(__x / -5.0,fVar3,__x);
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


