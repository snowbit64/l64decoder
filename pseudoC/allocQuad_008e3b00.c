// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocQuad
// Entry Point: 008e3b00
// Size: 64 bytes
// Signature: undefined allocQuad(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TyreTrackGeometry::allocQuad() */

long TyreTrackGeometry::allocQuad(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = Ring::allocateNewSegment
                    ((Ring *)(in_x0 + 0x70),(Track *)0x0,*(MultiresTexture **)(in_x0 + 0xa8));
  return *(long *)(in_x0 + 0x98) + (ulong)(uint)(iVar1 << 2) * 0x24;
}


