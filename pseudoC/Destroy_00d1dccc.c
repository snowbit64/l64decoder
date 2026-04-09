// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Destroy
// Entry Point: 00d1dccc
// Size: 96 bytes
// Signature: undefined Destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::Destroy() */

void CryptoPP::ByteQueue::Destroy(void)

{
  void **ppvVar1;
  ulong uVar2;
  long in_x0;
  void *pvVar3;
  void *pvVar4;
  
  ppvVar1 = (void **)*(void **)(in_x0 + 0x20);
  while (ppvVar1 != (void **)0x0) {
    pvVar4 = *ppvVar1;
    pvVar3 = ppvVar1[4];
    uVar2 = (ulong)ppvVar1[2];
    if (ppvVar1[3] <= ppvVar1[2]) {
      uVar2 = (ulong)ppvVar1[3];
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)pvVar3 + (uVar2 - 1)) = 0;
    }
                    /* try { // try from 00d1dd0c to 00d1dd0f has its CatchHandler @ 00d1dd2c */
    UnalignedDeallocate(pvVar3);
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar4;
  }
  return;
}


