// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b5d0
// Entry Point: 0079b5d0
// Size: 172 bytes
// Signature: undefined FUN_0079b5d0(void)


void FUN_0079b5d0(long **param_1)

{
  long *plVar1;
  
  switch(*(int *)(param_1 + 1)) {
  case 1:
  case 2:
    if (*(int *)param_1 != 0) {
LAB_0079b654:
      DAT_021101b0._4_4_ = -1;
      goto LAB_0079b668;
    }
    break;
  case 3:
    if (*(char *)param_1 != '\0') goto LAB_0079b654;
    break;
  case 4:
    if (*(float *)param_1 != 0.0) goto LAB_0079b654;
    break;
  case 5:
    if ((double)*param_1 != 0.0) goto LAB_0079b654;
    break;
  case 7:
  case 8:
    plVar1 = *param_1;
joined_r0x0079b650:
    if (plVar1 != (long *)0x0) goto LAB_0079b654;
    break;
  case 0xd:
    if (*param_1 != (long *)0x0) {
      plVar1 = (long *)**param_1;
      goto joined_r0x0079b650;
    }
  }
  DAT_021101b0._4_4_ = (int)DAT_021101b0;
  DAT_021101b0._0_4_ = (int)DAT_021101b0 + 1;
LAB_0079b668:
  *(int *)(param_1 + 0x20) = DAT_021101b0._4_4_;
  *(int *)(param_1 + 0x21) = 1;
  return;
}


