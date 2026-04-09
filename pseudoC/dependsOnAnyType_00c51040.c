// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dependsOnAnyType
// Entry Point: 00c51040
// Size: 124 bytes
// Signature: undefined dependsOnAnyType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::dependsOnAnyType() const */

bool IR_Type::dependsOnAnyType(void)

{
  int *in_x0;
  int **ppiVar1;
  int iVar2;
  
  iVar2 = *in_x0;
  ppiVar1 = (int **)(in_x0 + 2);
  if ((iVar2 == 0) && (*(int *)ppiVar1 - 1U < 2)) {
    return true;
  }
  do {
    if (3 < iVar2 - 4U) {
      if (iVar2 == 3) {
        return *(char *)(*(long *)(in_x0 + 2) + 0x50) != '\0';
      }
      return false;
    }
    in_x0 = *ppiVar1;
    iVar2 = *in_x0;
    ppiVar1 = (int **)(in_x0 + 2);
  } while ((iVar2 != 0) || (1 < *(int *)ppiVar1 - 1U));
  return true;
}


