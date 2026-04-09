// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_fixed_error
// Entry Point: 00daf4e0
// Size: 124 bytes
// Signature: noreturn undefined png_fixed_error(void)


void png_fixed_error(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char local_d8 [195];
  undefined local_15;
  
  uStack_e8._0_1_ = 'i';
  uStack_e8._1_1_ = 'n';
  uStack_e8._2_1_ = 't';
  uStack_e8._3_1_ = ' ';
  uStack_e8._4_1_ = 'o';
  uStack_e8._5_1_ = 'v';
  uStack_e8._6_1_ = 'e';
  uStack_e8._7_1_ = 'r';
  local_f0._0_1_ = 'f';
  local_f0._1_1_ = 'i';
  local_f0._2_1_ = 'x';
  local_f0._3_1_ = 'e';
  local_f0._4_1_ = 'd';
  local_f0._5_1_ = ' ';
  local_f0._6_1_ = 'p';
  local_f0._7_1_ = 'o';
  local_e0._0_1_ = 'f';
  local_e0._1_1_ = 'l';
  local_e0._2_1_ = 'o';
  local_e0._3_1_ = 'w';
  local_e0._4_1_ = ' ';
  local_e0._5_1_ = 'i';
  local_e0._6_1_ = 'n';
  local_e0._7_1_ = ' ';
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    while (*(char *)(param_2 + uVar1) != '\0') {
      local_d8[uVar1] = *(char *)(param_2 + uVar1);
      uVar1 = uVar1 + 1;
      if ((int)uVar1 == 0xc3) {
        local_15 = 0;
                    /* WARNING: Subroutine does not return */
        png_error(param_1,&local_f0);
      }
    }
  }
  local_d8[uVar1 & 0xffffffff] = '\0';
                    /* WARNING: Subroutine does not return */
  png_error(param_1,&local_f0);
}


