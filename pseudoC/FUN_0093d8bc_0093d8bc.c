// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0093d8bc
// Entry Point: 0093d8bc
// Size: 164 bytes
// Signature: undefined FUN_0093d8bc(void)


void FUN_0093d8bc(undefined8 param_1,long param_2)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_2 + 0x90);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_2 + 0x98) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_2 + 0x70) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x58);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x80));
    bVar1 = *(byte *)(param_2 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x40);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x68));
    bVar1 = *(byte *)(param_2 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x50));
    bVar1 = *(byte *)(param_2 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x38));
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x20));
  return;
}


