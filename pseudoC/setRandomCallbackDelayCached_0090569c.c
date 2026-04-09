// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRandomCallbackDelayCached
// Entry Point: 0090569c
// Size: 20 bytes
// Signature: undefined __thiscall setRandomCallbackDelayCached(I3DManager * this, float param_1, float param_2)


/* I3DManager::setRandomCallbackDelayCached(float, float) */

void __thiscall
I3DManager::setRandomCallbackDelayCached(I3DManager *this,float param_1,float param_2)

{
  *(float *)(this + 0x68) = param_1;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  *(float *)(this + 0x6c) = param_2;
  return;
}


