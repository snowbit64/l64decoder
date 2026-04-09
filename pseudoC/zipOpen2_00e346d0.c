// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipOpen2
// Entry Point: 00e346d0
// Size: 120 bytes
// Signature: undefined zipOpen2(void)


void zipOpen2(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined *)0x0) {
    fill_zlib_filefunc64_32_def_from_filefunc32(auStack_90,param_4);
    param_4 = auStack_90;
  }
  zipOpen3(param_1,param_2,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


