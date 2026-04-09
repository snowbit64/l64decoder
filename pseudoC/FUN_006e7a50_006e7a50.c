// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7a50
// Entry Point: 006e7a50
// Size: 84 bytes
// Signature: undefined FUN_006e7a50(void)


void FUN_006e7a50(undefined8 param_1)

{
  long *this;
  
  EngineManager::getInstance();
  EngineManager::getInputDevice();
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setBool((Properties *)this,"game.input.joystick#vibration",*(bool *)param_1);
                    /* WARNING: Could not recover jumptable at 0x006e7aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


