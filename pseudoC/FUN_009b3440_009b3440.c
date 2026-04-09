// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b3440
// Entry Point: 009b3440
// Size: 148 bytes
// Signature: undefined FUN_009b3440(void)


void FUN_009b3440(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    pvVar1 = *(void **)(lVar2 + -0x68);
    *(long *)(param_1 + 0x10) = lVar2 + -0xa0;
    if ((pvVar1 != (void *)0x0) && (*(char *)(lVar2 + -0x60) != '\0')) {
                    /* try { // try from 009b349c to 009b349f has its CatchHandler @ 009b34d8 */
      btAlignedFreeInternal(pvVar1);
    }
    *(undefined *)(lVar2 + -0x60) = 1;
    *(undefined8 *)(lVar2 + -0x68) = 0;
    *(undefined8 *)(lVar2 + -0x74) = 0;
    if ((*(void **)(lVar2 + -0x88) != (void *)0x0) && (*(char *)(lVar2 + -0x80) != '\0')) {
                    /* try { // try from 009b34bc to 009b34bf has its CatchHandler @ 009b34d4 */
      btAlignedFreeInternal(*(void **)(lVar2 + -0x88));
    }
    *(undefined8 *)(lVar2 + -0x94) = 0;
    *(undefined *)(lVar2 + -0x80) = 1;
    *(undefined8 *)(lVar2 + -0x88) = 0;
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


