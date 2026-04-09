// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6af0
// Entry Point: 006e6af0
// Size: 156 bytes
// Signature: undefined FUN_006e6af0(void)


void FUN_006e6af0(long param_1)

{
  int iVar1;
  char *__s1;
  undefined4 uVar2;
  
  __s1 = (char *)Properties::getString
                           (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
                            "game.graphic.display.fullscreenMode","");
  iVar1 = strcasecmp(__s1,"exclusive_fullscreen");
  if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,"fullscreen"), iVar1 == 0)) {
    uVar2 = 2;
  }
  else {
    iVar1 = strcasecmp(__s1,"windowed_fullscreen");
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      goto LAB_006e6b78;
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
LAB_006e6b78:
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


