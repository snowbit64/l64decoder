// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c930cc
// Entry Point: 00c930cc
// Size: 140 bytes
// Signature: undefined FUN_00c930cc(void)


void FUN_00c930cc(void **param_1)

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
    puVar1 = puVar1 + -0xe;
    (**(code **)*puVar1)(puVar1);
  } while (puVar1 != puVar2);
  param_1[1] = puVar2;
  operator_delete(*param_1);
  return;
}


