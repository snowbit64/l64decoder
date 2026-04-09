// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_sCAL
// Entry Point: 00dc28bc
// Size: 212 bytes
// Signature: undefined png_set_sCAL(void)


void png_set_sCAL(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  char *pcVar2;
  undefined auStack_70 [20];
  undefined auStack_5c [20];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 <= 0.0) {
    pcVar2 = "Invalid sCAL width ignored";
  }
  else {
    if (0.0 < param_2) {
      png_ascii_from_fp(param_3,auStack_5c,0x12,5);
      png_ascii_from_fp(param_2,param_3,auStack_70,0x12,5);
      png_set_sCAL_s(param_3,param_4,param_5,auStack_5c,auStack_70);
      goto LAB_00dc2964;
    }
    pcVar2 = "Invalid sCAL height ignored";
  }
  png_warning(param_3,pcVar2);
LAB_00dc2964:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


