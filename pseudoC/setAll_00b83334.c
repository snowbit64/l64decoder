// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAll
// Entry Point: 00b83334
// Size: 144 bytes
// Signature: undefined setAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BitVector::setAll() */

void BitVector::setAll(void)

{
  uint uVar1;
  uint uVar2;
  long *in_x0;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(int *)(in_x0 + 1) + 7U >> 3;
  uVar2 = (uVar1 + 0xffff >> 0x10) - 1;
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      memset(*(void **)(*in_x0 + lVar4),0xff,0x10000);
      lVar4 = lVar4 + 8;
    } while (uVar3 * 8 - lVar4 != 0);
  }
  memset(*(void **)(*in_x0 + uVar3 * 8),0xff,(ulong)(uVar1 + uVar2 * -0x10000));
  return;
}


