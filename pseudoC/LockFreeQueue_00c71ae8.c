// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueue
// Entry Point: 00c71ae8
// Size: 84 bytes
// Signature: undefined __thiscall ~LockFreeQueue(LockFreeQueue<TheoraVideoDecoder::AudioFrame> * this)


/* LockFreeQueue<TheoraVideoDecoder::AudioFrame>::~LockFreeQueue() */

void __thiscall
LockFreeQueue<TheoraVideoDecoder::AudioFrame>::~LockFreeQueue
          (LockFreeQueue<TheoraVideoDecoder::AudioFrame> *this)

{
  long lVar1;
  void **ppvVar2;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    ppvVar2 = *(void ***)this;
    *(void **)this = ppvVar2[1];
    if (*ppvVar2 != (void *)0x0) {
      operator_delete__(*ppvVar2);
    }
    operator_delete(ppvVar2);
    lVar1 = *(long *)this;
  }
  return;
}


