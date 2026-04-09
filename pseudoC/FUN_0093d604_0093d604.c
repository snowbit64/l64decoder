// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0093d604
// Entry Point: 0093d604
// Size: 128 bytes
// Signature: undefined FUN_0093d604(void)


void FUN_0093d604(byte **param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x30;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x20));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


