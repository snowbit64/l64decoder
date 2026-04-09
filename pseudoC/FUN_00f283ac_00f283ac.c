// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f283ac
// Entry Point: 00f283ac
// Size: 68 bytes
// Signature: undefined FUN_00f283ac(void)


void FUN_00f283ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x240);
  uVar3 = *(undefined8 *)(param_1 + 600);
  uVar2 = *(undefined8 *)(param_1 + 0x250);
  uVar1 = *(undefined8 *)(param_1 + 0x260);
  uVar6 = *(undefined8 *)(param_1 + 0x238);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  param_2[5] = *(undefined8 *)(param_1 + 0x248);
  param_2[4] = uVar4;
  param_2[7] = uVar3;
  param_2[6] = uVar2;
  param_2[8] = uVar1;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  return;
}


