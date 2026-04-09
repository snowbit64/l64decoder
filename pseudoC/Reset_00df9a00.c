// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reset
// Entry Point: 00df9a00
// Size: 56 bytes
// Signature: undefined Reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::StrPair::Reset() */

void tinyxml2::StrPair::Reset(void)

{
  undefined4 *in_x0;
  
  if (((*(byte *)((long)in_x0 + 1) >> 1 & 1) != 0) && (*(void **)(in_x0 + 2) != (void *)0x0)) {
    operator_delete__(*(void **)(in_x0 + 2));
  }
  *in_x0 = 0;
  *(undefined8 *)(in_x0 + 2) = 0;
  *(undefined8 *)(in_x0 + 4) = 0;
  return;
}


