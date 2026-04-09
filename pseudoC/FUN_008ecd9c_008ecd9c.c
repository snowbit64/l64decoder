// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008ecd9c
// Entry Point: 008ecd9c
// Size: 148 bytes
// Signature: undefined FUN_008ecd9c(void)


void FUN_008ecd9c(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x60);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x88));
    bVar1 = *(byte *)(param_2 + 0x60);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x48);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x70));
    bVar1 = *(byte *)(param_2 + 0x48);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x30);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x58));
    bVar1 = *(byte *)(param_2 + 0x30);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 8);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x40));
    bVar1 = *(byte *)(param_2 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x18));
  return;
}


