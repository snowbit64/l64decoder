// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7d0c
// Entry Point: 006e7d0c
// Size: 132 bytes
// Signature: undefined FUN_006e7d0c(void)


void FUN_006e7d0c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = false;
  uVar2 = Properties::getFloat
                    (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),"game.audio#volume"
                     ,local_2c);
  uVar3 = 0;
  if (local_2c[0] != false) {
    uVar3 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


