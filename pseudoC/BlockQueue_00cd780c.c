// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockQueue
// Entry Point: 00cd780c
// Size: 60 bytes
// Signature: undefined __thiscall ~BlockQueue(BlockQueue * this)


/* CryptoPP::FilterWithBufferedInput::BlockQueue::~BlockQueue() */

void __thiscall CryptoPP::FilterWithBufferedInput::BlockQueue::~BlockQueue(BlockQueue *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  uVar1 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 0x10) <= *(ulong *)(this + 8)) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cd783c to 00cd783f has its CatchHandler @ 00cd7848 */
  UnalignedDeallocate(pvVar2);
  return;
}


