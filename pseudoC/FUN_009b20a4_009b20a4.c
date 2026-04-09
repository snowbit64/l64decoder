// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b20a4
// Entry Point: 009b20a4
// Size: 144 bytes
// Signature: undefined FUN_009b20a4(void)


void FUN_009b20a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0xa0) {
    if ((*(void **)(lVar2 + -0x68) != (void *)0x0) && (*(char *)(lVar2 + -0x60) != '\0')) {
                    /* try { // try from 009b20f8 to 009b20fb has its CatchHandler @ 009b2138 */
      btAlignedFreeInternal(*(void **)(lVar2 + -0x68));
    }
    *(undefined *)(lVar2 + -0x60) = 1;
    *(undefined8 *)(lVar2 + -0x68) = 0;
    *(undefined8 *)(lVar2 + -0x74) = 0;
    if ((*(void **)(lVar2 + -0x88) != (void *)0x0) && (*(char *)(lVar2 + -0x80) != '\0')) {
                    /* try { // try from 009b2118 to 009b211b has its CatchHandler @ 009b2134 */
      btAlignedFreeInternal(*(void **)(lVar2 + -0x88));
    }
    *(undefined *)(lVar2 + -0x80) = 1;
    *(undefined8 *)(lVar2 + -0x88) = 0;
    *(undefined8 *)(lVar2 + -0x94) = 0;
  }
  param_1[1] = lVar1;
  return;
}


