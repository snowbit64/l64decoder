// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6c50
// Entry Point: 006e6c50
// Size: 72 bytes
// Signature: undefined FUN_006e6c50(void)


void FUN_006e6c50(undefined8 param_1)

{
  long *this;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setBool((Properties *)this,"game.graphic.display.vsync",*(bool *)param_1);
                    /* WARNING: Could not recover jumptable at 0x006e6c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


