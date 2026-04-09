// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dab25c
// Entry Point: 00dab25c
// Size: 296 bytes
// Signature: undefined FUN_00dab25c(void)


bool FUN_00dab25c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = param_1[6];
  iVar1 = param_2[6] + param_3;
  bVar4 = param_2[6] - param_3 <= iVar2;
  bVar3 = false;
  if (bVar4) {
    bVar3 = iVar2 - iVar1 < 0;
  }
  if ((!bVar4 || iVar2 != iVar1) && bVar3 == (bVar4 && SBORROW4(iVar2,iVar1))) {
    return false;
  }
  bVar4 = false;
  if ((param_2[7] - param_3 <= param_1[7]) && (param_1[7] <= param_2[7] + param_3)) {
    bVar4 = false;
    if ((*param_2 - param_3 <= *param_1) && (*param_1 <= *param_2 + param_3)) {
      bVar4 = false;
      if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
        bVar4 = false;
        if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
          bVar4 = false;
          if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
            bVar4 = false;
            if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
              bVar4 = param_2[5] - param_3 <= param_1[5] && param_1[5] <= param_2[5] + param_3;
            }
          }
        }
      }
    }
  }
  return bVar4;
}


