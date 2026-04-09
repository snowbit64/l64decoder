// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumInfoLayers
// Entry Point: 008eb76c
// Size: 28 bytes
// Signature: undefined getNumInfoLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::getNumInfoLayers() const */

int BaseTerrain::getNumInfoLayers(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x58) - *(long *)(in_x0 + 0x50)) >> 3) * -0x45d1745d;
}


