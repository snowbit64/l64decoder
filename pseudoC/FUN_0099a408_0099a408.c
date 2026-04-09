// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0099a408
// Entry Point: 0099a408
// Size: 148 bytes
// Signature: undefined FUN_0099a408(void)


void FUN_0099a408(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = param_1[1];
  pvVar1 = pvVar2;
  if (pvVar3 != pvVar2) {
    do {
      if ((*(void **)((long)pvVar3 + -0x28) != (void *)0x0) &&
         (*(char *)((long)pvVar3 + -0x20) != '\0')) {
                    /* try { // try from 0099a464 to 0099a467 has its CatchHandler @ 0099a49c */
        btAlignedFreeInternal(*(void **)((long)pvVar3 + -0x28));
      }
      pvVar1 = (void *)((long)pvVar3 + -0x40);
      *(undefined *)((long)pvVar3 + -0x20) = 1;
      *(undefined8 *)((long)pvVar3 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + -0x34) = 0;
      pvVar3 = pvVar1;
    } while (pvVar1 != pvVar2);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


