// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6b8c
// Entry Point: 006e6b8c
// Size: 120 bytes
// Signature: undefined FUN_006e6b8c(void)


void FUN_006e6b8c(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  
  plVar3 = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  pcVar1 = "exclusive_fullscreen";
  if (*param_1 != 2) {
    pcVar1 = "windowed";
  }
  pcVar2 = "windowed_fullscreen";
  if (*param_1 != 1) {
    pcVar2 = pcVar1;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,"game.graphic.display.fullscreenMode",pcVar2);
                    /* WARNING: Could not recover jumptable at 0x006e6c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3);
  return;
}


