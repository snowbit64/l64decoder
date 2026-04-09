// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Denormalize
// Entry Point: 00d5608c
// Size: 96 bytes
// Signature: undefined Denormalize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::TMMesh::Denormalize() */

undefined8 HACD::TMMesh::Denormalize(void)

{
  long in_x0;
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = *(long *)(in_x0 + 0x18);
  if ((lVar2 != 0) && (dVar3 = *(double *)(in_x0 + 0x68), dVar3 != 0.0)) {
    pdVar1 = *(double **)(in_x0 + 0x10);
    while( true ) {
      lVar2 = lVar2 + -1;
      dVar5 = *(double *)(in_x0 + 0x70);
      dVar4 = *(double *)(in_x0 + 0x80);
      pdVar1[1] = pdVar1[1] * dVar3 + *(double *)(in_x0 + 0x78);
      *pdVar1 = *pdVar1 * dVar3 + dVar5;
      pdVar1[2] = dVar3 * pdVar1[2] + dVar4;
      pdVar1 = (double *)pdVar1[7];
      *(double **)(in_x0 + 0x10) = pdVar1;
      if (lVar2 == 0) break;
      dVar3 = *(double *)(in_x0 + 0x68);
    }
  }
  return 0;
}


