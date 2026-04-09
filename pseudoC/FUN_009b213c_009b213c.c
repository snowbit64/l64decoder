// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009b213c
// Entry Point: 009b213c
// Size: 112 bytes
// Signature: undefined FUN_009b213c(void)


void FUN_009b213c(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 0x90);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x98) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(void **)(param_2 + 0x38) != (void *)0x0) && (*(char *)(param_2 + 0x40) != '\0')) {
                    /* try { // try from 009b216c to 009b216f has its CatchHandler @ 009b21b0 */
    btAlignedFreeInternal(*(void **)(param_2 + 0x38));
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined *)(param_2 + 0x40) = 1;
  if ((*(void **)(param_2 + 0x18) != (void *)0x0) && (*(char *)(param_2 + 0x20) != '\0')) {
                    /* try { // try from 009b2190 to 009b2193 has its CatchHandler @ 009b21ac */
    btAlignedFreeInternal(*(void **)(param_2 + 0x18));
  }
  *(undefined *)(param_2 + 0x20) = 1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}


