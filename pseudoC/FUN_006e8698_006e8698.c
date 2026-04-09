// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8698
// Entry Point: 006e8698
// Size: 64 bytes
// Signature: undefined FUN_006e8698(void)


void FUN_006e8698(float *param_1)

{
  AndroidInputDevice *this;
  
  EngineManager::getInstance();
  this = (AndroidInputDevice *)EngineManager::getInputDevice();
  if (this != (AndroidInputDevice *)0x0) {
    AndroidInputDevice::setDeadzone(this,(uint)param_1[4],(uint)param_1[8],*param_1);
    return;
  }
  return;
}


