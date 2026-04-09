// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBlock
// Entry Point: 00cd7438
// Size: 60 bytes
// Signature: undefined GetBlock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::FilterWithBufferedInput::BlockQueue::GetBlock() */

long CryptoPP::FilterWithBufferedInput::BlockQueue::GetBlock(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(in_x0 + 0x20);
  if (*(ulong *)(in_x0 + 0x30) < uVar4) {
    return 0;
  }
  lVar3 = *(long *)(in_x0 + 0x38);
  lVar1 = lVar3 + uVar4;
  lVar2 = *(long *)(in_x0 + 0x18);
  if (lVar1 != *(long *)(in_x0 + 0x18) + *(long *)(in_x0 + 0x10)) {
    lVar2 = lVar1;
  }
  *(ulong *)(in_x0 + 0x30) = *(ulong *)(in_x0 + 0x30) - uVar4;
  *(long *)(in_x0 + 0x38) = lVar2;
  return lVar3;
}


