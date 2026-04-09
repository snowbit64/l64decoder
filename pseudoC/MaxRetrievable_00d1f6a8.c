// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRetrievable
// Entry Point: 00d1f6a8
// Size: 80 bytes
// Signature: undefined MaxRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::Walker::MaxRetrievable() const */

long CryptoPP::ByteQueue::Walker::MaxRetrievable(void)

{
  long *plVar1;
  long *plVar2;
  long in_x0;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = *(long *)(in_x0 + 0x18);
  plVar4 = *(long **)(lVar3 + 0x20);
  if (plVar4 != (long *)0x0) {
    lVar5 = 0;
    do {
      plVar1 = plVar4 + 5;
      plVar2 = plVar4 + 6;
      plVar4 = (long *)*plVar4;
      lVar5 = (*plVar2 + lVar5) - *plVar1;
    } while (plVar4 != (long *)0x0);
    return (*(long *)(lVar3 + 0x38) + lVar5) - *(long *)(in_x0 + 0x28);
  }
  return *(long *)(lVar3 + 0x38) - *(long *)(in_x0 + 0x28);
}


