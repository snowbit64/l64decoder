// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6aa8
// Entry Point: 006e6aa8
// Size: 72 bytes
// Signature: undefined FUN_006e6aa8(void)


void FUN_006e6aa8(int *param_1)

{
  long *this;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setInt((Properties *)this,"game.startMode",*param_1);
                    /* WARNING: Could not recover jumptable at 0x006e6aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


