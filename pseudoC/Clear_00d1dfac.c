// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00d1dfac
// Size: 136 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::Clear() */

void CryptoPP::ByteQueue::Clear(void)

{
  ulong uVar1;
  long in_x0;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  
  ppvVar3 = *(void ***)(in_x0 + 0x20);
  ppvVar4 = (void **)*ppvVar3;
  if (*ppvVar3 != (void *)0x0) {
    do {
      pvVar5 = *ppvVar4;
      pvVar2 = ppvVar4[4];
      uVar1 = (ulong)ppvVar4[2];
      if (ppvVar4[3] <= ppvVar4[2]) {
        uVar1 = (ulong)ppvVar4[3];
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
      }
                    /* try { // try from 00d1dff8 to 00d1dffb has its CatchHandler @ 00d1e034 */
      UnalignedDeallocate(pvVar2);
      operator_delete(ppvVar4);
      ppvVar4 = (void **)pvVar5;
    } while (pvVar5 != (void *)0x0);
    ppvVar3 = *(void ***)(in_x0 + 0x20);
  }
  *(void ***)(in_x0 + 0x28) = ppvVar3;
  ppvVar3[5] = (void *)0x0;
  ppvVar3[6] = (void *)0x0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  **(undefined8 **)(in_x0 + 0x20) = 0;
  return;
}


