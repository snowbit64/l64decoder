// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e49408
// Entry Point: 00e49408
// Size: 120 bytes
// Signature: undefined FUN_00e49408(void)


int FUN_00e49408(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e4589c(param_1,&local_3c,&local_44,&local_40);
  if (iVar2 != 0) {
    FUN_00e46748(param_1,local_3c,local_44,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


