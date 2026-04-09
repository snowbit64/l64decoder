// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilename
// Entry Point: 00a4e1a8
// Size: 64 bytes
// Signature: undefined getFilename(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getFilename() const */

long AudioSourceSample::getFilename(void)

{
  uint *puVar1;
  long lVar2;
  long in_x0;
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  lVar2 = (long)puVar1 + 9;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    lVar2 = *(long *)(puVar1 + 6);
  }
  return lVar2;
}


