// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueue
// Entry Point: 00c71a58
// Size: 68 bytes
// Signature: undefined __thiscall ~LockFreeQueue(LockFreeQueue<TheoraVideoDecoder::FileFrame> * this)


/* LockFreeQueue<TheoraVideoDecoder::FileFrame>::~LockFreeQueue() */

void __thiscall
LockFreeQueue<TheoraVideoDecoder::FileFrame>::~LockFreeQueue
          (LockFreeQueue<TheoraVideoDecoder::FileFrame> *this)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  while (lVar2 != 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = *(undefined8 *)((long)pvVar1 + 0x10008);
    operator_delete(pvVar1);
    lVar2 = *(long *)this;
  }
  return;
}


