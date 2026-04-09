// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeadTrackingDevice
// Entry Point: 00750318
// Size: 8 bytes
// Signature: undefined __thiscall setHeadTrackingDevice(EngineManager * this, HeadTrackingDevice * param_1)


/* EngineManager::setHeadTrackingDevice(HeadTrackingDevice*) */

void __thiscall
EngineManager::setHeadTrackingDevice(EngineManager *this,HeadTrackingDevice *param_1)

{
  *(HeadTrackingDevice **)(this + 0xd8) = param_1;
  return;
}


