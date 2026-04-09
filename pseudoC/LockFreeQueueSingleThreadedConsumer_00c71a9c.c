// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueueSingleThreadedConsumer
// Entry Point: 00c71a9c
// Size: 76 bytes
// Signature: undefined __thiscall ~LockFreeQueueSingleThreadedConsumer(LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::AudioFrame> * this)


/* LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::AudioFrame>::~LockFreeQueueSingleThreadedConsumer()
    */

void __thiscall
LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::AudioFrame>::
~LockFreeQueueSingleThreadedConsumer
          (LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::AudioFrame> *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = *(void ***)(this + 8);
  while (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    *(void **)(this + 8) = ppvVar2[1];
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(ppvVar2);
    ppvVar2 = *(void ***)(this + 8);
  }
  return;
}


