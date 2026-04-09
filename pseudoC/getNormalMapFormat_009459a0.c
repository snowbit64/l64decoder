// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormalMapFormat
// Entry Point: 009459a0
// Size: 52 bytes
// Signature: undefined getNormalMapFormat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::getNormalMapFormat() const */

undefined4 GsMaterial::getNormalMapFormat(void)

{
  long in_x0;
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x38);
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(ushort *)(lVar2 + 0x48) >> 2 & 1) == 0) {
    uVar1 = 1;
    if (*(int *)(lVar2 + 0x4c) != 0xf) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 3;
}


