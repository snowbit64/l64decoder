// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6710
// Entry Point: 006e6710
// Size: 72 bytes
// Signature: undefined FUN_006e6710(void)


void FUN_006e6710(float *param_1)

{
  long *this;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)this,"game.graphic.display.uiScaling",*param_1);
                    /* WARNING: Could not recover jumptable at 0x006e6754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


