// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drainStreamQueue
// Entry Point: 00c7214c
// Size: 168 bytes
// Signature: undefined drainStreamQueue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::drainStreamQueue() */

void TheoraVideoDecoder::drainStreamQueue(void)

{
  void **ppvVar1;
  long in_x0;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  void **ppvVar5;
  
  ppvVar1 = (void **)(in_x0 + 0xe8);
  pvVar4 = *ppvVar1;
  do {
    ppvVar5 = ppvVar1;
    if (pvVar4 == (void *)0x0) {
      ppvVar5 = *(void ***)(in_x0 + 0xe0);
      do {
        pvVar4 = *ppvVar5;
        pvVar2 = (void *)FUN_00f275d0(pvVar4,0,ppvVar5);
      } while (pvVar4 != pvVar2);
      *ppvVar1 = pvVar4;
      ppvVar5 = ppvVar1;
      if (pvVar4 == (void *)0x0) {
        return;
      }
    }
    do {
      pvVar2 = pvVar4;
      ppvVar3 = ppvVar5;
      ppvVar5 = (void **)((long)pvVar2 + 0x10008);
      pvVar4 = *ppvVar5;
    } while (pvVar4 != (void *)0x0);
    *ppvVar3 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(in_x0 + 0xe0) + 8);
    operator_delete(pvVar2);
    pvVar4 = *ppvVar1;
  } while( true );
}


