// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7b30
// Entry Point: 006e7b30
// Size: 96 bytes
// Signature: undefined FUN_006e7b30(void)


void FUN_006e7b30(float *param_1)

{
  AndroidInputDevice *this;
  long *this_00;
  
  EngineManager::getInstance();
  this = (AndroidInputDevice *)EngineManager::getInputDevice();
  if (this != (AndroidInputDevice *)0x0) {
    AndroidInputDevice::setDefaultDeadzone(this,*param_1);
  }
  this_00 = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)this_00,"game.input.joystick#deadzone",*param_1);
                    /* WARNING: Could not recover jumptable at 0x006e7b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this_00 + 0x30))(this_00);
  return;
}


