// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CurrentSize
// Entry Point: 00d1e038
// Size: 60 bytes
// Signature: undefined CurrentSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::CurrentSize() const */

long CryptoPP::ByteQueue::CurrentSize(void)

{
  long *plVar1;
  long *plVar2;
  long in_x0;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(in_x0 + 0x20);
  if (plVar3 != (long *)0x0) {
    lVar4 = 0;
    do {
      plVar1 = plVar3 + 5;
      plVar2 = plVar3 + 6;
      plVar3 = (long *)*plVar3;
      lVar4 = (*plVar2 + lVar4) - *plVar1;
    } while (plVar3 != (long *)0x0);
    return *(long *)(in_x0 + 0x38) + lVar4;
  }
  return *(long *)(in_x0 + 0x38);
}


