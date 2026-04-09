// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticateLastHeaderBlock
// Entry Point: 00ce270c
// Size: 80 bytes
// Signature: undefined AuthenticateLastHeaderBlock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GCM_Base::AuthenticateLastHeaderBlock() */

void CryptoPP::GCM_Base::AuthenticateLastHeaderBlock(void)

{
  uint uVar1;
  GCM_Base *in_x0;
  
  uVar1 = *(uint *)(in_x0 + 0x50);
  if (uVar1 != 0) {
    memset((void *)(*(long *)(in_x0 + 0x30) + (ulong)uVar1),0,(ulong)(0x10 - uVar1));
    *(undefined4 *)(in_x0 + 0x50) = 0;
    AuthenticateBlocks(in_x0,*(uchar **)(in_x0 + 0x30),0x10);
  }
  return;
}


