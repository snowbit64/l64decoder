// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSoundDevice
// Entry Point: 00750328
// Size: 8 bytes
// Signature: undefined __thiscall setSoundDevice(EngineManager * this, IAudioDevice * param_1)


/* EngineManager::setSoundDevice(IAudioDevice*) */

void __thiscall EngineManager::setSoundDevice(EngineManager *this,IAudioDevice *param_1)

{
  *(IAudioDevice **)(this + 0xe0) = param_1;
  return;
}


