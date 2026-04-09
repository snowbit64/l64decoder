// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11034
// Entry Point: 00f11034
// Size: 164 bytes
// Signature: undefined FUN_00f11034(void)


bool FUN_00f11034(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*(int *)((long)param_1 + 0xc) != *(int *)((long)param_2 + 0xc)) {
    return false;
  }
  bVar1 = true;
  switch(*(int *)((long)param_1 + 0xc)) {
  case 0:
    break;
  case 1:
    bVar1 = *(int *)param_1 == *(int *)param_2;
    break;
  default:
    bVar1 = *param_1 == *param_2;
    break;
  case 3:
    bVar1 = *param_1 == *param_2;
    break;
  case 4:
    if (*(float *)param_1 != *(float *)param_2) {
      return false;
    }
    if (*(float *)((long)param_1 + 4) != *(float *)((long)param_2 + 4)) {
      return false;
    }
    bVar1 = *(float *)(param_1 + 1) == *(float *)(param_2 + 1);
  }
  return bVar1;
}


