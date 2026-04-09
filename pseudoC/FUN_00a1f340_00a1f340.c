// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a1f340
// Entry Point: 00a1f340
// Size: 168 bytes
// Signature: undefined FUN_00a1f340(void)


void FUN_00a1f340(byte **param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *param_1;
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  pbVar1 = pbVar3;
  if (param_1[1] != pbVar3) {
    pbVar1 = param_1[1] + -0x1c8;
    do {
      *(undefined ***)(pbVar1 + 0x18) = &PTR__Task_00fde908;
      if ((pbVar1[0x28] & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + 0x38));
      }
      if ((*pbVar1 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + 0x10));
      }
      pbVar2 = pbVar1 + -0xf8;
      pbVar1 = pbVar1 + -0x2c0;
    } while (pbVar2 != pbVar3);
    pbVar1 = *param_1;
  }
  param_1[1] = pbVar3;
  operator_delete(pbVar1);
  return;
}


