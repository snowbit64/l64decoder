// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImageBuffer
// Entry Point: 009d9998
// Size: 56 bytes
// Signature: undefined getImageBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::getImageBuffer() */

long ProceduralPlacementMask::getImageBuffer(void)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = in_x0[0xb];
  if (lVar1 == 0) {
    (**(code **)(*in_x0 + 0x18))();
    lVar1 = in_x0[0xb];
  }
  return lVar1;
}


