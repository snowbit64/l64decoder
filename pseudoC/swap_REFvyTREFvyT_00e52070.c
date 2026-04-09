// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap___REFvyTREFvyT
// Entry Point: 00e52070
// Size: 224 bytes
// Signature: undefined swap___REFvyTREFvyT(void)


void swap___REFvyTREFvyT(undefined param_1 [16],undefined *param_2,undefined *param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  uint uVar7;
  
  uVar1 = param_3[1];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_3[2];
  uVar5 = param_2[2];
  uVar6 = param_3[3];
  uVar7 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
          (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  if ((uVar7 & 1) != 0) {
    *param_2 = *param_3;
  }
  if ((uVar7 >> 1 & 1) == 0) {
    uVar1 = param_2[3];
  }
  else {
    param_2[1] = uVar1;
    uVar1 = param_2[3];
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2[2] = uVar4;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_2[3] = uVar6;
  }
  if ((uVar7 & 1) != 0) {
    *param_3 = uVar2;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_3[1] = uVar3;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_3[2] = uVar5;
  }
  if ((uVar7 >> 3 & 1) == 0) {
    return;
  }
  param_3[3] = uVar1;
  return;
}


