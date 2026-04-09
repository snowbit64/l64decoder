// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f110d8
// Entry Point: 00f110d8
// Size: 168 bytes
// Signature: undefined FUN_00f110d8(void)


bool FUN_00f110d8(double *param_1,double *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)((long)param_1 + 0xc) & 0xf;
  if (uVar1 != *(uint *)((long)param_2 + 0xc)) {
    return false;
  }
  bVar2 = true;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    bVar2 = *(int *)param_1 == *(int *)param_2;
    break;
  default:
    bVar2 = *param_1 == *param_2;
    break;
  case 3:
    bVar2 = *param_1 == *param_2;
    break;
  case 4:
    if (*(float *)param_1 != *(float *)param_2) {
      return false;
    }
    if (*(float *)((long)param_1 + 4) != *(float *)((long)param_2 + 4)) {
      return false;
    }
    bVar2 = *(float *)(param_1 + 1) == *(float *)(param_2 + 1);
  }
  return bVar2;
}


