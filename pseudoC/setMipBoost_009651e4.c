// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMipBoost
// Entry Point: 009651e4
// Size: 104 bytes
// Signature: undefined __thiscall setMipBoost(TextureStreamingManager * this, float param_1)


/* TextureStreamingManager::setMipBoost(float) */

void __thiscall TextureStreamingManager::setMipBoost(TextureStreamingManager *this,float param_1)

{
  ulong uVar1;
  
  uVar1 = MathUtil::isZero((double)(*(float *)(this + 0x14) - param_1),1e-09);
  *(float *)(this + 0x14) = param_1;
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


