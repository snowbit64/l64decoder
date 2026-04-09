// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae578
// Entry Point: 007ae578
// Size: 128 bytes
// Signature: undefined FUN_007ae578(void)


void FUN_007ae578(byte **param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_1 == (byte **)0x0) {
    return;
  }
  pbVar2 = *param_1;
  if (pbVar2 != (byte *)0x0) {
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
  }
  operator_delete(param_1);
  return;
}


