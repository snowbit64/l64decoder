// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00d00884
// Size: 56 bytes
// Signature: undefined IsUnit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::IsUnit() const */

bool CryptoPP::Integer::IsUnit(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(in_x0 + 0x18);
  do {
    if (lVar2 == 0) {
      return false;
    }
    lVar3 = lVar2 + -1;
    lVar1 = lVar2 + -1;
    lVar2 = lVar3;
  } while ((*(int **)(in_x0 + 0x20))[lVar1] == 0);
  if ((int)lVar3 != 0) {
    return false;
  }
  return **(int **)(in_x0 + 0x20) == 1;
}


