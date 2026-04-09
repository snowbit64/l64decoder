// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_cHRM_fixed
// Entry Point: 00dc9c24
// Size: 204 bytes
// Signature: undefined png_write_cHRM_fixed(void)


void png_write_cHRM_fixed(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined auStack_58 [4];
  undefined auStack_54 [4];
  undefined auStack_50 [4];
  undefined auStack_4c [4];
  undefined auStack_48 [4];
  undefined auStack_44 [4];
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  png_save_int_32(auStack_58,param_2[6]);
  png_save_int_32(auStack_54,param_2[7]);
  png_save_int_32(auStack_50,*param_2);
  png_save_int_32(auStack_4c,param_2[1]);
  png_save_int_32(auStack_48,param_2[2]);
  png_save_int_32(auStack_44,param_2[3]);
  png_save_int_32(auStack_40,param_2[4]);
  png_save_int_32(auStack_3c,param_2[5]);
  FUN_00dc8238(param_1,0x6348524d,auStack_58,0x20);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


