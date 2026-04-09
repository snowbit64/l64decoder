// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c94bac
// Entry Point: 00c94bac
// Size: 140 bytes
// Signature: undefined FUN_00c94bac(void)


void FUN_00c94bac(void **param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == puVar2) {
    param_1[1] = puVar2;
    operator_delete(puVar2);
    return;
  }
  do {
    puVar1 = puVar1 + -10;
    (**(code **)*puVar1)(puVar1);
  } while (puVar1 != puVar2);
  param_1[1] = puVar2;
  operator_delete(*param_1);
  return;
}


