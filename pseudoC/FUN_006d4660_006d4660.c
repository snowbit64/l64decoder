// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d4660
// Entry Point: 006d4660
// Size: 128 bytes
// Signature: undefined FUN_006d4660(void)


void FUN_006d4660(byte **param_1)

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
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


