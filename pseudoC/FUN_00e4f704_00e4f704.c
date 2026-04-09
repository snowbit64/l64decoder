// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f704
// Entry Point: 00e4f704
// Size: 196 bytes
// Signature: undefined FUN_00e4f704(void)


int FUN_00e4f704(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double __y;
  
  dVar2 = log((double)param_1);
  dVar2 = exp((double)((float)dVar2 / (float)param_2));
  iVar1 = (int)dVar2;
  __y = (double)param_2;
  dVar2 = pow((double)((float)iVar1 + 1.0),__y);
  if ((int)dVar2 <= param_1) {
    iVar1 = iVar1 + 1;
  }
  dVar2 = pow((double)((float)iVar1 + 1.0),__y);
  if (dVar2 <= (double)param_1) {
    iVar1 = -1;
  }
  else {
    dVar2 = pow((double)iVar1,__y);
    if (param_1 < (int)dVar2) {
      iVar1 = -1;
    }
  }
  return iVar1;
}


