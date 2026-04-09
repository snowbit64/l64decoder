// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e69a4
// Entry Point: 006e69a4
// Size: 188 bytes
// Signature: undefined FUN_006e69a4(void)


void FUN_006e69a4(char *param_1)

{
  int iVar1;
  int iVar2;
  long *this;
  
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  if (*param_1 == '\0') {
    iVar1 = Properties::getInt((Properties *)this,"game.graphic.display.previousWidth",0);
    iVar2 = Properties::getInt((Properties *)this,"game.graphic.display.previousHeight",0);
    if (iVar1 != 0 && iVar2 != 0) {
      Properties::setInt((Properties *)this,"game.graphic.display.width",iVar1);
      Properties::setInt((Properties *)this,"game.graphic.display.height",iVar2);
    }
  }
  Properties::setBool((Properties *)this,"game.graphic.display.userConfirmed",true);
                    /* WARNING: Could not recover jumptable at 0x006e6a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 0x30))(this);
  return;
}


