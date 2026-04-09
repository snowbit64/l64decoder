// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxdepth
// Entry Point: 00f4370c
// Size: 88 bytes
// Signature: undefined __cdecl maxdepth(btDbvtNode * param_1)


/* btDbvt::maxdepth(btDbvtNode const*) */

void btDbvt::maxdepth(btDbvtNode *param_1)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  if (param_1 != (btDbvtNode *)0x0) {
    FUN_00f43764(param_1,1,&local_2c);
    param_1 = (btDbvtNode *)(ulong)local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


