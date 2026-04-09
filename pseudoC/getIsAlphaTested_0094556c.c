// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsAlphaTested
// Entry Point: 0094556c
// Size: 76 bytes
// Signature: undefined getIsAlphaTested(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::getIsAlphaTested() const */

ushort GsMaterial::getIsAlphaTested(void)

{
  long in_x0;
  long lVar1;
  
  if (*(char *)(in_x0 + 0x9c) == '\0') {
    lVar1 = *(long *)(in_x0 + 0x80);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x158) != '\0') {
        return 0;
      }
      if (*(char *)(lVar1 + 0x159) != '\0') {
        return 1;
      }
    }
    lVar1 = *(long *)(in_x0 + 0x30);
    if ((lVar1 != 0) || (lVar1 = *(long *)(in_x0 + 0x48), lVar1 != 0)) {
      return *(ushort *)(lVar1 + 0x48) >> 2 & 1;
    }
  }
  return 0;
}


