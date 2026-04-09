// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fullCheck
// Entry Point: 00b06f28
// Size: 24 bytes
// Signature: undefined fullCheck(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CopyProtection::fullCheck() */

void CopyProtection::fullCheck(void)

{
  undefined *in_x0;
  
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *in_x0 = 1;
  *(undefined4 *)(in_x0 + 0x40) = 0xffffff;
  return;
}


