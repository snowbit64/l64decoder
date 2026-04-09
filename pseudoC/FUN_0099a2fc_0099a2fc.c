// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0099a2fc
// Entry Point: 0099a2fc
// Size: 148 bytes
// Signature: undefined FUN_0099a2fc(void)


void FUN_0099a2fc(void **param_1)

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
      if ((*(void **)((long)pvVar3 + -0x10) != (void *)0x0) &&
         (*(char *)((long)pvVar3 + -8) != '\0')) {
                    /* try { // try from 0099a358 to 0099a35b has its CatchHandler @ 0099a390 */
        btAlignedFreeInternal(*(void **)((long)pvVar3 + -0x10));
      }
      pvVar1 = (void *)((long)pvVar3 + -0x50);
      *(undefined *)((long)pvVar3 + -8) = 1;
      *(undefined8 *)((long)pvVar3 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + -0x1c) = 0;
      pvVar3 = pvVar1;
    } while (pvVar1 != pvVar2);
    pvVar1 = *param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


