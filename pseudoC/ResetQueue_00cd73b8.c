// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ResetQueue
// Entry Point: 00cd73b8
// Size: 128 bytes
// Signature: undefined __thiscall ResetQueue(BlockQueue * this, ulong param_1, ulong param_2)


/* CryptoPP::FilterWithBufferedInput::BlockQueue::ResetQueue(unsigned long, unsigned long) */

void __thiscall
CryptoPP::FilterWithBufferedInput::BlockQueue::ResetQueue
          (BlockQueue *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = param_2 * param_1;
  uVar1 = *(ulong *)(this + 0x10);
  pvVar2 = *(void **)(this + 0x18);
  if (uVar1 != uVar3) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar2);
    if (uVar3 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)UnalignedAllocate(uVar3);
    }
  }
  *(void **)(this + 0x18) = pvVar2;
  *(ulong *)(this + 0x20) = param_1;
  *(ulong *)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(void **)(this + 0x38) = pvVar2;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(ulong *)(this + 0x10) = uVar3;
  return;
}


