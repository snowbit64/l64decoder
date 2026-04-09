// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6e38
// Entry Point: 006e6e38
// Size: 148 bytes
// Signature: undefined FUN_006e6e38(void)


void FUN_006e6e38(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = false;
  uVar2 = Properties::getFloat
                    (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
                     "game.graphic.display.brightnessNits",local_3c);
  uVar3 = 0x43960000;
  if (local_3c[0] != false) {
    uVar3 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


