// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CalculateUV
// Entry Point: 00f907e8
// Size: 116 bytes
// Signature: undefined __cdecl CalculateUV(int param_1, int param_2, int param_3, int param_4, int param_5)


/* btSoftBodyHelpers::CalculateUV(int, int, int, int, int) */

float btSoftBodyHelpers::CalculateUV(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  switch(param_5) {
  case 0:
    return (float)param_3 / (float)(param_1 + -1);
  case 1:
    iVar1 = param_2 + -1;
    iVar2 = iVar1 - param_4;
    break;
  case 2:
    iVar1 = param_2 + -1;
    iVar2 = iVar1 + ~param_4;
    break;
  case 3:
    iVar1 = param_1 + -1;
    iVar2 = param_3 + 1;
    break;
  default:
    return 0.0;
  }
  return (float)iVar2 / (float)iVar1;
}


