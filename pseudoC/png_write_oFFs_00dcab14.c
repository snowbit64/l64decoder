// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_oFFs
// Entry Point: 00dcab14
// Size: 176 bytes
// Signature: undefined png_write_oFFs(void)


void png_write_oFFs(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  undefined auStack_54 [4];
  undefined auStack_50 [4];
  undefined local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for oFFs chunk");
  }
  png_save_int_32(auStack_54,param_2);
  png_save_int_32(auStack_50,param_3);
  local_4c = (char)param_4;
  FUN_00dc8238(param_1,0x6f464673,auStack_54,9);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


