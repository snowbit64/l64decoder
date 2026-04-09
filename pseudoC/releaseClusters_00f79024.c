// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseClusters
// Entry Point: 00f79024
// Size: 64 bytes
// Signature: undefined releaseClusters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::releaseClusters() */

void btSoftBody::releaseClusters(void)

{
  int iVar1;
  btSoftBody *in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x5dc);
  while (0 < iVar1) {
    releaseCluster(in_x0,0);
    iVar1 = *(int *)(in_x0 + 0x5dc);
  }
  return;
}


