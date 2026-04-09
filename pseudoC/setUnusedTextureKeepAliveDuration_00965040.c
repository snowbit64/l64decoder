// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUnusedTextureKeepAliveDuration
// Entry Point: 00965040
// Size: 104 bytes
// Signature: undefined __thiscall setUnusedTextureKeepAliveDuration(TextureStreamingManager * this, float param_1)


/* TextureStreamingManager::setUnusedTextureKeepAliveDuration(float) */

void __thiscall
TextureStreamingManager::setUnusedTextureKeepAliveDuration
          (TextureStreamingManager *this,float param_1)

{
  ulong uVar1;
  
  uVar1 = MathUtil::isZero((double)(*(float *)(this + 0x1c0) - param_1),1e-09);
  *(float *)(this + 0x1c0) = param_1;
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


