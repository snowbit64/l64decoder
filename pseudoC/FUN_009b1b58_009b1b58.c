// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b1b58
// Entry Point: 009b1b58
// Size: 36 bytes
// Signature: undefined FUN_009b1b58(void)


void FUN_009b1b58(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < *(float *)(param_2 + 8)) {
    uVar1 = *param_4;
    *(undefined8 *)(param_2 + 0x24) = param_4[1];
    *(undefined8 *)(param_2 + 0x1c) = uVar1;
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(float *)(param_2 + 8) = param_1;
    *(undefined8 *)(param_2 + 0x14) = uVar2;
    *(undefined8 *)(param_2 + 0xc) = uVar1;
  }
  return;
}


