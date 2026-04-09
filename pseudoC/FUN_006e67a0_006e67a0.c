// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e67a0
// Entry Point: 006e67a0
// Size: 72 bytes
// Signature: undefined FUN_006e67a0(void)


void FUN_006e67a0(float *param_1)

{
  long *this;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)this,"game.graphic.display.rtScaling",*param_1);
                    /* WARNING: Could not recover jumptable at 0x006e67e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


