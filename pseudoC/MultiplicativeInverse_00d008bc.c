// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00d008bc
// Size: 64 bytes
// Signature: undefined MultiplicativeInverse(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::MultiplicativeInverse() const */

void CryptoPP::Integer::MultiplicativeInverse(void)

{
  long lVar1;
  undefined8 *in_x0;
  Integer *in_x8;
  long lVar2;
  long lVar3;
  
  lVar2 = in_x0[3];
  do {
    if (lVar2 == 0) goto LAB_00d008f0;
    lVar3 = lVar2 + -1;
    lVar1 = lVar2 + -1;
    lVar2 = lVar3;
  } while (((int *)in_x0[4])[lVar1] == 0);
  if (((int)lVar3 != 0) || (*(int *)in_x0[4] != 1)) {
LAB_00d008f0:
    in_x0 = &DAT_02120810;
  }
  Integer(in_x8,(Integer *)in_x0);
  return;
}


