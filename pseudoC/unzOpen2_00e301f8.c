// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzOpen2
// Entry Point: 00e301f8
// Size: 96 bytes
// Signature: undefined unzOpen2(void)


void unzOpen2(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined auStack_80 [88];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined *)0x0) {
    fill_zlib_filefunc64_32_def_from_filefunc32(auStack_80);
    param_2 = auStack_80;
  }
  FUN_00e30258(param_1,param_2,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


