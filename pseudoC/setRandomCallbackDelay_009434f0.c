// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRandomCallbackDelay
// Entry Point: 009434f0
// Size: 20 bytes
// Signature: undefined __thiscall setRandomCallbackDelay(I3DStreamingManager * this, float param_1, float param_2)


/* I3DStreamingManager::setRandomCallbackDelay(float, float) */

void __thiscall
I3DStreamingManager::setRandomCallbackDelay(I3DStreamingManager *this,float param_1,float param_2)

{
  *(float *)(this + 0x68) = param_1;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  *(float *)(this + 0x6c) = param_2;
  return;
}


