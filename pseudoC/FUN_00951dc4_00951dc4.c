// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00951dc4
// Entry Point: 00951dc4
// Size: 200 bytes
// Signature: undefined FUN_00951dc4(void)


void FUN_00951dc4(undefined8 *param_1)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte **ppbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  ppbVar3 = (byte **)*param_1;
  if (ppbVar3 == (byte **)0x0) {
    return;
  }
  ppbVar4 = (byte **)param_1[1];
  ppbVar1 = ppbVar3;
  if (ppbVar4 != ppbVar3) {
    do {
      ppbVar1 = ppbVar4 + -3;
      pbVar5 = *ppbVar1;
      if (pbVar5 != (byte *)0x0) {
        pbVar2 = ppbVar4[-2];
        pbVar6 = pbVar5;
        if (pbVar2 != pbVar5) {
          do {
            pbVar6 = pbVar2 + -0x18;
            if ((*pbVar6 & 1) != 0) {
              operator_delete(*(void **)(pbVar2 + -8));
            }
            pbVar2 = pbVar6;
          } while (pbVar6 != pbVar5);
          pbVar6 = *ppbVar1;
        }
        ppbVar4[-2] = pbVar5;
        operator_delete(pbVar6);
      }
      ppbVar4 = ppbVar1;
    } while (ppbVar1 != ppbVar3);
    ppbVar1 = (byte **)*param_1;
  }
  param_1[1] = ppbVar3;
  operator_delete(ppbVar1);
  return;
}


