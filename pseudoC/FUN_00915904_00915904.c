// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00915904
// Entry Point: 00915904
// Size: 124 bytes
// Signature: undefined FUN_00915904(void)


void FUN_00915904(void **param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -10;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar1);
  return;
}


