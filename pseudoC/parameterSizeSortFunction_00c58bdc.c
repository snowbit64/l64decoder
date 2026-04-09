// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parameterSizeSortFunction
// Entry Point: 00c58bdc
// Size: 448 bytes
// Signature: undefined __cdecl parameterSizeSortFunction(pair * param_1, pair * param_2)


/* GsTSymbolTableLevel::parameterSizeSortFunction(std::__ndk1::pair<int, GsTFunction::Parameter>
   const&, std::__ndk1::pair<int, GsTFunction::Parameter> const&) */

bool GsTSymbolTableLevel::parameterSizeSortFunction(pair *param_1,pair *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar4 = *(int **)(*(long *)(param_1 + 6) + 8);
  iVar5 = *piVar4;
  if (iVar5 < 3) {
    piVar2 = *(int **)(*(long *)(param_2 + 6) + 8);
    iVar3 = *piVar2;
    uVar1 = piVar4[2] - 3;
    if (iVar3 < 3) {
      if (uVar1 < 7 != piVar2[2] - 3U < 7) {
LAB_00c58c80:
        return piVar4[2] - 10U < 0xfffffff9;
      }
      if (uVar1 < 7) {
        if (iVar5 == 0) {
          iVar6 = 1;
          iVar7 = 1;
        }
        else if (iVar5 == 1) {
          iVar6 = piVar4[5];
          iVar7 = 1;
        }
        else if (iVar5 == 2) {
          iVar6 = piVar4[4];
          iVar7 = piVar4[5];
        }
        else {
          iVar6 = 0;
          iVar7 = 0;
        }
        if (iVar3 == 0) {
          iVar8 = 1;
          iVar9 = 1;
        }
        else if (iVar3 == 1) {
          iVar8 = piVar2[5];
          iVar9 = 1;
        }
        else if (iVar3 == 2) {
          iVar8 = piVar2[4];
          iVar9 = piVar2[5];
        }
        else {
          iVar8 = 0;
          iVar9 = 0;
        }
        if (iVar7 * iVar6 != iVar9 * iVar8) {
          if (iVar5 == 0) {
            iVar5 = 1;
            iVar6 = 1;
          }
          else if (iVar5 == 1) {
            iVar5 = piVar4[5];
            iVar6 = 1;
          }
          else if (iVar5 == 2) {
            iVar5 = piVar4[4];
            iVar6 = piVar4[5];
          }
          else {
            iVar5 = 0;
            iVar6 = 0;
          }
          if (iVar3 == 0) {
            iVar3 = 1;
            iVar7 = 1;
          }
          else if (iVar3 == 1) {
            iVar3 = piVar2[5];
            iVar7 = 1;
          }
          else if (iVar3 == 2) {
            iVar3 = piVar2[4];
            iVar7 = piVar2[5];
          }
          else {
            iVar3 = 0;
            iVar7 = 0;
          }
          return (uint)(iVar7 * iVar3) < (uint)(iVar6 * iVar5);
        }
      }
    }
    else if (uVar1 < 7) goto LAB_00c58c80;
  }
  else {
    piVar4 = *(int **)(*(long *)(param_2 + 6) + 8);
    if ((*piVar4 < 3) && (piVar4[2] - 3U < 7)) {
      return true;
    }
  }
  return (int)*param_1 < (int)*param_2;
}


