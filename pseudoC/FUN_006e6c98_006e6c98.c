// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6c98
// Entry Point: 006e6c98
// Size: 76 bytes
// Signature: undefined FUN_006e6c98(void)


void FUN_006e6c98(long param_1)

{
  byte bVar1;
  
  bVar1 = Properties::getBoolDefault
                    (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
                     "game.graphic.display.vsync#adaptive",false);
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


