// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008bbc48
// Entry Point: 008bbc48
// Size: 196 bytes
// Signature: undefined FUN_008bbc48(void)


void FUN_008bbc48(void **param_1)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar4 = pvVar2;
  pvVar3 = param_1[1];
  if (param_1[1] != pvVar2) {
    do {
      pbVar5 = *(byte **)((long)pvVar3 + -0x30);
      pvVar4 = (void *)((long)pvVar3 + -0x48);
      if (pbVar5 != (byte *)0x0) {
        pbVar1 = *(byte **)((long)pvVar3 + -0x28);
        pbVar6 = pbVar5;
        if (pbVar1 != pbVar5) {
          do {
            pbVar6 = pbVar1 + -0x68;
            if ((*pbVar6 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + -0x58));
            }
            pbVar1 = pbVar6;
          } while (pbVar6 != pbVar5);
          pbVar6 = *(byte **)((long)pvVar3 + -0x30);
        }
        *(byte **)((long)pvVar3 + -0x28) = pbVar5;
        operator_delete(pbVar6);
      }
      pvVar3 = pvVar4;
    } while (pvVar4 != pvVar2);
    pvVar4 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar4);
  return;
}


