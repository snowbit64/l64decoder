// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c210
// Entry Point: 00d7c210
// Size: 188 bytes
// Signature: undefined FUN_00d7c210(void)


void FUN_00d7c210(long param_1)

{
  long lVar1;
  long in_x4;
  uint *in_x5;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x238);
  (**(code **)(*(long *)(param_1 + 0x260) + 8))();
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,*(undefined8 *)(lVar3 + 0x18),in_x4 + (ulong)*in_x5 * 8,0);
  *in_x5 = *in_x5;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


