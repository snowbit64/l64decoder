// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTargetTexelToPixelRatio
// Entry Point: 00965170
// Size: 116 bytes
// Signature: undefined __thiscall setTargetTexelToPixelRatio(TextureStreamingManager * this, float param_1)


/* TextureStreamingManager::setTargetTexelToPixelRatio(float) */

void __thiscall
TextureStreamingManager::setTargetTexelToPixelRatio(TextureStreamingManager *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (0.001 <= param_1) {
    fVar1 = log2f(param_1);
    fVar2 = *(float *)(this + 0x10);
    *(float *)(this + 0xc) = param_1;
    *(float *)(this + 0x10) = fVar1;
    if (fVar2 != fVar1) {
      *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
      Semaphore::post();
      return;
    }
  }
  return;
}


