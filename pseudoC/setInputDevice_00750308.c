// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInputDevice
// Entry Point: 00750308
// Size: 8 bytes
// Signature: undefined __thiscall setInputDevice(EngineManager * this, AndroidInputDevice * param_1)


/* EngineManager::setInputDevice(AndroidInputDevice*) */

void __thiscall EngineManager::setInputDevice(EngineManager *this,AndroidInputDevice *param_1)

{
  *(AndroidInputDevice **)(this + 0xd0) = param_1;
  return;
}


