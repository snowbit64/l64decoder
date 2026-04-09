// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c83eb4
// Entry Point: 00c83eb4
// Size: 208 bytes
// Signature: undefined FUN_00c83eb4(void)


void FUN_00c83eb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  
  ppvVar4 = (void **)*param_1;
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar5 = (void **)param_1[1];
  ppvVar2 = ppvVar4;
  if (ppvVar5 != ppvVar4) {
    do {
      ppvVar2 = ppvVar5 + -3;
      puVar6 = (undefined8 *)*ppvVar2;
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)ppvVar5[-2];
        puVar1 = puVar6;
        if (puVar3 != puVar6) {
          do {
            puVar3 = puVar3 + -6;
            (**(code **)*puVar3)(puVar3);
          } while (puVar3 != puVar6);
          puVar1 = (undefined8 *)*ppvVar2;
        }
        ppvVar5[-2] = puVar6;
        operator_delete(puVar1);
      }
      ppvVar5 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = (void **)*param_1;
  }
  param_1[1] = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


