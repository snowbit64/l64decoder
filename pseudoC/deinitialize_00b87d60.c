// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitialize
// Entry Point: 00b87d60
// Size: 104 bytes
// Signature: undefined deinitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ChunkedBitSquare::deinitialize() */

void ChunkedBitSquare::deinitialize(void)

{
  long in_x0;
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = *(void **)(in_x0 + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(int *)(in_x0 + 0x34) * *(int *)(in_x0 + 0xc) != 0) {
    uVar2 = 0;
    do {
      operator_delete(*(void **)((long)pvVar1 + uVar2 * 8));
      uVar2 = uVar2 + 1;
      pvVar1 = *(void **)(in_x0 + 0x28);
    } while (uVar2 < (uint)(*(int *)(in_x0 + 0x34) * *(int *)(in_x0 + 0xc)));
    if (pvVar1 == (void *)0x0) goto LAB_00b87db8;
  }
  operator_delete__(pvVar1);
LAB_00b87db8:
  *(undefined8 *)(in_x0 + 0x28) = 0;
  return;
}


