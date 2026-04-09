// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1a6d4
// Entry Point: 00f1a6d4
// Size: 104 bytes
// Signature: undefined FUN_00f1a6d4(void)


void FUN_00f1a6d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar4 = *(uint **)(*(long *)(param_1 + 0x20) + 0x18);
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x1068);
  if ((lVar2 != 0) && ((*puVar4 & 0xbf) != 1)) {
    *(uint **)(*(long *)(param_1 + 0x20) + 0x18) = puVar4;
    FUN_00f1a52c(param_1,lVar2,0);
    if (*(char *)(param_1 + 3) != '\0') {
      if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f1a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_01017888)[*(byte *)puVar4])();
  return;
}


