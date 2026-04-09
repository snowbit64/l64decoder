// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Negate
// Entry Point: 00cf6bb8
// Size: 80 bytes
// Signature: undefined Negate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::Negate() */

void CryptoPP::Integer::Negate(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(in_x0 + 0x28) != 1) && (**(int **)(in_x0 + 0x20) == 0)) {
    lVar2 = *(long *)(in_x0 + 0x18);
    do {
      if (lVar2 == 0) {
        return;
      }
      lVar3 = lVar2 + -1;
      lVar1 = lVar2 + -1;
      lVar2 = lVar3;
    } while ((*(int **)(in_x0 + 0x20))[lVar1] == 0);
    if ((int)lVar3 == -1) {
      return;
    }
  }
  *(int *)(in_x0 + 0x28) = 1 - *(int *)(in_x0 + 0x28);
  return;
}


