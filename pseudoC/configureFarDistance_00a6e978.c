// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: configureFarDistance
// Entry Point: 00a6e978
// Size: 112 bytes
// Signature: undefined __thiscall configureFarDistance(LocalGeometryTransformGroup * this, float param_1)


/* LocalGeometryTransformGroup::configureFarDistance(float) */

void __thiscall
LocalGeometryTransformGroup::configureFarDistance(LocalGeometryTransformGroup *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(this + 0x170) = param_1;
  lVar1 = EngineManager::getInstance();
  fVar3 = *(float *)(this + 0x170);
  fVar2 = *(float *)(lVar1 + 0x1cc) * param_1;
  *(float *)(this + 0x174) = fVar2;
  lVar1 = EngineManager::getInstance();
  if (fVar3 * *(float *)(lVar1 + 0x1d0) <= fVar2) {
    fVar2 = *(float *)(this + 0x174);
  }
  else {
    fVar2 = *(float *)(this + 0x170);
    lVar1 = EngineManager::getInstance();
    fVar2 = fVar2 * *(float *)(lVar1 + 0x1d0);
  }
  *(float *)(this + 0x178) = fVar2;
  return;
}


