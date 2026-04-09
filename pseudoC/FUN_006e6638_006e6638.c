// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6638
// Entry Point: 006e6638
// Size: 72 bytes
// Signature: undefined FUN_006e6638(void)


void FUN_006e6638(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = Properties::getFloat
                    (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
                     "game.graphic.display.scaling",1.0);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


