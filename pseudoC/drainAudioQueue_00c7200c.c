// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drainAudioQueue
// Entry Point: 00c7200c
// Size: 160 bytes
// Signature: undefined drainAudioQueue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::drainAudioQueue() */

void TheoraVideoDecoder::drainAudioQueue(void)

{
  void **ppvVar1;
  long in_x0;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  
  ppvVar1 = (void **)(in_x0 + 200);
  do {
    ppvVar5 = ppvVar1;
    ppvVar3 = (void **)*ppvVar1;
    if ((void **)*ppvVar1 == (void **)0x0) {
      ppvVar5 = *(void ***)(in_x0 + 0xc0);
      do {
        ppvVar3 = (void **)*ppvVar5;
        ppvVar2 = (void **)FUN_00f275d0(ppvVar3,0,ppvVar5);
      } while (ppvVar3 != ppvVar2);
      *ppvVar1 = ppvVar3;
      ppvVar5 = ppvVar1;
      if (ppvVar3 == (void **)0x0) {
        return;
      }
    }
    do {
      ppvVar4 = ppvVar3;
      ppvVar2 = ppvVar5;
      ppvVar3 = (void **)ppvVar4[1];
      ppvVar5 = ppvVar4 + 1;
    } while (ppvVar3 != (void **)0x0);
    *ppvVar2 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0xc0) + 8);
    if (*ppvVar4 != (void *)0x0) {
      operator_delete__(*ppvVar4);
    }
    operator_delete(ppvVar4);
  } while( true );
}


