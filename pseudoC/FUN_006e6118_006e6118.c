// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6118
// Entry Point: 006e6118
// Size: 80 bytes
// Signature: undefined FUN_006e6118(void)


void FUN_006e6118(uint *param_1)

{
  byte bVar1;
  
  if (*param_1 < 0x18) {
    bVar1 = Application::setLanguage(GameScriptBinding::s_pApplication,*param_1);
    bVar1 = bVar1 & 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x40) = bVar1;
  param_1[0x42] = 3;
  return;
}


