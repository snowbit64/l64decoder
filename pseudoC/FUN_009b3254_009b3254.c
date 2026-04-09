// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b3254
// Entry Point: 009b3254
// Size: 148 bytes
// Signature: undefined FUN_009b3254(void)


void FUN_009b3254(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0xa0) {
    if ((*(void **)(lVar1 + -0x68) != (void *)0x0) && (*(char *)(lVar1 + -0x60) != '\0')) {
                    /* try { // try from 009b32ac to 009b32af has its CatchHandler @ 009b32ec */
      btAlignedFreeInternal(*(void **)(lVar1 + -0x68));
    }
    *(undefined *)(lVar1 + -0x60) = 1;
    *(undefined8 *)(lVar1 + -0x68) = 0;
    *(undefined8 *)(lVar1 + -0x74) = 0;
    if ((*(void **)(lVar1 + -0x88) != (void *)0x0) && (*(char *)(lVar1 + -0x80) != '\0')) {
                    /* try { // try from 009b32cc to 009b32cf has its CatchHandler @ 009b32e8 */
      btAlignedFreeInternal(*(void **)(lVar1 + -0x88));
    }
    *(undefined *)(lVar1 + -0x80) = 1;
    *(undefined8 *)(lVar1 + -0x88) = 0;
    *(undefined8 *)(lVar1 + -0x94) = 0;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


