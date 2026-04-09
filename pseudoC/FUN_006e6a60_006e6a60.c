// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6a60
// Entry Point: 006e6a60
// Size: 72 bytes
// Signature: undefined FUN_006e6a60(void)


void FUN_006e6a60(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = Properties::getInt(*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
                             "game.startMode",0);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


