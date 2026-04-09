// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSoftBodies
// Entry Point: 00f74850
// Size: 96 bytes
// Signature: undefined updateSoftBodies(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDefaultSoftBodySolver::updateSoftBodies() */

void btDefaultSoftBodySolver::updateSoftBodies(void)

{
  int iVar1;
  long in_x0;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(in_x0 + 0x1c);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(*(long *)(*(long *)(in_x0 + 0x28) + lVar3 * 8) + 0xec);
      if (iVar1 != 2 && iVar1 != 5) {
        btSoftBody::updateNormals();
        iVar2 = *(int *)(in_x0 + 0x1c);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}


