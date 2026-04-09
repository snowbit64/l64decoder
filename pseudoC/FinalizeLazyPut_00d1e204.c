// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FinalizeLazyPut
// Entry Point: 00d1e204
// Size: 52 bytes
// Signature: undefined FinalizeLazyPut(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::FinalizeLazyPut() */

void CryptoPP::ByteQueue::FinalizeLazyPut(void)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = in_x0[7];
  in_x0[7] = 0;
  if (lVar1 != 0) {
    (**(code **)(*in_x0 + 0x38))(in_x0,in_x0[6],lVar1,0,1);
  }
  return;
}


