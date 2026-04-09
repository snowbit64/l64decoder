// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDowngradeDelay
// Entry Point: 009650a8
// Size: 104 bytes
// Signature: undefined __thiscall setDowngradeDelay(TextureStreamingManager * this, float param_1)


/* TextureStreamingManager::setDowngradeDelay(float) */

void __thiscall
TextureStreamingManager::setDowngradeDelay(TextureStreamingManager *this,float param_1)

{
  ulong uVar1;
  
  uVar1 = MathUtil::isZero((double)(*(float *)(this + 0x1c4) - param_1),1e-09);
  *(float *)(this + 0x1c4) = param_1;
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


