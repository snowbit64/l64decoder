// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters
// Entry Point: 00c86e90
// Size: 68 bytes
// Signature: undefined DL_GroupParameters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters<CryptoPP::Integer>::DL_GroupParameters() */

void CryptoPP::DL_GroupParameters<CryptoPP::Integer>::DL_GroupParameters(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long lVar2;
  
  lVar1 = in_x1[2];
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[3];
  lVar1 = in_x1[1];
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[4];
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x70);
  lVar2 = in_x1[5];
  *(undefined4 *)(in_x0 + 1) = 0;
  *(long *)((long)in_x0 + lVar1) = lVar2;
  return;
}


