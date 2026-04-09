// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ee4dd8
// Entry Point: 00ee4dd8
// Size: 176 bytes
// Signature: undefined FUN_00ee4dd8(void)


void FUN_00ee4dd8(undefined4 *param_1,int param_2,int *param_3)

{
  double dVar1;
  
  if (param_2 == 2) {
    if (*param_3 != 4) {
      return;
    }
    dVar1 = (double)NEON_ucvtf((ulong)(uint)param_3[1]);
    *param_1 = 3;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      if (*param_3 == 0) {
        return;
      }
      *param_1 = 2;
      if (*param_3 == 1) {
        *(undefined *)(param_1 + 2) = 1;
        return;
      }
      if (*param_3 != 2) {
        *(undefined *)(param_1 + 2) = 0;
        return;
      }
      *(bool *)(param_1 + 2) = *(char *)(param_3 + 2) == '\0';
      return;
    }
    if (*param_3 != 3) {
      return;
    }
    *param_1 = 3;
    dVar1 = -*(double *)(param_3 + 2);
  }
  *(double *)(param_1 + 2) = dVar1;
  return;
}


