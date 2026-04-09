// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ByteQueue
// Entry Point: 00d1de30
// Size: 136 bytes
// Signature: undefined __thiscall ~ByteQueue(ByteQueue * this)


/* non-virtual thunk to CryptoPP::ByteQueue::~ByteQueue() */

void __thiscall CryptoPP::ByteQueue::~ByteQueue(ByteQueue *this)

{
  void **ppvVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__ByteQueue_0100f498;
  *(undefined ***)(this + -8) = &PTR__ByteQueue_0100f308;
  ppvVar1 = (void **)*(void **)(this + 0x18);
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
                    /* try { // try from 00d1de90 to 00d1de93 has its CatchHandler @ 00d1deb8 */
    UnalignedDeallocate(pvVar3);
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar4;
  }
  operator_delete(this + -8);
  return;
}


