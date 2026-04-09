// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c68690
// Entry Point: 00c68690
// Size: 148 bytes
// Signature: undefined FUN_00c68690(void)


void FUN_00c68690(long param_1,void *param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if (param_2 == (void *)0x0) {
      return;
    }
    goto LAB_00c68714;
  }
  if ((*(byte *)((long)param_2 + 0x60) & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x40) & 1) == 0) goto LAB_00c686b8;
LAB_00c686ec:
    operator_delete(*(void **)((long)param_2 + 0x50));
    if ((*(byte *)((long)param_2 + 0x28) & 1) != 0) goto LAB_00c686fc;
LAB_00c686c0:
    bVar1 = *(byte *)((long)param_2 + 0x10);
  }
  else {
    operator_delete(*(void **)((long)param_2 + 0x70));
    if ((*(byte *)((long)param_2 + 0x40) & 1) != 0) goto LAB_00c686ec;
LAB_00c686b8:
    if ((*(byte *)((long)param_2 + 0x28) & 1) == 0) goto LAB_00c686c0;
LAB_00c686fc:
    operator_delete(*(void **)((long)param_2 + 0x38));
    bVar1 = *(byte *)((long)param_2 + 0x10);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x20));
  }
LAB_00c68714:
  operator_delete(param_2);
  return;
}


