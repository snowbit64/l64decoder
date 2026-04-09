// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilename
// Entry Point: 00b87764
// Size: 40 bytes
// Signature: undefined getFilename(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMap::getFilename() const */

long DensityMap::getFilename(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_x0;
  
  lVar1 = in_x0 + 0xe1;
  uVar3 = (ulong)(*(byte *)(in_x0 + 0xe0) >> 1);
  if ((*(byte *)(in_x0 + 0xe0) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0xf0);
    uVar3 = *(ulong *)(in_x0 + 0xe8);
  }
  lVar2 = 0;
  if (uVar3 != 0) {
    lVar2 = lVar1;
  }
  return lVar2;
}


