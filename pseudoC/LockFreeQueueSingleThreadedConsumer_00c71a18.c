// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueueSingleThreadedConsumer
// Entry Point: 00c71a18
// Size: 64 bytes
// Signature: undefined __thiscall ~LockFreeQueueSingleThreadedConsumer(LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::FileFrame> * this)


/* LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::FileFrame>::~LockFreeQueueSingleThreadedConsumer()
    */

void __thiscall
LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::FileFrame>::
~LockFreeQueueSingleThreadedConsumer
          (LockFreeQueueSingleThreadedConsumer<TheoraVideoDecoder::FileFrame> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  while (pvVar1 != (void *)0x0) {
    *(undefined8 *)(this + 8) = *(undefined8 *)((long)pvVar1 + 0x10008);
    operator_delete(pvVar1);
    pvVar1 = *(void **)(this + 8);
  }
  return;
}


